// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "../ui.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
    #define LV_ATTRIBUTE_MEM_ALIGN
#endif

// IMAGE DATA: assets/thermometer.png
const LV_ATTRIBUTE_MEM_ALIGN uint8_t ui_img_thermometer_png_data[] = {
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0xC9,0x00,0x00,0xEF,0x00,0x00,0xFF,0x00,0x00,0xBE,0x00,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x79,0xE3,0x18,0xFF,0x72,0x8C,0xFF,0x5D,0xE7,0xFF,0xBF,0xE7,0xFF,0x55,0x95,0xFF,0x24,0x21,0xFF,0x00,0x00,0x9B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x50,0xA2,0x10,0xFA,0x1C,0xDF,0xFF,0xDF,0xF7,0xFF,0xDF,0xF7,0xFF,0xDF,0xF7,0xFF,0xBF,0xE7,0xFF,0x5E,0xD7,0xFF,0x66,0x29,0xFF,0x00,0x00,0x57,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x16,0x00,0x00,0x3B,0x00,0x00,0x3B,0x00,0x00,0x3B,0x00,0x00,0x3B,0x00,0x00,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xAF,0x92,0x8C,0xFF,0xDF,0xF7,0xFF,0xDB,0xD6,0xFF,0x0C,0x5B,0xFF,0x6A,0x4A,0xFF,0x5A,0xC6,0xFF,0xBF,0xDF,0xFF,0xB7,0xA5,0xFF,0x00,0x00,0xEF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x68,0x00,0x00,0xC3,0x00,0x00,0xC3,0x00,0x00,0xC3,0x00,0x00,0xC3,0x00,0x00,0x94,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xDF,0xDB,0xD6,0xFF,0xDF,0xF7,0xFF,0x8A,0x4A,0xFF,0x4A,0x3A,0xFF,0x6A,0x3A,0xFF,0x82,0x10,0xFF,0xBF,0xDF,0xFF,0x9F,0xDF,0xFF,0x41,0x00,0xFF,0x00,0x00,0x0A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF1,0xFC,0xD6,0xFF,0xDF,0xF7,0xFF,0xA6,0x31,0xFF,0xF1,0x63,0xFF,0xB4,0x74,0xFF,0x41,0x08,0xFF,0xBF,0xDF,0xFF,
    0xBF,0xDF,0xFF,0x61,0x08,0xFF,0x00,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF1,0xFC,0xD6,0xFF,0xDF,0xF7,0xFF,0xA6,0x31,0xFF,0xF1,0x63,0xFF,0xB4,0x74,0xFF,0x41,0x08,0xFF,0xBF,0xDF,0xFF,0xBF,0xDF,0xFF,0x61,0x08,0xFF,0x00,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0B,0x00,0x00,0x19,0x00,0x00,0x19,0x00,0x00,0x19,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF1,0xFC,0xD6,0xFF,
    0xDF,0xF7,0xFF,0xA6,0x31,0xFF,0xF1,0x63,0xFF,0x16,0x7D,0xFF,0x51,0x7C,0xFF,0xBF,0xDF,0xFF,0xBF,0xDF,0xFF,0x61,0x08,0xFF,0x00,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x68,0x00,0x00,0xF2,0x00,0x00,0xF2,0x00,0x00,0xF2,0x00,0x00,0x61,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF1,0xFC,0xD6,0xFF,0xDF,0xF7,0xFF,0xA6,0x31,0xFF,0xF1,0x63,0xFF,0x16,0x7D,0xFF,0x5A,0xB6,0xFF,0xBF,0xDF,0xFF,0xBF,0xDF,0xFF,0x61,0x08,0xFF,0x00,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF1,0xFC,0xD6,0xFF,0xDF,0xF7,0xFF,0xA6,0x31,0xFF,0xF1,0x63,0xFF,0xB4,0x74,0xFF,0x82,0x08,0xFF,0xBF,0xDF,0xFF,0xBF,0xDF,0xFF,0x61,0x08,0xFF,0x00,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF1,0xFC,0xD6,0xFF,0xDF,0xF7,0xFF,0xA6,0x31,0xFF,0xF1,0x63,0xFF,0x94,0x74,0xFF,0x41,0x08,0xFF,0xBF,0xDF,0xFF,0xBF,0xDF,0xFF,0x61,0x08,0xFF,0x00,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF1,0xFC,0xD6,0xFF,0xDF,0xF7,0xFF,0xA6,0x31,0xFF,0x00,0x00,0xFF,0x41,0x08,0xFF,0x41,0x08,0xFF,0xBF,0xDF,0xFF,0xBF,0xDF,0xFF,0x61,0x08,0xFF,0x00,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x00,0x00,0xED,0x00,0x00,0xED,0x00,0x00,0xED,0x00,0x00,0xED,0x00,0x00,0x93,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF1,0xFC,0xD6,0xFF,0xDF,0xF7,0xFF,0xA6,0x31,0xFF,0xE5,0xB0,0xFF,0x05,0xC1,0xFF,0x41,0x08,0xFF,0xBF,0xDF,0xFF,0xBF,0xDF,0xFF,0x61,0x08,0xFF,0x00,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x00,0x22,
    0x00,0x00,0x15,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF1,0xFC,0xD6,0xFF,0xDF,0xF7,0xFF,0xA6,0x31,0xFF,0x05,0xC1,0xFF,0x26,0xE1,0xFF,0x41,0x08,0xFF,0xBF,0xDF,0xFF,0xBF,0xDF,0xFF,0x61,0x08,0xFF,0x00,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF1,0xFC,0xD6,0xFF,0xDF,0xF7,0xFF,0xA6,0x31,0xFF,0x05,0xC1,0xFF,0x26,0xE1,0xFF,0x41,0x08,0xFF,0xBF,0xDF,0xFF,0xBF,0xDF,0xFF,0x61,0x08,0xFF,0x00,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF1,0xFC,0xD6,0xFF,0xDF,0xF7,0xFF,0xA6,0x31,0xFF,0x05,0xC1,0xFF,0x26,0xE1,0xFF,0x41,0x08,0xFF,0xBF,0xDF,0xFF,0xBF,0xDF,0xFF,0x61,0x08,0xFF,0x00,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5E,0x00,0x00,0xBE,0x00,0x00,0xBE,0x00,0x00,0xBD,0x00,0x00,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF1,0xFC,0xD6,0xFF,0xDF,0xF7,0xFF,0xA6,0x31,0xFF,0x05,0xC1,0xFF,0x26,0xE1,0xFF,0x41,0x08,0xFF,
    0xBF,0xDF,0xFF,0xBF,0xDF,0xFF,0x61,0x08,0xFF,0x00,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x41,0x00,0x00,0x41,0x00,0x00,0x40,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF1,0xFC,0xD6,0xFF,0xDF,0xF7,0xFF,0xA6,0x31,0xFF,0x05,0xC1,0xFF,0x26,0xE1,0xFF,0x41,0x08,0xFF,0xBF,0xDF,0xFF,0xBF,0xDF,0xFF,0x61,0x08,0xFF,0x00,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF1,
    0xFC,0xD6,0xFF,0xDF,0xF7,0xFF,0xA6,0x31,0xFF,0x05,0xC1,0xFF,0x26,0xE1,0xFF,0x41,0x08,0xFF,0xBF,0xDF,0xFF,0xBF,0xDF,0xFF,0x61,0x08,0xFF,0x00,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF1,0xFC,0xD6,0xFF,0xDF,0xF7,0xFF,0xA6,0x31,0xFF,0x05,0xC1,0xFF,0x26,0xE1,0xFF,0x41,0x08,0xFF,0xBF,0xDF,0xFF,0xBF,0xDF,0xFF,0x61,0x08,0xFF,0x00,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x8F,0x00,0x00,0x8F,0x00,0x00,0x8F,0x00,0x00,0x8F,0x00,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0B,0x00,0x00,0xF1,0xFC,0xD6,0xFF,0xDF,0xF7,0xFF,0xA6,0x31,0xFF,0x05,0xC1,0xFF,0x26,0xE1,0xFF,0x41,0x08,0xFF,0xBF,0xDF,0xFF,0xBF,0xDF,0xFF,0x61,0x08,0xFF,0x00,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x00,0x00,0x70,0x00,0x00,0x70,0x00,0x00,0x70,0x00,0x00,0x70,0x00,0x00,0x53,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0xA4,0xE7,0x39,0xFF,0x7E,0xE7,0xFF,0xDF,0xF7,0xFF,0xA6,0x31,0xFF,0x05,0xC1,0xFF,0x26,0xE1,0xFF,0x41,0x08,0xFF,0xDF,0xE7,0xFF,0xBF,0xDF,0xFF,0xAB,0x4A,0xFF,0x00,0x00,0xCE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7A,0x86,0x31,0xFF,0x5D,0xE7,0xFF,0xDF,0xF7,0xFF,0x96,0xAD,0xFF,0x82,0x08,0xFF,0x05,0xC1,0xFF,0x47,0xF1,0xFF,0x41,0x08,0xFF,0x92,0x8C,0xFF,0xBF,0xE7,0xFF,0xBF,0xDF,0xFF,0x6A,0x42,0xFF,0x00,0x00,0xB4,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x82,0x10,0xEF,0xBB,0xCE,0xFF,0xDF,0xF7,0xFF,0xEF,0x73,0xFF,0x62,0x28,0xFF,0xC8,0xB9,0xFF,0x2A,0xF2,0xFF,0x88,0xF9,0xFF,0x05,0xB9,0xFF,0x41,0x38,0xFF,0x28,0x42,0xFF,0xBF,0xDF,0xFF,0x3D,0xCF,0xFF,0xE3,0x18,0xFF,0x00,0x00,0x27,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7A,0x2C,0x63,0xFF,0xDF,0xF7,0xFF,0x75,0xA5,0xFF,0x41,0x18,0xFF,0x29,0xEA,0xFF,0x4A,0xFA,0xFF,0x4A,0xFA,0xFF,0x2A,0xFA,0xFF,0x67,0xF9,0xFF,0x47,0xF9,0xFF,0x41,0x38,0xFF,0xB3,0x8C,0xFF,0xBF,0xDF,0xFF,0x31,0x74,0xFF,0x00,0x00,0xA8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xB5,0x75,0xA5,0xFF,0xDF,0xF7,0xFF,0x6A,0x4A,0xFF,0x87,0xA9,0xFF,0x4A,0xFA,0xFF,0x4A,0xFA,0xFF,0x4A,0xFA,0xFF,0x4A,0xFA,0xFF,0xC8,0xF9,0xFF,0x47,0xF9,0xFF,0x05,0xC1,0xFF,0x62,0x08,0xFF,0xBF,0xDF,0xFF,0x3D,0xCF,0xFF,
    0x00,0x00,0xEF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x35,0xA5,0x71,0x5D,0xE7,0xFF,0xDF,0xF7,0xFF,0xE4,0x18,0xFF,0x09,0xDA,0xFF,0x4A,0xFA,0xFF,0x4A,0xFA,0xFF,0x4A,0xFA,0xFF,0x4A,0xFA,0xFF,0x09,0xFA,0xFF,0x47,0xF9,0xFF,0x47,0xF9,0xFF,0x00,0x08,0xFF,0x5E,0xD7,0xFF,0xBF,0xDF,0xFF,0x20,0x00,0xFF,0x00,0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x31,0x84,0x70,0xDF,0xF7,0xFF,0xDF,0xF7,0xFF,0xE4,0x18,0xFF,0xC8,0xC9,0xFF,0x4A,0xFA,0xFF,0x4A,0xFA,0xFF,0x4A,0xFA,0xFF,0x4A,0xFA,0xFF,
    0xE9,0xF9,0xFF,0x47,0xF9,0xFF,0x47,0xF1,0xFF,0x00,0x00,0xFF,0x7F,0xD7,0xFF,0xBF,0xDF,0xFF,0x20,0x00,0xFF,0x00,0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xD7,0xB5,0xFF,0xDF,0xF7,0xFF,0xEC,0x5A,0xFF,0x46,0x91,0xFF,0x4A,0xFA,0xFF,0x4A,0xFA,0xFF,0x4A,0xFA,0xFF,0x4A,0xFA,0xFF,0xC8,0xF9,0xFF,0x47,0xF9,0xFF,0xE5,0xA8,0xFF,0x66,0x29,0xFF,0xBF,0xDF,0xFF,0x7A,0xBE,0xFF,0x00,0x00,0xE2,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x8A,0x4D,0x63,0xFF,0xDF,0xF7,0xFF,
    0x9A,0xCE,0xFF,0x20,0x10,0xFF,0xC8,0xC9,0xFF,0x4A,0xFA,0xFF,0x4A,0xFA,0xFF,0x2A,0xFA,0xFF,0x67,0xF9,0xFF,0x26,0xE9,0xFF,0x21,0x20,0xFF,0x15,0x95,0xFF,0xBF,0xDF,0xFF,0x11,0x74,0xFF,0x00,0x00,0xAF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x62,0x08,0xFF,0xDB,0xD6,0xFF,0xDF,0xF7,0xFF,0x35,0xA5,0xFF,0x20,0x08,0xFF,0x25,0x79,0xFF,0xA7,0xC1,0xFF,0x26,0xC9,0xFF,0xC4,0x98,0xFF,0x41,0x18,0xFF,0x6E,0x6B,0xFF,0xBF,0xE7,0xFF,0x3D,0xCF,0xFF,0x45,0x21,0xFF,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x93,0xE7,0x39,0xFF,0xDF,0xF7,0xFF,0xDF,0xF7,0xFF,0x59,0xC6,0xFF,0x4D,0x63,0xFF,0xE3,0x18,0xFF,0xA2,0x10,0xFF,0xE8,0x39,0xFF,0x18,0xBE,0xFF,0xDF,0xE7,0xFF,0xBF,0xDF,0xFF,0x0C,0x5B,0xFF,0x00,0x00,0x9E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xB8,0xE8,0x39,0xFF,0x5E,0xE7,0xFF,0xDF,0xF7,0xFF,0xDF,0xF7,0xFF,0xDF,0xF7,0xFF,0xDF,0xF7,0xFF,0xDF,0xF7,0xFF,0xDF,0xEF,0xFF,0x3D,0xCF,0xFF,0xCB,0x52,0xFF,0x00,0x00,0xCF,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x8E,0x20,0x00,0xFF,0x8E,0x6B,0xFF,0xF8,0xB5,0xFF,0x9E,0xEF,0xFF,0x3D,0xDF,0xFF,0x18,0xB6,0xFF,0xD0,0x6B,0xFF,0xA2,0x10,0xFF,0x00,0x00,0xA6,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x00,0x00,0x8D,0x00,0x00,0xD9,0x00,0x00,0xFE,0x00,0x00,0xF1,0x00,0x00,0xD6,0x00,0x00,0x98,0x00,0x00,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
const lv_img_dsc_t ui_img_thermometer_png = {
    .header.always_zero = 0,
    .header.w = 35,
    .header.h = 35,
    .data_size = sizeof(ui_img_thermometer_png_data),
    .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
    .data = ui_img_thermometer_png_data
};

