/*
Copyright 2017 Danny Nguyen <danny@keeb.io>

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

// Some notes: https://docs.qmk.fm/#/config_options?id=behaviors-that-can-be-configured

#pragma once

/* Use I2C or Serial, not both */

#define USE_SERIAL
// #define USE_I2C

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

// #undef RGBLED_NUM
// #define RGBLIGHT_ANIMATIONS
// #define RGBLED_NUM 12
// #define RGBLIGHT_HUE_STEP 8
// #define RGBLIGHT_SAT_STEP 8
// #define RGBLIGHT_VAL_STEP 8

#define QMK_ESC_OUTPUT D7 // usually COL
#define QMK_ESC_INPUT F6 // usually ROW
#define QMK_LED E6
#define QMK_SPEAKER C6

// Settings: https://beta.docs.qmk.fm/features/feature_advanced_keycodes

#undef BACKLIGHT_LEVELS
#define BACKLIGHT_LEVELS 1

#define AUTO_SHIFT_TIMEOUT 200
#define TAPPING_TERM 200


//#define PERMISSIVE_HOLD			// makes tap and hold keys trigger the hold if another key is pressed before releasing, even if it hasn't hit the TAPPING_TERM

#define TAPPING_FORCE_HOLD 			//doesn't seem to work
//#define RETRO_TAPPING
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
