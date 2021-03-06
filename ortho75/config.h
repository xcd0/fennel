/*
Copyright 2015 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6467
#define DEVICE_VER      0x0001
#define MANUFACTURER xcd0
#define PRODUCT fennel
#define DESCRIPTION fennel

/* key matrix size */
//#define MATRIX_ROWS 5
//#define MATRIX_COLS 15
#define MATRIX_ROWS 5
#define MATRIX_COLS 16

//#define MATRIX_COL_PINS { B11, B10, B1, B0, A7, A6, A5, B14, A15, A0, C15, C14, B7, B6, B5 }
//#define MATRIX_ROW_PINS { B12, C13, A2, A1, A3 }

#define MATRIX_ROW_PINS { B9, B8, B7, B6, B5  }
#define MATRIX_COL_PINS { A7, A4, A5, A6, B0, B1, A1, A0,    B10, B11, B12, B13,   B14, B15, A8, C14 }

//#define DIODE_DIRECTION COL2ROW
#define DIODE_DIRECTION ROW2COL

#define MASTER_LEFT

#define SOFT_SERIAL_PIN A9 //DX
#define SPLIT_HAND_PIN B7
//#define USE_I2C

//#define BACKLIGHT_LEVELS 6
//#define BACKLIGHT_BREATHING
//#define BREATHING_PERIOD 6
//
////#define ENCODERS_PAD_A { B9 }
////#define ENCODERS_PAD_B { B8 }
//#define ENCODERS_PAD_A { B10 }
//#define ENCODERS_PAD_B { B11 }
//
///* define if matrix has ghost */
////#define MATRIX_HAS_GHOST
//
///* Set 0 if debouncing isn't needed */
#define DEBOUNCE    5
//
///* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
//#define LOCKING_SUPPORT_ENABLE
///* Locking resynchronize hack */
//#define LOCKING_RESYNC_ENABLE
//
//#define RGBLIGHT_ANIMATIONS
//
//#define WS2812_LED_N 16
//#define RGBLED_NUM WS2812_LED_N
//#define PORT_WS2812     GPIOB
//#define PIN_WS2812      15
//#define WS2812_SPI SPID2
//
//
///*
// * Feature disable options
// *  These options are also useful to firmware size reduction.
// */
//
///* disable debug print */
////#define NO_DEBUG
//
///* disable print */
////#define NO_PRINT
//
///* disable action features */
////#define NO_ACTION_LAYER
////#define NO_ACTION_TAPPING
////#define NO_ACTION_ONESHOT
////#define NO_ACTION_MACRO
////#define NO_ACTION_FUNCTION
