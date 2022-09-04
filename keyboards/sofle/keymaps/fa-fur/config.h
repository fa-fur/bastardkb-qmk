#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/
#define MASTER_LEFT

#define PERMISSIVE_HOLD
#define TAPPING_FORCE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT
//#define TAPPING_TERM 185
//#define TAP_CODE_DELAY 25
#define USB_POLLING_INTERVAL_MS 1

#define OLED_TIMEOUT 10000
#define OLED_DISPLAY_128X32

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

#define ENCODERS_PAD_A { F5 }
#define ENCODERS_PAD_B { F4 }
#define ENCODERS_PAD_A_RIGHT { F4 }
#define ENCODERS_PAD_B_RIGHT { F5 }
//#undef ENCODER_RESOLUTION
//#define ENCODER_RESOLUTION 2
#define ENCODER_RESOLUTIONS { 2, 8 }

#define MATRIX_ROWS 10
#define MATRIX_COLS 6

#define MATRIX_ROW_PINS { C6, D7, E6, B4, B5 }
#define MATRIX_COL_PINS { F6, F7, B1, B3, B2, B6 }
#define DIODE_DIRECTION COL2ROW

#define USE_SERIAL
#define SERIAL_USE_MULTI_TRANSACTION
#define SOFT_SERIAL_PIN D2
