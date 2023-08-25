/* Copyright 2019 Takuya Urakawa (dm9records.com)
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

enum plaid_layers {
  _QWERTY,
  _SPACE,
  _LOWER,
  _RAISE,
};

#define Z_TAB LCTL_T(KC_TAB)
#define Z_ENT RCTL_T(KC_ENT)
#define Z_SPC LT(_SPACE, KC_SPC)
#define Z_LWR MO(_LOWER)
#define Z_RSE MO(_RAISE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * |  Esc |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |  Tab |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  | Entr |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shft |   ,  |   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   .  |   /  | Shft |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  Gui |      |  Alt |  Lwr |  Space / M1 |  Rse |  Alt |      |  Gui |      |
 * `-----------------------------------------------------------------------------------'
 */

[_QWERTY] = LAYOUT_ortho_4x12(
    KC_ESC,     KC_Q,       KC_W,   KC_E,       KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,       KC_O,   KC_P,       KC_BSPC,
    Z_TAB,      KC_A,       KC_S,   KC_D,       KC_F,   KC_G,   KC_H,   KC_J,   KC_K,       KC_L,   KC_SCLN,    Z_ENT,
    KC_LSFT,    KC_COMM,    KC_Z,   KC_X,       KC_C,   KC_V,   KC_B,   KC_N,   KC_M,       KC_DOT, KC_SLSH,    KC_RSFT,
    KC_NO,      KC_LGUI,    KC_NO,  KC_LALT,    Z_LWR,  Z_SPC,  Z_SPC,  Z_RSE,  KC_RALT,    KC_NO,  KC_RGUI,    KC_NO
),

/* Template
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 *
 * [_LAYER3] = LAYOUT_ortho_4x12(
 *     _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,   _______,    _______,
 *     _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,   _______,    _______,
 *     _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,   _______,    _______,
 *     _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,   _______,    _______
 * ),
 */

};

