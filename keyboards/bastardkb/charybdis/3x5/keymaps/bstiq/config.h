/**
 * Copyright 2021 Quentin LEBASTARD <qlebastard@gmail.com>
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
#pragma once

#ifdef VIA_ENABLE
/* Via/Vial configuration. */
#define DYNAMIC_KEYMAP_LAYER_COUNT 8
#ifdef VIAL_ENABLE
/** Vial-specific configuration. */

#define VIAL_KEYBOARD_UID \
  { 0x08, 0x7F, 0xDE, 0x7F, 0xFA, 0x71, 0xB7, 0x49 }
#define VIAL_UNLOCK_COMBO_ROWS \
  { 0, 4 }
#define VIAL_UNLOCK_COMBO_COLS \
  { 0, 0 }

#ifndef __arm__
/** Disable unused vial features. */

// In addition to RGB Matrix effects, VialRGB also provides direct LED control
// with a script running on your computer.  Remove to reenable.
#define VIALRGB_NO_DIRECT
#endif  // __arm__
#endif  // VIAL_ENABLE
#endif  // VIA_ENABLE

#ifndef __arm__
/* Disable unused features. */
#define NO_ACTION_ONESHOT
#endif  // __arm__

/**
 * Configure the global tapping term (default: 200ms).
 * If you have a lot of accidental mod activations, crank up the tapping term.
 *
 * See docs.qmk.fm/using-qmk/software-features/tap_hold#tapping-term
 */
#ifndef TAPPING_TERM
#define TAPPING_TERM 160
#endif  // TAPPING_TERM

#define TAPPING_FORCE_HOLD
#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT

// midplate rgb
#undef RGBLED_NUM
#define RGBLED_NUM 65
#undef RGBLED_SPLIT
#define RGBLED_SPLIT \
  { 33, 32 }

#define RGBLIGHT_LIMIT_VAL 120
#define RGBLIGHT_MODE_RAINBOW_MOOD

/** Charybdis-specific features. */

#define CHARYBDIS_DRAGSCROLL_REVERSE_X

/** Double custom build features **/

#define ENCODERS_PAD_A { B1 }
#define ENCODERS_PAD_B { B2 }

#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_COMBINED
#define CIRQUE_PINNACLE_ADDR 0x2A