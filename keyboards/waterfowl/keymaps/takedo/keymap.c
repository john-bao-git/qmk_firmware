/* Copyright 2022  CyanDuck
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
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

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _Layer0,
	_Layer1,
    _Layer2,
    _Layer3,
	_Layer4,
	_Layer5
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	/* Alphas
	*
	* ,----------------------------------.             		  	 ,----------------------------------.
	* |   Q  |   W  |   F  |   P  |   G  |             	      	 |   J  |   L  |   U  |   Y  |   :  |
	* |------+------+------+------+------|             	      	 |------+------+------+------+------|
	* |   A  |   R  |   S  |   T  |   D  |             	      	 |   H  |   N  |   E  |   I  |   O  |
	* |------+------+------+------+------|  ,-----.     ,-----.  |------+------+------+------+------|
	* |   Z  |   X  |   C  |   V  |   B  |  | CAPS|     | Play|  |   K  |   M  |   ,  |   .  |   /  |
	* `----------------------------------'  `-----'     `-----'  `----------------------------------'
	*       ,-----. ,-----------------------------.     ,-------------------------------. ,-----.
	*       | Ctrl| | L2/DEL | SFT/SPACE | L1/TAB |     | L3/Enter | L4/Bksp | Ctrl/Tab | |     |
	*       `-----' `-----------------------------'     `-------------------------------' `-----'
	*/
	[_Layer0] = LAYOUT(
	//,-------------------------------------------------------------------------------------------------------------.  ,-------------------------------------------------------------------------------------------------------------.
						KC_Q,                 KC_W,                 KC_F,                 KC_P,                 KC_G,                    KC_J,                 KC_L,                 KC_U,                 KC_Y,              KC_SCLN,
	//|---------------------+---------------------+---------------------+---------------------+---------------------|  |---------------------+---------------------+---------------------+---------------------+---------------------|
						KC_A,                 KC_R,                 KC_S,                 KC_T,                 KC_D,                    KC_H,                 KC_N,                 KC_E,                 KC_I,                 KC_O,
	//|---------------------+---------------------+---------------------+---------------------+---------------------|  |---------------------+---------------------+---------------------+---------------------+---------------------|
						KC_Z,                 KC_X,                 KC_C,                 KC_V,                 KC_B,                    KC_K,                 KC_M,              KC_COMM,               KC_DOT,              KC_SLSH,
	//|---------------------+---------------------+---------------------+---------------------+---------------------|  |---------------------+---------------------+---------------------+---------------------+---------------------|
					 KC_LCTL,        LT(2, KC_DEL),       SFT_T(KC_BSPC),         LT(1,KC_ENT),              KC_CAPS, 	              KC_MPLY, 		   LT(3,KC_ENT),        LT(4, KC_SPC),        CTL_T(KC_TAB),			  XXXXXXX
	//`-------------------------------------------------------------------------------------------------------------'  `-------------------------------------------------------------------------------------------------------------'
	),

	/* Ctrl Shortcuts, Number Row
	*
	* ,----------------------------------.                      ,----------------------------------.
	* |      |	  W |    F |    Y |      |                      |   ~  |   7  |   8  |   9  |   %  |
	* |------+------+------+------+------|                      |------+------+------+------+------|
	* |    A | 	    |    S |    T | LAlt |                      |   -  |   4  |   5  |   6  |   0  |
	* |------+------+------+------+------|  ,-----.    ,-----.  |------+------+------+------+------|
	* |    Z |    X |    C |      |  Esc |  |CAPS |    | Play|  |   .  |   1  |   2  |   3  |   $  |
	* `----------------------------------'  `-----'    `-----'  `----------------------------------'
	*         	,-----.   ,-----------------------.    ,--------------------. ,-----.
	*          	|     |   |       |      |        |    |  	  = | SPACE | \ | |     |
	*          	`-----'   `-----------------------'    `--------------------' `-----'
	*/
	[_Layer1] = LAYOUT(
	//,-------------------------------------------------------------------------------------------------------------.  ,-------------------------------------------------------------------------------------------------------------.
					 XXXXXXX,              C(KC_W),              C(KC_F),              C(KC_Y),              XXXXXXX,  				  KC_TILD,                 KC_7,                 KC_8,                 KC_9,              KC_PERC,
	//|---------------------+---------------------+---------------------+---------------------+---------------------|  |---------------------+---------------------+---------------------+---------------------+---------------------|
					 C(KC_A),              XXXXXXX,              C(KC_S),              C(KC_T),              KC_LALT,				  KC_PMNS,                 KC_4,                 KC_5,                 KC_6,                 KC_0,
	//|---------------------+---------------------+---------------------+---------------------+---------------------|  |---------------------+---------------------+---------------------+---------------------+---------------------|
					 C(KC_Z),              C(KC_X),            C(KC_INS),            S(KC_INS),               KC_ESC,                  KC_DOT,                 KC_1,                 KC_2,                 KC_3,               KC_DLR,
	//|---------------------+---------------------+---------------------+---------------------+---------------------|  |---------------------+---------------------+---------------------+---------------------+---------------------|
				     XXXXXXX,        	   XXXXXXX,              XXXXXXX,              XXXXXXX,              KC_CAPS, 	              KC_MPLY, 		         KC_EQL,               KC_SPC,              KC_BSLS,			  XXXXXXX
	//`-------------------------------------------------------------------------------------------------------------'  `-------------------------------------------------------------------------------------------------------------'
	),

	/* Navigation, Page Up/Down, Home/End, Forward/Back, Symbol
	*
	* ,----------------------------------.                      ,----------------------------------.
	* |      | PgUp |   Up | Home |      |                      |    ` |    [ |    ] |    @ |    ^ |
	* |------+------+------+------+------|                      |------+------+------+------+------|
	* |   M4 | Left | Down | Rght |   M5 |                      |    _ |    ( |    ) |    ' |    " |
	* |------+------+------+------+------|  ,-----.    ,-----.  |------+------+------+------+------|
	* |      | PgDwn|      |  End |      |  |CAPS |    | Play|  |    # |    { |    } |    ! |    * |
	* `----------------------------------'  `-----'    `-----'  `----------------------------------'
	*            ,-----.   ,----------------------.     ,--------------------. ,-----.
	*          	 |     |   |      |      |        |     |  	  + |    & |   | | |     |
	*          	 `-----'   `----------------------'     `--------------------' `-----'
	*/
	[_Layer2] = LAYOUT(
	//,-------------------------------------------------------------------------------------------------------------.  ,-------------------------------------------------------------------------------------------------------------.
					 XXXXXXX,              KC_PGUP,                KC_UP,              KC_HOME,              XXXXXXX,                  KC_GRV,              KC_LBRC,              KC_RBRC,                KC_AT,              KC_CIRC,
	//|---------------------+---------------------+---------------------+---------------------+---------------------|  |---------------------+---------------------+---------------------+---------------------+---------------------|
					 KC_BTN4,              KC_LEFT,              KC_DOWN,             KC_RIGHT,              KC_BTN5,                 KC_UNDS,              KC_LPRN,              KC_RPRN,              KC_QUOT,               KC_DQT,
	//|---------------------+---------------------+---------------------+---------------------+---------------------|  |---------------------+---------------------+---------------------+---------------------+---------------------|
					 XXXXXXX,              KC_PGDN,              XXXXXXX,               KC_END,              XXXXXXX,                 KC_HASH,              KC_LCBR,              KC_RCBR,              KC_EXLM,              KC_PAST,
	//|---------------------+---------------------+---------------------+---------------------+---------------------|  |---------------------+---------------------+---------------------+---------------------+---------------------|
					 XXXXXXX,			   XXXXXXX,              XXXXXXX,              XXXXXXX,              KC_CAPS, 	              KC_MPLY, 		        KC_PLUS,              KC_AMPR,              KC_PIPE,			  XXXXXXX
	//`-------------------------------------------------------------------------------------------------------------'  `-------------------------------------------------------------------------------------------------------------'
	),

	/* Macros, Media, Function
	*
	* ,----------------------------------.                      ,----------------------------------.
	* |      |      |      |      |      |                      | Vol+ |  F7  |  F8  |  F9  |  F12 |
	* |------+------+------+------+------|                      |------+------+------+------+------|
	* | Win+L|Alt+Ps| Alt+A| Macro| Macro|                      | Play |  F4  |  F5  |  F6  |  F11 |
	* |------+------+------+------+------|  ,-----.    ,-----.  |------+------+------+------+------|
	* |      |      |      |      |      |  |CAPS |    | Play|  | Vol- |  F1  |  F2  |  F3  |  F10 |
	* `----------------------------------'  `-----'    `-----'  `----------------------------------'
	*          	 ,-----.   ,----------------------.    ,----------------------. ,-----.
	*          	 |     |   |  WIN |      |     L5 |    |        |      |      | |     |
	*          	 `-----'   `----------------------'    `----------------------' `-----'
	*/
	[_Layer3] =  LAYOUT(
	//,-------------------------------------------------------------------------------------------------------------.  ,-------------------------------------------------------------------------------------------------------------.
                	 XXXXXXX,              XXXXXXX,              XXXXXXX,              XXXXXXX,              XXXXXXX,                 KC_VOLU,                KC_F7,                KC_F8,                KC_F9,               KC_F12,
	//|---------------------+---------------------+---------------------+---------------------+---------------------|  |---------------------+---------------------+---------------------+---------------------+---------------------|
                   	 G(KC_L),           A(KC_PAUS),              A(KC_A),    C(A(LCA(KC_DEL))),  S(LWIN(SWIN(KC_S))),                 KC_MPLY,                KC_F4,                KC_F5,                KC_F6,               KC_F11,
	//|---------------------+---------------------+---------------------+---------------------+---------------------|  |---------------------+---------------------+---------------------+---------------------+---------------------|
                	 XXXXXXX,              XXXXXXX,              XXXXXXX,              XXXXXXX,              XXXXXXX,                 KC_VOLD,                KC_F1,                KC_F2,                KC_F3,               KC_F10,
	//|---------------------+---------------------+---------------------+---------------------+---------------------|  |---------------------+---------------------+---------------------+---------------------+---------------------|
					 XXXXXXX,			   KC_LGUI,              XXXXXXX,             	 TG(5),              KC_CAPS, 	              KC_MPLY, 		        XXXXXXX,              XXXXXXX,              XXXXXXX,			  XXXXXXX
	//`-------------------------------------------------------------------------------------------------------------'  `-------------------------------------------------------------------------------------------------------------'
	),

	/* Mouse, Numpad
	*
	* ,----------------------------------.                      ,----------------------------------.
	* |      |  WhD |  MsU |  WhU |      |                      |      |   7  |   8  |   9  |      |
	* |------+------+------+------+------|                      |------+------+------+------+------|
	* |  WhL |  MsL |  MsD |  MsR |  WhR |                      |      |   4  |   5  |   6  |    0 |
	* |------+------+------+------+------|  ,-----.    ,-----.  |------+------+------+------+------|
	* |      | Btn2 | Btn3 | Btn1 |      |  |CAPS |    | Play|  | NUMLK|   1  |   2  |   3  |      |
	* `----------------------------------'  `-----'    `-----'  `----------------------------------'
	*          	 ,-----.   ,----------------------.    ,----------------------. ,-----.
	*          	 |     |   |  Sp3 |  Sp2 | 	  Sp1 |    |        |      |      | |     |
	*          	 `-----'   `----------------------'    `----------------------' `-----'
	*/
	[_Layer4] =  LAYOUT(
	//,-------------------------------------------------------------------------------------------------------------.  ,-------------------------------------------------------------------------------------------------------------.
                   	 XXXXXXX,              KC_WH_D,              KC_MS_U,              KC_WH_U,              XXXXXXX,              	  XXXXXXX,                KC_P7,                KC_P8,                KC_P9,              XXXXXXX,
	//|---------------------+---------------------+---------------------+---------------------+---------------------|  |---------------------+---------------------+---------------------+---------------------+---------------------|
                   	 KC_WH_L,              KC_MS_L,              KC_MS_D,              KC_MS_R,              KC_WH_R,                 XXXXXXX,                KC_P4,                KC_P5,                KC_P6,                KC_P0,
	//|---------------------+---------------------+---------------------+---------------------+---------------------|  |---------------------+---------------------+---------------------+---------------------+---------------------|
                	 XXXXXXX,              KC_BTN2,              KC_BTN3,              KC_BTN1,              XXXXXXX,                  KC_NUM,                KC_P1,                KC_P2,                KC_P3,              XXXXXXX,
	//|---------------------+---------------------+---------------------+---------------------+---------------------|  |---------------------+---------------------+---------------------+---------------------+---------------------|
					 XXXXXXX,			   KC_ACL2,              KC_ACL1,              KC_ACL0,              KC_CAPS, 	              KC_MPLY, 		        XXXXXXX,              XXXXXXX,              XXXXXXX,			  XXXXXXX
	//`-------------------------------------------------------------------------------------------------------------'  `-------------------------------------------------------------------------------------------------------------'
	),

	/* Gaming
	*
	* ,----------------------------------.             		  	 ,----------------------------------.
	* |   Q  |   W  |   F  |   P  |   G  |             	      	 |   J  |   L  |   U  |   Y  | Disc |
	* |------+------+------+------+------|             	      	 |------+------+------+------+------|
	* |   A  |   R  |   S  |   T  |   D  |             	      	 |   H  |   N  |   E  |   I  |   O  |
	* |------+------+------+------+------|  ,-----.     ,-----.  |------+------+------+------+------|
	* |   Z  |   X  |   C  |   V  |   B  |  | ESC |     | F10 |  |   K  |   M  |   ,  |   .  |  SS  |
	* `----------------------------------'  `-----'     `-----'  `----------------------------------'
	*          	 ,-----.   ,----------------------.    ,----------------------. ,-----.
	*          	 | Tab |   |   1 | Space | 		2 |    |  Enter | Bksp |   L5 | |     |
	*          	 `-----'   `----------------------'    `----------------------' `-----'
	*/
	[_Layer5] =  LAYOUT(
	//,-------------------------------------------------------------------------------------------------------------.  ,-------------------------------------------------------------------------------------------------------------.
                    	KC_Q,                 KC_W,                 KC_F,                 KC_P,                 KC_G,   				 KC_J,                 KC_L,                 KC_U,                 KC_Y,      S(RSFT(KC_GRV)),
	//|---------------------+---------------------+---------------------+---------------------+---------------------|  |---------------------+---------------------+---------------------+---------------------+---------------------|
                   		KC_A,                 KC_R,                 KC_S,                 KC_T,                 KC_D,                    KC_H,                 KC_N,                 KC_E,                 KC_I,                 KC_O,
	//|---------------------+---------------------+---------------------+---------------------+---------------------|  |---------------------+---------------------+---------------------+---------------------+---------------------|
                   		KC_Z,                 KC_X,                 KC_C,                 KC_V,                 KC_B,                    KC_K,                 KC_M,              KC_COMM,               KC_DOT,  S(LWIN(SWIN(KC_S))),
	//|---------------------+---------------------+---------------------+---------------------+---------------------|  |---------------------+---------------------+---------------------+---------------------+---------------------|
					  KC_TAB,			   	  KC_1,               KC_SPC,                 KC_2,               KC_ESC, 	               KC_F10, 		         KC_ENT,              KC_BSPC,                TG(5),			  XXXXXXX
	//`-------------------------------------------------------------------------------------------------------------'  `-------------------------------------------------------------------------------------------------------------'
	),
};

#ifdef OLED_ENABLE
bool oled_task_user(void) {
   if (is_keyboard_master()) {
		// Host Keyboard Layer Status
		oled_write_P(PSTR("LAYER:\n"), false);
		oled_write_P(PSTR("\n"), false);

		switch (get_highest_layer(layer_state)) {
			case 0:
				oled_write_P(PSTR("Alphas\n\n\n\n"), false);
				break;
			case 1:
				oled_write_P(PSTR("CTRL\nNumRow\n\n\n"), false);
				break;
			case 2:
				oled_write_P(PSTR("Nav\nSym\n\n\n"), false);
				break;
			case 3:
				oled_write_P(PSTR("Macro\nMedia,FNC\n"), false);
				break;
			case 4:
				oled_write_P(PSTR("Mouse\nNumpad\n"), false);
				break;
			case 5:
				oled_write_P(PSTR("Gaming\n\n"), false);
				break;
			default:
				oled_write_ln_P(PSTR("Undefined"), false);
		}
	} else {
        static const char PROGMEM my_logo[] = {
            // Paste the code from the previous step below this line!
            // 'waterfowl for OLED', 64x128px
			// 'Phantom Thief Logo', 64x128px
			// Use https://diyusthad.com/image2cpp then choose Vertical Draw Mode
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x40, 0x60, 0x30, 0x10, 0x10,
			0x18, 0x08, 0x0c, 0x04, 0x04, 0x06, 0x06, 0x02, 0x02, 0x02, 0x02, 0x02, 0x03, 0x01, 0x01, 0x01,
			0x01, 0x01, 0x01, 0x01, 0x01, 0x81, 0xfe, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x80, 0xe0, 0x30, 0x18, 0x0c, 0x06, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x1e, 0x13, 0x30, 0x20, 0x60, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x80, 0x80, 0xc0, 0xc0, 0x40, 0x40, 0xc0, 0x40, 0x40,
			0x40, 0x40, 0xc0, 0xc0, 0xe0, 0xe0, 0xf0, 0x6c, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x0c, 0x18, 0x70, 0xe0, 0x80, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x40, 0x20, 0x10, 0x00, 0x00, 0x00, 0x0c,
			0x0e, 0x07, 0x07, 0x01, 0x00, 0xc0, 0x71, 0x1b, 0x0a, 0x0e, 0x7e, 0xce, 0x06, 0x06, 0x06, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x1f, 0x70, 0xc0,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0xf8, 0xfe, 0xff, 0xff, 0xff, 0xf1, 0xc0, 0xc0, 0x78, 0x7c, 0x7e, 0x60, 0xf0,
			0xf0, 0xf8, 0x7c, 0x3e, 0x0f, 0x01, 0x00, 0x00, 0x00, 0xc0, 0xfc, 0x1f, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x60, 0x10, 0x18, 0x08, 0x04, 0x04, 0x06, 0x02, 0x02, 0x03,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xe0, 0xfe, 0xff, 0xf0,
			0xf0, 0xf0, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x80, 0xc0, 0x60, 0x70, 0x38, 0x18, 0x0c, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x1f, 0x31, 0x60, 0xc0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xfb, 0x7f, 0x7f, 0x7f, 0xff,
			0xff, 0xff, 0xef, 0x67, 0x63, 0x23, 0x01, 0x01, 0x80, 0xc0, 0x70, 0x18, 0x0c, 0x04, 0x06, 0x03,
			0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x02, 0x02, 0x02, 0x02, 0x06,
			0x0c, 0x13, 0x36, 0x6e, 0x6e, 0x4c, 0xc0, 0x80, 0xf0, 0x10, 0x11, 0x30, 0x30, 0x20, 0x60, 0x40,
			0x40, 0x40, 0x60, 0x30, 0x18, 0x0c, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
        };

        oled_write_raw_P(my_logo, sizeof(my_logo));
    }

    return false;
}
#endif

#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { // Left roller
        if (clockwise) {
            tap_code(KC_LEFT);
        } else {
            tap_code(KC_RIGHT);        }
    } else if (index == 1) { // Left encoder
        if (clockwise) {
            tap_code(KC_UP);
        } else {
            tap_code(KC_DOWN);
        }
    } else if (index == 2) { // Right roller
        if (clockwise) {
            tap_code(KC_MS_WH_RIGHT);
        } else {
            tap_code(KC_MS_WH_LEFT);
        }
    } else if (index == 3) { // Right encoder
        if (clockwise) {
            tap_code(KC_VOLD);
        } else {
            tap_code(KC_VOLU);
        }
    }

    return false;
}
#endif
