/*
 *
 * Copyright (c) 2023 Collin Hodge
 * Copyright (c) 2023 The ZMK Contributors
 * SPDX-License-Identifier: MIT
 *
 */

#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_BALLOON
#define LV_ATTRIBUTE_IMG_BALLOON
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BALLOON uint8_t
    balloon_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#else
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#endif

        0x7B, 0xDF, 0xEF, 0x7D, 0xFF, 0xFE, 0xFF, 0xFD, 0xB6, 0x15, 0x00, 0x40, 0xA4, 0x6A, 0xB7,
        0x5D, 0x00, 0x00, 0xD6, 0x75, 0xB5, 0xD6, 0x55, 0xAB, 0xAA, 0xAB, 0x6D, 0xA5, 0xAA, 0x54,
        0x52, 0xB7, 0x6D, 0x6B, 0x00, 0x00, 0xBD, 0xDB, 0xDD, 0x6D, 0xEF, 0xBF, 0x7D, 0x5F, 0x55,
        0x95, 0x00, 0x20, 0xA5, 0xDA, 0xB6, 0x5D, 0x00, 0x00, 0x6B, 0x6D, 0x77, 0xBB, 0xB5, 0x6A,
        0xD7, 0x7A, 0xAD, 0x24, 0x22, 0x29, 0x4A, 0xB7, 0xDB, 0x16, 0x00, 0x00, 0xDD, 0xBB, 0xAD,
        0x6D, 0x7F, 0xDF, 0xFD, 0xD7, 0x55, 0x49, 0x08, 0x54, 0x51, 0xD5, 0x6E, 0x37, 0x00, 0x00,
        0xB7, 0xEE, 0x76, 0xDB, 0xAA, 0xB5, 0x6E, 0xAD, 0xAA, 0x92, 0x42, 0x8A, 0x94, 0x7A, 0xDB,
        0x0A, 0x00, 0x00, 0xDA, 0xBB, 0xDD, 0xEE, 0xDF, 0xDB, 0xFB, 0xDB, 0x2A, 0x55, 0x08, 0x24,
        0x50, 0xAD, 0xB5, 0x0D, 0x00, 0x00, 0x77, 0xD7, 0x6B, 0xBB, 0x6A, 0x77, 0x5F, 0x57, 0xAB,
        0x52, 0x41, 0x05, 0x50, 0xD5, 0x6A, 0x05, 0x00, 0x00, 0xDD, 0x7A, 0xDD, 0x6D, 0xFF, 0xDA,
        0xFD, 0xDA, 0x5A, 0x4A, 0x15, 0x51, 0x24, 0x6D, 0xDD, 0x02, 0x00, 0x00, 0xB5, 0xAF, 0xBB,
        0xD7, 0xAA, 0xB7, 0xD7, 0xB7, 0x6B, 0xA5, 0x42, 0x45, 0xA1, 0xAA, 0xAA, 0x00, 0x00, 0x00,
        0x6F, 0x75, 0xD7, 0xBA, 0x77, 0xED, 0xBE, 0xFA, 0xBE, 0xAE, 0x92, 0x90, 0xA0, 0x54, 0x7F,
        0x00, 0x00, 0x00, 0xDA, 0xEF, 0xBA, 0x77, 0xED, 0xBD, 0x6B, 0xD7, 0xEB, 0x75, 0x45, 0x21,
        0x50, 0xD2, 0x0A, 0x00, 0x00, 0x00, 0xB5, 0x5A, 0x77, 0xAD, 0x5B, 0xEB, 0xDF, 0xBC, 0xBE,
        0xAF, 0x45, 0x88, 0xA2, 0x54, 0x0B, 0x00, 0x00, 0x00, 0xEF, 0xF7, 0xAE, 0x7B, 0xFD, 0xFE,
        0x2A, 0xE8, 0x75, 0x7D, 0x4B, 0x00, 0x50, 0xAB, 0x06, 0x00, 0x00, 0x00, 0xB4, 0xDA, 0xF5,
        0xD6, 0xAB, 0xDD, 0x57, 0xAA, 0xEF, 0xAB, 0x95, 0x40, 0xB1, 0xCA, 0x02, 0x00, 0x00, 0x00,
        0xDB, 0xBD, 0xDE, 0x5D, 0x5D, 0x77, 0x2D, 0x70, 0x5D, 0xFF, 0x2E, 0x12, 0xD0, 0xAB, 0x00,
        0x00, 0x00, 0x00, 0xB6, 0xD6, 0xB5, 0xB6, 0xF5, 0xFD, 0x5B, 0xD4, 0xFB, 0xAA, 0x55, 0xA4,
        0xB8, 0xB6, 0x00, 0x00, 0x00, 0x00, 0xED, 0xBB, 0xEE, 0x6D, 0x5B, 0xAF, 0xB6, 0x50, 0xD7,
        0x7F, 0x9A, 0x08, 0xD4, 0xEA, 0x00, 0x00, 0x00, 0x00, 0x5A, 0xED, 0x5D, 0xDB, 0xD6, 0xFD,
        0xAD, 0xD0, 0xBA, 0xAA, 0x2A, 0x25, 0xB8, 0xD4, 0x00, 0x00, 0x00, 0x00, 0xD5, 0x5B, 0xBB,
        0xAD, 0x6D, 0x57, 0x37, 0x61, 0xEF, 0x5F, 0x6A, 0x11, 0x55, 0x51, 0x00, 0x00, 0x00, 0x00,
        0xB6, 0xEE, 0xD6, 0x76, 0xDB, 0xFD, 0x5A, 0xA2, 0xB5, 0x2A, 0xD5, 0x0A, 0xFE, 0xD6, 0x00,
        0x00, 0x00, 0x00, 0xD5, 0xB5, 0x7F, 0xDB, 0xB6, 0x57, 0x57, 0x41, 0xDB, 0x15, 0xAA, 0x95,
        0xAA, 0x55, 0x00, 0x00, 0x00, 0x00, 0xBA, 0xDE, 0xAA, 0xBD, 0xED, 0xFE, 0xAA, 0x88, 0x36,
        0xA1, 0x44, 0xAB, 0x5D, 0x6B, 0x00, 0x00, 0x00, 0x00, 0xEA, 0xB5, 0xDD, 0x56, 0xDB, 0x55,
        0x17, 0x42, 0x45, 0x44, 0xD1, 0x6E, 0xEB, 0xD4, 0x00, 0x00, 0x00, 0x00, 0xAA, 0x6E, 0x77,
        0xEF, 0xB6, 0xDF, 0x6A, 0x00, 0x15, 0x09, 0xA2, 0x55, 0x5D, 0x3B, 0x00, 0x00, 0x00, 0x00,
        0xAA, 0xF5, 0xDA, 0x5A, 0x6B, 0x75, 0x4B, 0x41, 0x02, 0x50, 0x49, 0xBF, 0xAB, 0x56, 0x00,
        0x00, 0x00, 0x00, 0x74, 0xAF, 0x6F, 0xF7, 0xDA, 0xEF, 0x1A, 0x84, 0xAD, 0x42, 0xA4, 0x55,
        0x55, 0xFD, 0x00, 0x00, 0x00, 0x00, 0xCD, 0x7A, 0xB5, 0xAD, 0x75, 0x5D, 0xD7, 0xA0, 0x5A,
        0x94, 0xC2, 0xF7, 0xB6, 0xA5, 0x00, 0x00, 0x00, 0x00, 0xB2, 0xD5, 0xDB, 0xBB, 0xD6, 0xEB,
        0x35, 0xA2, 0xB7, 0x61, 0x79, 0xDD, 0x7B, 0xEB, 0x00, 0x00, 0x00, 0x00, 0x54, 0xBF, 0xB6,
        0xD6, 0x7D, 0xBF, 0x4E, 0x50, 0xED, 0x0B, 0xD7, 0x77, 0xDF, 0xAE, 0x00, 0x00, 0x00, 0x00,
        0x55, 0xD5, 0xEE, 0xBD, 0xEA, 0xEA, 0x55, 0xD1, 0xBB, 0x36, 0xBD, 0xDD, 0xFD, 0xD5, 0x00,
        0x00, 0x00, 0x00, 0xE8, 0xB6, 0xB5, 0xEB, 0xD5, 0x5F, 0x2B, 0x68, 0xF7, 0xAB, 0xE5, 0xFF,
        0xEF, 0xDF, 0x00, 0x00, 0x00, 0x00, 0x56, 0x6D, 0xDF, 0x56, 0xBD, 0xEA, 0x4E, 0xF4, 0x6E,
        0x5F, 0x6B, 0xEB, 0xFB, 0x35, 0x00, 0x00, 0x00, 0x00, 0xB4, 0xDA, 0x75, 0xBB, 0xE5, 0x5F,
        0x2B, 0xA8, 0xFD, 0xB7, 0xD1, 0x7F, 0x7F, 0xBF, 0x00, 0x00, 0x00, 0x00, 0x55, 0xBB, 0xEE,
        0x76, 0x55, 0xF5, 0x15, 0x7A, 0xDB, 0xDD, 0xF6, 0xF6, 0xFF, 0x2F, 0x00, 0x00, 0x00, 0x00,
        0x54, 0xD6, 0x5D, 0xAB, 0xF5, 0xAD, 0x86, 0xEC, 0x7F, 0xBF, 0xBF, 0xFF, 0xEF, 0x6B, 0x00,
        0x00, 0x00, 0x00, 0xAA, 0xBA, 0xEB, 0x7E, 0xAB, 0xFE, 0x85, 0x5A, 0xF5, 0xEF, 0xF6, 0xBB,
        0xFB, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x44, 0x55, 0xDD, 0xD5, 0xAA, 0xAB, 0x0A, 0xF7, 0xFF,
        0xBB, 0xFF, 0xFF, 0xFF, 0x2B, 0x00, 0x00, 0x00, 0x00, 0x59, 0xDB, 0xBB, 0xB6, 0x6A, 0x7F,
        0x85, 0xDE, 0x6E, 0xFF, 0xFF, 0xAE, 0xBE, 0x6E, 0x00, 0x00, 0x00, 0x00, 0x52, 0xB5, 0xD6,
        0x6D, 0xAB, 0xD5, 0x41, 0xFB, 0xFB, 0xFF, 0xEF, 0xFB, 0xEB, 0x55, 0x00, 0x00, 0x00, 0x00,
        0xA4, 0xEA, 0x6D, 0xDB, 0xAA, 0xBE, 0xC6, 0x56, 0xFF, 0xED, 0x7B, 0xAD, 0x5E, 0x4B, 0x00,
        0x00, 0x00, 0x00, 0x01, 0xAD, 0xDA, 0xB6, 0xD5, 0xEB, 0x55, 0xFF, 0xAD, 0xFF, 0xBE, 0xFE,
        0xB5, 0x16, 0x00, 0x00, 0x00, 0x00, 0x57, 0x55, 0xB7, 0x55, 0x4B, 0x5D, 0xEB, 0xB5, 0xFF,
        0xFF, 0x5F, 0x77, 0xEF, 0x29, 0x00, 0x00, 0x00, 0x00, 0xAC, 0xEA, 0x5A, 0xDD, 0x56, 0xFB,
        0x56, 0xFF, 0xFE, 0xBD, 0xAF, 0xDE, 0x9B, 0x26, 0x00, 0x00, 0x00, 0x00, 0x5B, 0xA9, 0xB5,
        0xB5, 0xAD, 0x56, 0xAB, 0xD5, 0xB7, 0xEF, 0x97, 0xFA, 0xB7, 0x29, 0x00, 0x00, 0x00, 0x00,
        0x6A, 0x55, 0x6D, 0x6D, 0xAB, 0xFE, 0xD6, 0x7F, 0xEF, 0xFF, 0x27, 0xFA, 0xDD, 0x16, 0x00,
        0x00, 0x00, 0x00, 0xAD, 0x4B, 0x55, 0xDB, 0x56, 0x55, 0x6B, 0xED, 0xFB, 0xFE, 0x15, 0x74,
        0xB7, 0x2B, 0x00, 0x00, 0x00, 0x00, 0x5B, 0x35, 0xAD, 0xAA, 0x5D, 0xBB, 0xDD, 0xBF, 0xFF,
        0x7F, 0xA3, 0xD8, 0xEF, 0x36, 0x00, 0x00, 0x00, 0x00, 0xEA, 0x6E, 0xA9, 0xDD, 0xB6, 0xF6,
        0xB6, 0xF5, 0xDD, 0xF7, 0xAD, 0xF1, 0xBB, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x5D, 0xD5, 0x6A,
        0x6B, 0xDB, 0xAA, 0xEB, 0xDE, 0xF7, 0xFE, 0xAB, 0xE2, 0x7E, 0x17, 0x00, 0x00, 0x00, 0x00,
        0xAB, 0xBB, 0x95, 0xDA, 0x6D, 0xDF, 0xDE, 0xFF, 0xFE, 0xBF, 0x66, 0xC7, 0xD7, 0x1D, 0x00,
        0x00, 0x00, 0x00, 0x5A, 0x55, 0xAB, 0x6A, 0xDB, 0xEA, 0xB5, 0xEA, 0xBF, 0xFF, 0xD5, 0xD4,
        0x6E, 0x1B, 0x00, 0x00, 0x00, 0x00, 0xF5, 0xEE, 0x56, 0xB5, 0xB6, 0xBB, 0x6F, 0xBF, 0xFD,
        0xB7, 0x2A, 0xCB, 0x5B, 0x05, 0x00, 0x00, 0x00, 0x00, 0x97, 0x55, 0xAD, 0x6A, 0x7B, 0x6F,
        0xB5, 0xF7, 0xEF, 0xDF, 0x46, 0x82, 0x17, 0x09, 0x00, 0x00, 0x00, 0x00, 0x7A, 0xBB, 0xB5,
        0xDA, 0xD6, 0xFA, 0x6F, 0xFD, 0xFE, 0xB6, 0x0A, 0xCC, 0x4A, 0x0D, 0x00, 0x00, 0x00, 0x00,
        0x55, 0x55, 0x6B, 0x55, 0x6D, 0x57, 0xDD, 0xB7, 0xBF, 0x7F, 0x15, 0x91, 0x9F, 0x02, 0x00,
        0x00, 0x00, 0x00, 0xAB, 0xBB, 0x5E, 0xD5, 0xDA, 0xFD, 0xBB, 0xFD, 0xF7, 0x55, 0x2D, 0x46,
        0x75, 0x03, 0x00, 0x00, 0x00, 0x00, 0xDE, 0xD6, 0xD5, 0xAA, 0xB5, 0x56, 0x77, 0xB7, 0x5D,
        0x5F, 0xEA, 0x8A, 0xDF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB5, 0x5A, 0xB5, 0x55, 0x6D, 0xFB,
        0xEE, 0x7D, 0xFF, 0xAA, 0x9C, 0xC6, 0xEA, 0x01, 0x00, 0x00, 0x00, 0x00, 0xD5, 0xB6, 0x6B,
        0xAD, 0xAA, 0xAD, 0xB5, 0xAE, 0xAB, 0xBB, 0x54, 0xA5, 0x3F, 0x01, 0x00, 0x00, 0x00, 0x00,
        0xAD, 0x6D, 0x5D, 0xAB, 0xAA, 0x76, 0xDF, 0xFB, 0xFF, 0xA6, 0xAA, 0x43, 0xE9, 0x01, 0x00,
        0x00, 0x00, 0x00, 0x7B, 0xAB, 0xAB, 0xB6, 0xAA, 0xDD, 0x75, 0x5D, 0x95, 0xBA, 0x98, 0xE4,
        0x36, 0x01, 0x00, 0x00, 0x00, 0x00, 0x56, 0xDD, 0xDA, 0xAD, 0x52, 0x6B, 0xAB, 0xF7, 0x7F,
        0xA5, 0x32, 0x41, 0xAD, 0x02, 0x00, 0x00, 0x00, 0x00, 0xD5, 0x6A, 0x6B, 0x55, 0x55, 0xDD,
        0x76, 0x5D, 0x55, 0xAC, 0x50, 0xB0, 0xA9, 0x02, 0x00, 0x00, 0x00, 0x00, 0xBD, 0xDB, 0xB6,
        0xB6, 0xAA, 0xAA, 0x55, 0x6B, 0x5F, 0x2D, 0x35, 0xA8, 0xAA, 0x05, 0x00, 0x00, 0x00, 0x00,
        0xAB, 0xB6, 0xDA, 0x6D, 0xA5, 0x5D, 0xD9, 0xDE, 0x35, 0xCA, 0x64, 0xA9, 0xAA, 0x0E, 0x00,
        0x00, 0x00, 0x00, 0xB6, 0xD5, 0xAD, 0xAA, 0x55, 0x55, 0x55, 0xB5, 0xAE, 0x26, 0x69, 0xAA,
        0x54, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x6D, 0x6D, 0xDB, 0xB6, 0x4A, 0x55, 0xAA, 0xD6, 0x3A,
        0x6A, 0xA2, 0xAA, 0xB5, 0x3E, 0x00, 0x00, 0x00, 0x00
};

const lv_img_dsc_t balloon = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 140,
    .header.h = 68,
    .data_size = 1232,
    .data = balloon_map,
};

#ifndef LV_ATTRIBUTE_IMG_MOUNTAIN
#define LV_ATTRIBUTE_IMG_MOUNTAIN
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_MOUNTAIN uint8_t
    mountain_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#else
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#endif

        0x7B, 0xDF, 0xEF, 0x7D, 0xFF, 0xFE, 0xFF, 0xFD, 0xB6, 0x15, 0x00, 0x40, 0xA4, 0x6A, 0xB7,
        0x5D, 0x00, 0x00, 0xD6, 0x75, 0xB5, 0xD6, 0x55, 0xAB, 0xAA, 0xAB, 0x6D, 0xA5, 0xAA, 0x54,
        0x52, 0xB7, 0x6D, 0x6B, 0x00, 0x00, 0xBD, 0xDB, 0xDD, 0x6D, 0xEF, 0xBF, 0x7D, 0x5F, 0x55,
        0x95, 0x00, 0x20, 0xA5, 0xDA, 0xB6, 0x5D, 0x00, 0x00, 0x6B, 0x6D, 0x77, 0xBB, 0xB5, 0x6A,
        0xD7, 0x7A, 0xAD, 0x24, 0x22, 0x29, 0x4A, 0xB7, 0xDB, 0x16, 0x00, 0x00, 0xDD, 0xBB, 0xAD,
        0x6D, 0x7F, 0xDF, 0xFD, 0xD7, 0x55, 0x49, 0x08, 0x54, 0x51, 0xD5, 0x6E, 0x37, 0x00, 0x00,
        0xB7, 0xEE, 0x76, 0xDB, 0xAA, 0xB5, 0x6E, 0xAD, 0xAA, 0x92, 0x42, 0x8A, 0x94, 0x7A, 0xDB,
        0x0A, 0x00, 0x00, 0xDA, 0xBB, 0xDD, 0xEE, 0xDF, 0xDB, 0xFB, 0xDB, 0x2A, 0x55, 0x08, 0x24,
        0x50, 0xAD, 0xB5, 0x0D, 0x00, 0x00, 0x77, 0xD7, 0x6B, 0xBB, 0x6A, 0x77, 0x5F, 0x57, 0xAB,
        0x52, 0x41, 0x05, 0x50, 0xD5, 0x6A, 0x05, 0x00, 0x00, 0xDD, 0x7A, 0xDD, 0x6D, 0xFF, 0xDA,
        0xFD, 0xDA, 0x5A, 0x4A, 0x15, 0x51, 0x24, 0x6D, 0xDD, 0x02, 0x00, 0x00, 0xB5, 0xAF, 0xBB,
        0xD7, 0xAA, 0xB7, 0xD7, 0xB7, 0x6B, 0xA5, 0x42, 0x45, 0xA1, 0xAA, 0xAA, 0x00, 0x00, 0x00,
        0x6F, 0x75, 0xD7, 0xBA, 0x77, 0xED, 0xBE, 0xFA, 0xBE, 0xAE, 0x92, 0x90, 0xA0, 0x54, 0x7F,
        0x00, 0x00, 0x00, 0xDA, 0xEF, 0xBA, 0x77, 0xED, 0xBD, 0x6B, 0xD7, 0xEB, 0x75, 0x45, 0x21,
        0x50, 0xD2, 0x0A, 0x00, 0x00, 0x00, 0xB5, 0x5A, 0x77, 0xAD, 0x5B, 0xEB, 0xDF, 0xBC, 0xBE,
        0xAF, 0x45, 0x88, 0xA2, 0x54, 0x0B, 0x00, 0x00, 0x00, 0xEF, 0xF7, 0xAE, 0x7B, 0xFD, 0xFE,
        0x2A, 0xE8, 0x75, 0x7D, 0x4B, 0x00, 0x50, 0xAB, 0x06, 0x00, 0x00, 0x00, 0xB4, 0xDA, 0xF5,
        0xD6, 0xAB, 0xDD, 0x57, 0xAA, 0xEF, 0xAB, 0x95, 0x40, 0xB1, 0xCA, 0x02, 0x00, 0x00, 0x00,
        0xDB, 0xBD, 0xDE, 0x5D, 0x5D, 0x77, 0x2D, 0x70, 0x5D, 0xFF, 0x2E, 0x12, 0xD0, 0xAB, 0x00,
        0x00, 0x00, 0x00, 0xB6, 0xD6, 0xB5, 0xB6, 0xF5, 0xFD, 0x5B, 0xD4, 0xFB, 0xAA, 0x55, 0xA4,
        0xB8, 0xB6, 0x00, 0x00, 0x00, 0x00, 0xED, 0xBB, 0xEE, 0x6D, 0x5B, 0xAF, 0xB6, 0x50, 0xD7,
        0x7F, 0x9A, 0x08, 0xD4, 0xEA, 0x00, 0x00, 0x00, 0x00, 0x5A, 0xED, 0x5D, 0xDB, 0xD6, 0xFD,
        0xAD, 0xD0, 0xBA, 0xAA, 0x2A, 0x25, 0xB8, 0xD4, 0x00, 0x00, 0x00, 0x00, 0xD5, 0x5B, 0xBB,
        0xAD, 0x6D, 0x57, 0x37, 0x61, 0xEF, 0x5F, 0x6A, 0x11, 0x55, 0x51, 0x00, 0x00, 0x00, 0x00,
        0xB6, 0xEE, 0xD6, 0x76, 0xDB, 0xFD, 0x5A, 0xA2, 0xB5, 0x2A, 0xD5, 0x0A, 0xFE, 0xD6, 0x00,
        0x00, 0x00, 0x00, 0xD5, 0xB5, 0x7F, 0xDB, 0xB6, 0x57, 0x57, 0x41, 0xDB, 0x15, 0xAA, 0x95,
        0xAA, 0x55, 0x00, 0x00, 0x00, 0x00, 0xBA, 0xDE, 0xAA, 0xBD, 0xED, 0xFE, 0xAA, 0x88, 0x36,
        0xA1, 0x44, 0xAB, 0x5D, 0x6B, 0x00, 0x00, 0x00, 0x00, 0xEA, 0xB5, 0xDD, 0x56, 0xDB, 0x55,
        0x17, 0x42, 0x45, 0x44, 0xD1, 0x6E, 0xEB, 0xD4, 0x00, 0x00, 0x00, 0x00, 0xAA, 0x6E, 0x77,
        0xEF, 0xB6, 0xDF, 0x6A, 0x00, 0x15, 0x09, 0xA2, 0x55, 0x5D, 0x3B, 0x00, 0x00, 0x00, 0x00,
        0xAA, 0xF5, 0xDA, 0x5A, 0x6B, 0x75, 0x4B, 0x41, 0x02, 0x50, 0x49, 0xBF, 0xAB, 0x56, 0x00,
        0x00, 0x00, 0x00, 0x74, 0xAF, 0x6F, 0xF7, 0xDA, 0xEF, 0x1A, 0x84, 0xAD, 0x42, 0xA4, 0x55,
        0x55, 0xFD, 0x00, 0x00, 0x00, 0x00, 0xCD, 0x7A, 0xB5, 0xAD, 0x75, 0x5D, 0xD7, 0xA0, 0x5A,
        0x94, 0xC2, 0xF7, 0xB6, 0xA5, 0x00, 0x00, 0x00, 0x00, 0xB2, 0xD5, 0xDB, 0xBB, 0xD6, 0xEB,
        0x35, 0xA2, 0xB7, 0x61, 0x79, 0xDD, 0x7B, 0xEB, 0x00, 0x00, 0x00, 0x00, 0x54, 0xBF, 0xB6,
        0xD6, 0x7D, 0xBF, 0x4E, 0x50, 0xED, 0x0B, 0xD7, 0x77, 0xDF, 0xAE, 0x00, 0x00, 0x00, 0x00,
        0x55, 0xD5, 0xEE, 0xBD, 0xEA, 0xEA, 0x55, 0xD1, 0xBB, 0x36, 0xBD, 0xDD, 0xFD, 0xD5, 0x00,
        0x00, 0x00, 0x00, 0xE8, 0xB6, 0xB5, 0xEB, 0xD5, 0x5F, 0x2B, 0x68, 0xF7, 0xAB, 0xE5, 0xFF,
        0xEF, 0xDF, 0x00, 0x00, 0x00, 0x00, 0x56, 0x6D, 0xDF, 0x56, 0xBD, 0xEA, 0x4E, 0xF4, 0x6E,
        0x5F, 0x6B, 0xEB, 0xFB, 0x35, 0x00, 0x00, 0x00, 0x00, 0xB4, 0xDA, 0x75, 0xBB, 0xE5, 0x5F,
        0x2B, 0xA8, 0xFD, 0xB7, 0xD1, 0x7F, 0x7F, 0xBF, 0x00, 0x00, 0x00, 0x00, 0x55, 0xBB, 0xEE,
        0x76, 0x55, 0xF5, 0x15, 0x7A, 0xDB, 0xDD, 0xF6, 0xF6, 0xFF, 0x2F, 0x00, 0x00, 0x00, 0x00,
        0x54, 0xD6, 0x5D, 0xAB, 0xF5, 0xAD, 0x86, 0xEC, 0x7F, 0xBF, 0xBF, 0xFF, 0xEF, 0x6B, 0x00,
        0x00, 0x00, 0x00, 0xAA, 0xBA, 0xEB, 0x7E, 0xAB, 0xFE, 0x85, 0x5A, 0xF5, 0xEF, 0xF6, 0xBB,
        0xFB, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x44, 0x55, 0xDD, 0xD5, 0xAA, 0xAB, 0x0A, 0xF7, 0xFF,
        0xBB, 0xFF, 0xFF, 0xFF, 0x2B, 0x00, 0x00, 0x00, 0x00, 0x59, 0xDB, 0xBB, 0xB6, 0x6A, 0x7F,
        0x85, 0xDE, 0x6E, 0xFF, 0xFF, 0xAE, 0xBE, 0x6E, 0x00, 0x00, 0x00, 0x00, 0x52, 0xB5, 0xD6,
        0x6D, 0xAB, 0xD5, 0x41, 0xFB, 0xFB, 0xFF, 0xEF, 0xFB, 0xEB, 0x55, 0x00, 0x00, 0x00, 0x00,
        0xA4, 0xEA, 0x6D, 0xDB, 0xAA, 0xBE, 0xC6, 0x56, 0xFF, 0xED, 0x7B, 0xAD, 0x5E, 0x4B, 0x00,
        0x00, 0x00, 0x00, 0x01, 0xAD, 0xDA, 0xB6, 0xD5, 0xEB, 0x55, 0xFF, 0xAD, 0xFF, 0xBE, 0xFE,
        0xB5, 0x16, 0x00, 0x00, 0x00, 0x00, 0x57, 0x55, 0xB7, 0x55, 0x4B, 0x5D, 0xEB, 0xB5, 0xFF,
        0xFF, 0x5F, 0x77, 0xEF, 0x29, 0x00, 0x00, 0x00, 0x00, 0xAC, 0xEA, 0x5A, 0xDD, 0x56, 0xFB,
        0x56, 0xFF, 0xFE, 0xBD, 0xAF, 0xDE, 0x9B, 0x26, 0x00, 0x00, 0x00, 0x00, 0x5B, 0xA9, 0xB5,
        0xB5, 0xAD, 0x56, 0xAB, 0xD5, 0xB7, 0xEF, 0x97, 0xFA, 0xB7, 0x29, 0x00, 0x00, 0x00, 0x00,
        0x6A, 0x55, 0x6D, 0x6D, 0xAB, 0xFE, 0xD6, 0x7F, 0xEF, 0xFF, 0x27, 0xFA, 0xDD, 0x16, 0x00,
        0x00, 0x00, 0x00, 0xAD, 0x4B, 0x55, 0xDB, 0x56, 0x55, 0x6B, 0xED, 0xFB, 0xFE, 0x15, 0x74,
        0xB7, 0x2B, 0x00, 0x00, 0x00, 0x00, 0x5B, 0x35, 0xAD, 0xAA, 0x5D, 0xBB, 0xDD, 0xBF, 0xFF,
        0x7F, 0xA3, 0xD8, 0xEF, 0x36, 0x00, 0x00, 0x00, 0x00, 0xEA, 0x6E, 0xA9, 0xDD, 0xB6, 0xF6,
        0xB6, 0xF5, 0xDD, 0xF7, 0xAD, 0xF1, 0xBB, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x5D, 0xD5, 0x6A,
        0x6B, 0xDB, 0xAA, 0xEB, 0xDE, 0xF7, 0xFE, 0xAB, 0xE2, 0x7E, 0x17, 0x00, 0x00, 0x00, 0x00,
        0xAB, 0xBB, 0x95, 0xDA, 0x6D, 0xDF, 0xDE, 0xFF, 0xFE, 0xBF, 0x66, 0xC7, 0xD7, 0x1D, 0x00,
        0x00, 0x00, 0x00, 0x5A, 0x55, 0xAB, 0x6A, 0xDB, 0xEA, 0xB5, 0xEA, 0xBF, 0xFF, 0xD5, 0xD4,
        0x6E, 0x1B, 0x00, 0x00, 0x00, 0x00, 0xF5, 0xEE, 0x56, 0xB5, 0xB6, 0xBB, 0x6F, 0xBF, 0xFD,
        0xB7, 0x2A, 0xCB, 0x5B, 0x05, 0x00, 0x00, 0x00, 0x00, 0x97, 0x55, 0xAD, 0x6A, 0x7B, 0x6F,
        0xB5, 0xF7, 0xEF, 0xDF, 0x46, 0x82, 0x17, 0x09, 0x00, 0x00, 0x00, 0x00, 0x7A, 0xBB, 0xB5,
        0xDA, 0xD6, 0xFA, 0x6F, 0xFD, 0xFE, 0xB6, 0x0A, 0xCC, 0x4A, 0x0D, 0x00, 0x00, 0x00, 0x00,
        0x55, 0x55, 0x6B, 0x55, 0x6D, 0x57, 0xDD, 0xB7, 0xBF, 0x7F, 0x15, 0x91, 0x9F, 0x02, 0x00,
        0x00, 0x00, 0x00, 0xAB, 0xBB, 0x5E, 0xD5, 0xDA, 0xFD, 0xBB, 0xFD, 0xF7, 0x55, 0x2D, 0x46,
        0x75, 0x03, 0x00, 0x00, 0x00, 0x00, 0xDE, 0xD6, 0xD5, 0xAA, 0xB5, 0x56, 0x77, 0xB7, 0x5D,
        0x5F, 0xEA, 0x8A, 0xDF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB5, 0x5A, 0xB5, 0x55, 0x6D, 0xFB,
        0xEE, 0x7D, 0xFF, 0xAA, 0x9C, 0xC6, 0xEA, 0x01, 0x00, 0x00, 0x00, 0x00, 0xD5, 0xB6, 0x6B,
        0xAD, 0xAA, 0xAD, 0xB5, 0xAE, 0xAB, 0xBB, 0x54, 0xA5, 0x3F, 0x01, 0x00, 0x00, 0x00, 0x00,
        0xAD, 0x6D, 0x5D, 0xAB, 0xAA, 0x76, 0xDF, 0xFB, 0xFF, 0xA6, 0xAA, 0x43, 0xE9, 0x01, 0x00,
        0x00, 0x00, 0x00, 0x7B, 0xAB, 0xAB, 0xB6, 0xAA, 0xDD, 0x75, 0x5D, 0x95, 0xBA, 0x98, 0xE4,
        0x36, 0x01, 0x00, 0x00, 0x00, 0x00, 0x56, 0xDD, 0xDA, 0xAD, 0x52, 0x6B, 0xAB, 0xF7, 0x7F,
        0xA5, 0x32, 0x41, 0xAD, 0x02, 0x00, 0x00, 0x00, 0x00, 0xD5, 0x6A, 0x6B, 0x55, 0x55, 0xDD,
        0x76, 0x5D, 0x55, 0xAC, 0x50, 0xB0, 0xA9, 0x02, 0x00, 0x00, 0x00, 0x00, 0xBD, 0xDB, 0xB6,
        0xB6, 0xAA, 0xAA, 0x55, 0x6B, 0x5F, 0x2D, 0x35, 0xA8, 0xAA, 0x05, 0x00, 0x00, 0x00, 0x00,
        0xAB, 0xB6, 0xDA, 0x6D, 0xA5, 0x5D, 0xD9, 0xDE, 0x35, 0xCA, 0x64, 0xA9, 0xAA, 0x0E, 0x00,
        0x00, 0x00, 0x00, 0xB6, 0xD5, 0xAD, 0xAA, 0x55, 0x55, 0x55, 0xB5, 0xAE, 0x26, 0x69, 0xAA,
        0x54, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x6D, 0x6D, 0xDB, 0xB6, 0x4A, 0x55, 0xAA, 0xD6, 0x3A,
        0x6A, 0xA2, 0xAA, 0xB5, 0x3E, 0x00, 0x00, 0x00, 0x00
};

const lv_img_dsc_t mountain = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 140,
    .header.h = 68,
    .data_size = 1232,
    .data = mountain_map,
};
