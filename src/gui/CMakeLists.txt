SET(SOURCES screens/ui_Screen1.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    ui_events.c
    images/ui_img_thermometer_png.c
    images/ui_img_humidity_png.c
    images/ui_img_lightbulb_png.c
    images/ui_img_diode_png.c)

add_library(ui ${SOURCES})
