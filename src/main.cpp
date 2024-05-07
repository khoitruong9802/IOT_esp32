#include <lvgl.h>
#include <TFT_eSPI.h>
#include "gui/ui.h"

#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>

#include <WiFi.h>
#include <PubSubClient.h>

#define DHTPIN 27     // Digital pin connected to the DHT sensor
#define DHTTYPE DHT22 // DHT 22 (AM2302)
DHT_Unified dht(DHTPIN, DHTTYPE);

const char *ssid = "";
const char *password = "";
#define MAX_MQTT_CONNECT_TIMES 5
const char *mqtt_server = "io.adafruit.com";
const int mqtt_port = 1883;
const char *mqtt_user = "";
const char *mqtt_password = "";

const char *topic_nutnhan1 = "";
const char *topic_cambien1 = "";
const char *topic_cambien2 = "";
const char *topic_cambien3 = "";
// Initialize the WiFi and MQTT clients
WiFiClient espClient;
PubSubClient client(espClient);

/*Don't forget to set Sketchbook location in File/Preferencesto the path of your UI project (the parent foder of this INO file)*/

/*Change to your screen resolution*/
static const uint16_t screenWidth = 160;
static const uint16_t screenHeight = 128;

static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[screenWidth * screenHeight / 10];

uint32_t LV_EVENT_MQTT_UPDATE_LABEL = lv_event_register_id();
uint32_t LV_EVENT_MQTT_UPDATE_SWITCH = lv_event_register_id();
void mqtt_update_handler(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    char *data = (char *)e->param;
    Serial.printf("data = %s, pointer = %p, pointer to = %p\n", data, &data, data);
    if (event_code == LV_EVENT_MQTT_UPDATE_LABEL)
    {
        _ui_label_set_property(target, _UI_LABEL_PROPERTY_TEXT, data);
    }
    else if (event_code == LV_EVENT_MQTT_UPDATE_SWITCH)
    {
        if (strcmp(data, "0") == 0)
        {
            _ui_state_modify(target, LV_STATE_CHECKED, _UI_MODIFY_STATE_REMOVE);
            digitalWrite(32, LOW);
        }
        else if (strcmp(data, "1") == 0)
        {
            _ui_state_modify(target, LV_STATE_CHECKED, _UI_MODIFY_STATE_ADD);
            digitalWrite(32, HIGH);
        }
    }
    delete[] data;
}

TFT_eSPI tft = TFT_eSPI(screenWidth, screenHeight); /* TFT instance */

#if LV_USE_LOG != 0
/* Serial debugging */
void my_print(const char *buf)
{
    Serial.printf(buf);
    Serial.flush();
}
#endif

/* Display flushing */
void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
{
    uint32_t w = (area->x2 - area->x1 + 1);
    uint32_t h = (area->y2 - area->y1 + 1);

    tft.startWrite();
    tft.setAddrWindow(area->x1, area->y1, w, h);
    tft.pushColors((uint16_t *)&color_p->full, w * h, true);
    tft.endWrite();

    lv_disp_flush_ready(disp);
}

/*Read the touchpad*/
void my_touchpad_read(lv_indev_drv_t *indev_driver, lv_indev_data_t *data)
{
    uint16_t touchX = 0, touchY = 0;

    bool touched = false; // tft.getTouch( &touchX, &touchY, 600 );

    if (!touched)
    {
        data->state = LV_INDEV_STATE_REL;
    }
    else
    {
        data->state = LV_INDEV_STATE_PR;

        /*Set the coordinates*/
        data->point.x = touchX;
        data->point.y = touchY;

        Serial.print("Data x ");
        Serial.println(touchX);

        Serial.print("Data y ");
        Serial.println(touchY);
    }
}

void lvgl_run(void *parameter)
{
    for (;;)
    {
        lv_timer_handler(); /* let the GUI do its work */
        delay(5);
    }
}

void process_command(const char *payload, unsigned int length)
{

    char *command = new char[length + 1];
    memcpy(command, payload, length);
    command[length] = '\0';

    Serial.printf("Message received: %s from Serial\n", command);

    if (strcmp(payload, "0") == 0 || strcmp(payload, "1") == 0)
    {
        Serial.println("Update switch!!");
        lv_event_send(ui_Switch1, (lv_event_code_t)LV_EVENT_MQTT_UPDATE_SWITCH, (void *)command);
    }
}

void receive_command(void *parameter)
{
    for (;;) {
        String receivedData;
        if (Serial.available() > 0)
        {
            // Read the incoming byte
            char incomingByte = Serial.read();
            if (incomingByte == '!') {
                receivedData = Serial.readStringUntil('#');
            }
            // Print the received byte to the serial monitor
            Serial.print("Received data: ");
            Serial.println(receivedData);

            const char *data = receivedData.c_str();
            process_command(data, 4);

            receivedData = "";
        }
    }
}

float mapFloat(float x, float in_min, float in_max, float out_min, float out_max)
{
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

int count = 0;
void sensor_publish(void *parameter)
{
    // Initialize device.
    dht.begin();
    sensor_t sensor;
    for (;;)
    {
        // Get temperature event and print its value.
        sensors_event_t event;
        float temp, humi, light;
        dht.temperature().getEvent(&event);
        if (isnan(event.temperature))
        {
            Serial.println(F("Error reading temperature!"));
        }
        else
        {
            Serial.print(F("Temperature: "));
            Serial.print(event.temperature);
            Serial.println(F("°C"));
            temp = event.temperature;
        }
        // Get humidity event and print its value.
        dht.humidity().getEvent(&event);
        if (isnan(event.relative_humidity))
        {
            Serial.println(F("Error reading humidity!"));
        }
        else
        {
            Serial.print(F("Humidity: "));
            Serial.print(event.relative_humidity);
            Serial.println(F("%"));
            humi = event.relative_humidity;
        }

        float lightValue = analogRead(33);
        lightValue = 100 - mapFloat(lightValue, 0, 4095, 0, 100);

        light = lightValue;

        // Buffer to store the formatted string
        char buffer1[10]; // Adjust size based on your requirements
        char buffer2[10]; // Adjust size based on your requirements
        char buffer3[10]; // Adjust size based on your requirements
        // Format the float value with one decimal point
        snprintf(buffer1, sizeof(buffer1), "%.1f", temp);
        snprintf(buffer2, sizeof(buffer2), "%.1f", humi);
        snprintf(buffer3, sizeof(buffer3), "%.1f", light);

        char *temp1 = new char[5];
        memcpy(temp1, buffer1, 4);
        temp1[4] = '\0';
        char *temp2 = new char[5];
        memcpy(temp2, buffer2, 4);
        temp2[4] = '\0';
        char *temp3 = new char[5];
        memcpy(temp3, buffer3, 4);
        temp3[4] = '\0';
        lv_event_send(ui_Label2, (lv_event_code_t)LV_EVENT_MQTT_UPDATE_LABEL, (void *)temp1);
        lv_event_send(ui_Label3, (lv_event_code_t)LV_EVENT_MQTT_UPDATE_LABEL, (void *)temp2);
        lv_event_send(ui_Label4, (lv_event_code_t)LV_EVENT_MQTT_UPDATE_LABEL, (void *)temp3);

        Serial.print("Light: ");
        Serial.print(lightValue);
        Serial.println("%");

        if (count == 15)
        {
            Serial.print("!1:T:");
            Serial.print(buffer1);
            Serial.print("#");
            Serial.print("!1:H:");
            Serial.print(buffer2);
            Serial.print("#");
            Serial.print("!1:L:");
            Serial.print(buffer3);
            Serial.print("#");
            count = 0;
        }
        delay(1000);
        count++;
    }
}

void setup()
{
    Serial.begin(115200); /* prepare for possible serial debug */
    pinMode(32, OUTPUT);

    String LVGL_Arduino = "Hello Arduino! ";
    LVGL_Arduino += String('V') + lv_version_major() + "." + lv_version_minor() + "." + lv_version_patch();

    Serial.println(LVGL_Arduino);
    Serial.println("I am LVGL_Arduino");

    lv_init();

#if LV_USE_LOG != 0
    lv_log_register_print_cb(my_print); /* register print function for debugging */
#endif

    tft.begin();        /* TFT init */
    tft.setRotation(3); /* Landscape orientation, flipped */

    lv_disp_draw_buf_init(&draw_buf, buf, NULL, screenWidth * screenHeight / 10);

    /*Initialize the display*/
    static lv_disp_drv_t disp_drv;
    lv_disp_drv_init(&disp_drv);
    /*Change the following line to your display resolution*/
    disp_drv.hor_res = screenWidth;
    disp_drv.ver_res = screenHeight;
    disp_drv.flush_cb = my_disp_flush;
    disp_drv.draw_buf = &draw_buf;
    lv_disp_drv_register(&disp_drv);

    /*Initialize the (dummy) input device driver*/
    static lv_indev_drv_t indev_drv;
    lv_indev_drv_init(&indev_drv);
    indev_drv.type = LV_INDEV_TYPE_POINTER;
    indev_drv.read_cb = my_touchpad_read;
    lv_indev_drv_register(&indev_drv);

    ui_init();

    lv_obj_add_event_cb(ui_Label2, mqtt_update_handler, (lv_event_code_t)LV_EVENT_MQTT_UPDATE_LABEL, NULL);
    lv_obj_add_event_cb(ui_Label3, mqtt_update_handler, (lv_event_code_t)LV_EVENT_MQTT_UPDATE_LABEL, NULL);
    lv_obj_add_event_cb(ui_Label4, mqtt_update_handler, (lv_event_code_t)LV_EVENT_MQTT_UPDATE_LABEL, NULL);
    lv_obj_add_event_cb(ui_Switch1, mqtt_update_handler, (lv_event_code_t)LV_EVENT_MQTT_UPDATE_SWITCH, NULL);

    Serial.println("Setup done");
    xTaskCreate(lvgl_run, "lvgl_run", 4096, NULL, 1, NULL);
    xTaskCreate(sensor_publish, "sensor_publish", 4096, NULL, 1, NULL);
    xTaskCreate(receive_command, "receive_command", 4096, NULL, 1, NULL);
}

void loop()
{
}
