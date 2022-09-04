/**
 * Copyright 2021 Charly Delay <charly@codesink.dev> (@0xcharly)
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

enum charybdis_keymap_layers {
    LAYER_BASE = 0,
    LAYER_NAVDIG,
    LAYER_SYM,
    LAYER_NUM,
    LAYER_GAME
};

enum custom_keycodes {
	INSTAQUOTE = SAFE_RANGE,
	INSTADOUBLE,
	INSTACIRC,
	INSTAGRAVE
};

#define ENTCTL     MT(MOD_LCTL, KC_ENTER)
#define TABCTL     MT(MOD_LCTL, KC_TAB)
#define ESC_CS     C_S_T(KC_ESC)
#define APPSFT     MT(MOD_LSFT, KC_APP)
#define SPCSFT     MT(MOD_LSFT, KC_SPACE)
#define _XRALT     MT(MOD_RALT, KC_X)
#define DOTALT     MT(MOD_RALT, KC_DOT)
#define Z_LALT     MT(MOD_LALT, KC_Z)
#define SCLALT     MT(MOD_LALT, KC_SCLN)
#define F1_ALT     MT(MOD_LALT, KC_F1)
#define F10ALT     MT(MOD_LALT, KC_F10)
#define F11CTL     MT(MOD_LCTL, KC_F11)
#define F12CTL     MT(MOD_LCTL, KC_F12)
#define LT_T_1     LT(1, KC_T)
#define F13NAV     LT(1, KC_F13)
#define LTBSL2     LT(2, KC_BSLS)
#define LTQUT2     LT(2, KC_QUOT)
#define LT_V_3     LT(3, KC_V)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [LAYER_BASE] = LAYOUT_charybdis_4x6(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
        F12CTL,	   F1_ALT,	KC_F2,	 KC_F3,	  KC_F4,   KC_F5,      KC_F6,	KC_F7,   KC_F8,	  KC_F9,   F10ALT,	F11CTL,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
        KC_UNDS,   KC_Q,	KC_W,	 KC_F,	  KC_P,	   KC_G,       KC_J,	KC_L,	KC_U,	KC_Y,	KC_BSPC,	KC_DEL,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
        LTBSL2,	   KC_A,	KC_R,	 KC_S,	  LT_T_1,  KC_D,       KC_H,	KC_N,	KC_E,	KC_I,	KC_O,	LTQUT2,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
        KC_LGUI,   Z_LALT,	_XRALT,  KC_C,	  LT_V_3,  KC_B,       KC_K,	KC_M,	KC_COMMA,	DOTALT,	SCLALT,	KC_SLSH,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                     TABCTL,  SPCSFT,  ESC_CS,      APPSFT,	ENTCTL,
                                           KC_LEFT, KC_RIGHT,     TG(1)
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

  [LAYER_NAVDIG] = LAYOUT_charybdis_4x6(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       KC_0,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       _______, _______, _______, _______, _______, _______,    _______, KC_HOME, KC_PGDN, KC_PGUP,	KC_END, _______,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       _______, _______, DRAGSCROLL_MODE, KC_LALT, _______, _______,    _______, KC_LEFT, KC_DOWN, KC_UP,	KC_RIGHT, _______,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       _______, _______, _______, _______, _______, _______,    _______, KC_BTN1, KC_BTN3, KC_BTN2, DRAGSCROLL_MODE, _______,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                  _______, _______, _______,    _______, _______,
                                           KC_WH_D, KC_WH_U,      TG(1)
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

  [LAYER_SYM] = LAYOUT_charybdis_4x6(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
_______,	KC_PSCR,	KC_SLCK,	KC_PAUS,	KC_F13,	KC_F14,			KC_PSLS,	S(KC_EQL),	KC_MINS,	S(KC_8),	KC_SLSH,	_______,
_______,	S(KC_6),	INSTACIRC,	S(KC_LBRACKET),	S(KC_RBRACKET),	S(KC_5),			KC_PAST,	S(KC_1),	KC_EQL,	INSTADOUBLE,	_______,	_______,
_______,	_______,	S(KC_2),	S(KC_9),	S(KC_0),	S(KC_3),			KC_PPLS,	S(KC_COMMA),	S(KC_DOT),	INSTAGRAVE,	_______,	_______,
_______,	_______,	RALT(KC_SCLN),	KC_LBRACKET,	KC_RBRACKET,	S(KC_4),			KC_PMNS,	KC_PIPE,	S(KC_7),	INSTAQUOTE,	_______,	_______,
			_______,	_______,	_______,			_______,	_______,
				_______,	_______,			_______
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

  [LAYER_NUM] = LAYOUT_charybdis_4x6(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
KC_NLCK,	_______,	_______,	_______,	TG(4),	_______,			KC_PSLS,	KC_KP_7,	KC_KP_8,	KC_KP_9,	_______,	_______,
_______,	_______,	_______,	_______,	_______,	_______,			KC_PAST,	KC_KP_4,	KC_KP_5,	KC_KP_6,	_______,	_______,
_______,	_______,	KC_MUTE,	KC_VOLU,	_______,	_______,			KC_PPLS,	KC_KP_1,	KC_KP_2,	KC_KP_3,	_______,	_______,
_______,	_______,	_______,	KC_VOLD,	_______,	_______,			KC_PMNS,	KC_KP_0,	KC_TRNS,	KC_TRNS,	_______,	_______,
			_______,	_______,	_______,			_______,	_______,
				_______,	_______,			_______
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),
  [LAYER_GAME] = LAYOUT_charybdis_4x6(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
KC_ESC,	KC_1,	KC_2,	KC_3,	KC_4,	KC_5,			KC_6,	KC_7,	KC_8,	KC_9,	KC_0,	LALT(KC_TAB),
KC_TAB,	KC_Q,	KC_W,	KC_E,	KC_R,	KC_T,			KC_Y,	KC_U,	KC_I,	KC_O,	KC_P,	LSA(KC_TAB),
KC_LSFT,	KC_A,	KC_S,	KC_D,	KC_F,	KC_G,			KC_H,	KC_J,	KC_K,	KC_L,	_______,	_______,
KC_LCTL,	KC_Z,	KC_X,	KC_C,	KC_V,	KC_B,			KC_N,	KC_M,	KC_COMMA,	KC_DOT,	_______,	TO(0),
			KC_LALT,	KC_SPC,	KC_BTN3,			KC_UP,	_______,
				KC_LEFT,	KC_RIGHT,			KC_DOWN
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),
};
// clang-format on

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
            if (record->event.pressed)
    switch (keycode) {
          case INSTAQUOTE:
			SEND_STRING("\' ");
            return false;
          case INSTADOUBLE:
			SEND_STRING("\" ");
            return false;
          case INSTACIRC:
			SEND_STRING("^ ");
            return false;
          case INSTAGRAVE:
			SEND_STRING("` ");
            return false;
    }
    return true;
}
