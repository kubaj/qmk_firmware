#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/

// vendor 0xFC32
// product 0x0287

#define MASTER_RIGHT
// #define EE_HANDS

#undef TAPPING_TERM
#define TAPPING_TERM 200


#define OLED_BRIGHTNESS 128
#define OLED_TIMEOUT 5000

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

#define RGB_DI_PIN D3

// 14
#undef RGBLED_NUM
#define RGBLED_NUM 26

#define RGBLIGHT_LED_MAP { 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25 }

#undef RGBLED_SPLIT
#define RGBLED_SPLIT { 13, 13 }

#define RGBLIGHT_SLEEP true
#define RGBLIGHT_SPLIT true

#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 24
#define RGBLIGHT_VAL_STEP 32

// #define RGBLIGHT_LAYERS true

// #define RGBLIGHT_EFFECT_BREATHING = true
#define RGBLIGHT_EFFECT_SNAKE = true
// #define RGBLIGHT_EFFECT_CHRISTMAS = true