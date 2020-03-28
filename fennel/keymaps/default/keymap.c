/* Copyright 2020 xcd0
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
#include "keymap_jp.h"

#define JP_F1   KC_F1
#define JP_F2   KC_F2
#define JP_F3   KC_F3
#define JP_F4   KC_F4
#define JP_F5   KC_F5
#define JP_F6   KC_F6
#define JP_F7   KC_F7
#define JP_F8   KC_F8
#define JP_F9   KC_F9
#define JP_F10   KC_F10
#define JP_F11   KC_F11
#define JP_F12   KC_F12
#define JP_PGUP KC_PGUP
#define JP_PGDN KC_PGDN
#define JP_LSFT KC_LSFT
#define JP_RSFT KC_RSFT
#define JP_LCTL KC_LCTL
#define JP_RCTL KC_RCTL
#define JP_LALT KC_LALT
#define JP_RALT KC_RALT
#define JP_LGUI KC_LGUI
#define JP_RGUI KC_RGUI
#define JP_ENT  KC_ENT
#define JP_SPC  KC_SPC
#define JP_ESC  KC_ESC
#define JP_TAB  KC_TAB
#define JP_DEL  KC_DEL
#define JP_HOME KC_HOME
#define JP_END  KC_END
#define JP_INS  KC_INS
#define JP_PAUS KC_PAUS
#define JP_SLCK KC_SLCK
#define JP_PSCR KC_PSCR
#define JP_BSPC KC_BSPC

// Defines names for use in layer keycodes and the keymap
enum layer_names {
	_QWERTY,
	_SYMBOL,
	_MOUSE,
	_SETTING
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
	QWERTY = SAFE_RANGE,
	SYMBOL,
	MOUSE,
	SETTING
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

//    col 00   col 01   col 02   col 03   col 04   col 05   col 06   col 07   col 08   col 09   col 10   col 11   col 12   col 13   col 14
  [_QWERTY] = LAYOUT( \
      JP_HOME, JP_END,  JP_1,    JP_2,    JP_3,    JP_4,    JP_5,    JP_LABK, JP_RABK, JP_6,    JP_7,    JP_8,    JP_9,    JP_0,    JP_TILD, JP_CIRC, \
      JP_LGUI, JP_DEL,  JP_ESC,  JP_W,    JP_E,    JP_R,    JP_T,    JP_LCBR, JP_RCBR, JP_Y,    JP_U,    JP_I,    JP_O,    JP_MINS, JP_EQL,  JP_UNDS, \
      JP_LALT, JP_TAB,  JP_Q,    JP_S,    JP_D,    JP_F,    JP_G,    JP_LPRN, JP_RPRN, JP_H,    JP_J,    JP_K,    JP_L,    JP_P,    JP_AT,   JP_BSLS, \
      JP_INS,  JP_Z,    JP_A,    JP_X,    JP_C,    JP_V,    JP_B,    JP_LBRC, JP_RBRC, JP_N,    JP_M,    JP_COMM, JP_DOT,  JP_SCLN, JP_COLN, JP_SLSH, \
      JP_PAUS, JP_SLCK, JP_PSCR, MOUSE,   JP_MHEN, JP_LSFT, JP_SPC,  JP_LCTL, JP_ENT,  JP_SPC,  JP_BSPC, JP_HENK, SYMBOL,  SETTING, JP_PGDN, JP_PGUP \
      ),
  [_SYMBOL] = LAYOUT( \
      JP_HOME, JP_END,  JP_1,    JP_2,    JP_3,    JP_4,    JP_5,    JP_LABK, JP_RABK, JP_6,    JP_7,    JP_8,    JP_9,    JP_0,    JP_TILD, JP_CIRC, \
      JP_LGUI, JP_DEL,  JP_ESC,  _______, _______, _______, _______, JP_LCBR, JP_RCBR, KC_DQUO, KC_QUOT, KC_GRV,  _______, JP_MINS, JP_EQL,  JP_UNDS, \
      JP_LALT, JP_TAB,  KC_PIPE, KC_AMPR, KC_HASH, KC_DLR,  KC_PERC, JP_LPRN, JP_RPRN, KC_PLUS, KC_ASTR, KC_MINS, _______, _______, JP_AT,   JP_BSLS, \
      JP_INS,  JP_Z,    _______, _______, _______, _______, _______, JP_LBRC, JP_RBRC, KC_QUES, KC_EXLM, JP_COMM, JP_DOT,  JP_SCLN, JP_COLN, JP_SLSH, \
      JP_PAUS, JP_SLCK, JP_PSCR, _______, JP_MHEN, JP_LSFT, JP_SPC,  JP_LCTL, JP_ENT,  JP_SPC,  JP_BSPC, JP_HENK, SYMBOL,  SETTING, JP_PGDN, JP_PGUP \
      ),
  [_MOUSE] = LAYOUT( \
      _______, _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______, _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, \
      JP_LGUI, _______, JP_ESC,  _______, _______, _______, _______, _______, _______, _______, KC_BTN1, KC_BTN3, KC_BTN2, KC_WH_U, JP_EQL,  JP_UNDS, \
      JP_LALT, JP_TAB,  _______, _______, _______, _______, _______, _______, _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_WH_D, JP_AT,   JP_BSLS, \
      AG_NORM, AG_SWAP, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, _______, JP_MHEN, JP_LSFT, JP_SPC,  JP_LCTL, JP_ENT,  JP_SPC,  JP_BSPC, JP_HENK, SYMBOL,  SETTING, JP_PGDN, JP_PGUP \
      ),
  [_SETTING] = LAYOUT( \
      _______, _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______, _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, \
      JP_LGUI, _______, JP_ESC,  _______, _______, _______, _______, _______, _______, _______, KC_BTN1, KC_BTN3, KC_BTN2, KC_WH_U, JP_EQL,  JP_UNDS, \
      JP_LALT, JP_TAB,  _______, _______, _______, _______, _______, _______, _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_WH_D, JP_AT,   JP_BSLS, \
      AG_NORM, AG_SWAP, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, _______, JP_MHEN, JP_LSFT, JP_SPC,  JP_LCTL, JP_ENT,  JP_SPC,  JP_BSPC, JP_HENK, SYMBOL,  SETTING, JP_PGDN, JP_PGUP \
      )
};

/*
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QMKBEST:
            if (record->event.pressed) {
                // when keycode QMKBEST is pressed
                SEND_STRING("QMK is the best thing ever!");
            } else {
                // when keycode QMKBEST is released
            }
            break;
        case QMKURL:
            if (record->event.pressed) {
                // when keycode QMKURL is pressed
                SEND_STRING("https://qmk.fm/\n");
            } else {
                // when keycode QMKURL is released
            }
            break;
    }
    return true;
}
*/

/*
void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool led_update_user(led_t led_state) {
    return true;
}
*/
