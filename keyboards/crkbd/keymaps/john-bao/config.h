/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

//#define USE_MATRIX_I2C

/* Select hand configuration */ 

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

// #define IGNORE_MOD_TAP_INTERRUPT

// #define TAPPING_FORCE_HOLD
// #define TAPPING_TERM 200

// #define TAPPING_TERM_PER_KEY

#define DYNAMIC_KEYMAP_LAYER_COUNT 7

#define MATRIX_COL_PINS_RIGHT \
    { F4, F5, B2, F7, B1, B3 }

#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"

#define MK_3_SPEED
#define MK_MOMENTARY_ACCEL
#define MK_COMBINED

#define MK_C_OFFSET_0 1
#define MK_C_OFFSET_1 4
#define MK_C_OFFSET_2 8