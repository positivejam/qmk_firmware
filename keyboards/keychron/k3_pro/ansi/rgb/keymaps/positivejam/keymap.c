/* Copyright 2023 @ Keychron (https://www.keychron.com)
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
#include "print.h"

// clang-format off
enum layers{
  MAC_BASE,
  MAC_FN,
  WIN_BASE,
  WIN_FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[MAC_BASE] = LAYOUT_ansi_84(
     MT(MOD_LCTL,KC_ESC),  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_MUTE,    KC_VOLD,    KC_VOLU,    KC_F10,   KC_F11,   KC_F12,   KC_SNAP,  KC_DEL,  RGB_TOG,
     KC_GRV,               KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,       KC_8,       KC_9,       KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,            KC_HOME,
     KC_TAB,               KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,       KC_I,       KC_O,       KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,            KC_END,
     KC_CAPS,              KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,       KC_K,       KC_L,       KC_SCLN,  KC_QUOT,            KC_ENT,             KC_PGUP,
     KC_LSPO,              KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,            KC_RSFT,             KC_UP,   KC_PGDN,
     KC_LCTL,              KC_LGUI,  KC_LALT,                               KC_SPC,                                 MO(1),MO(2),MO(3),                  KC_LEFT,  KC_DOWN,  KC_RGHT),

[MAC_FN] = LAYOUT_ansi_84(
     KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_F7,    KC_F8,    KC_F9,    KC_TRNS,   KC_TRNS,   KC_TRNS,     KC_TRNS,     KC_TRNS,     RGB_MOD,
     KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,     KC_TRNS,                  KC_TRNS,
     KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,     KC_TRNS,                  KC_TRNS,
     KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,                KC_TRNS,                  KC_TRNS,
     KC_TRNS,              KC_TRNS,    KC_TRNS,    BAT_LVL,    KC_TRNS,    KC_TRNS,    NK_TOGG,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_MS_BTN1,             KC_MS_BTN2,  KC_MS_UP,    KC_TRNS,
     KC_TRNS,  KC_TRNS,    KC_TRNS,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_MS_LEFT,  KC_MS_DOWN,  KC_MS_RIGHT),

[WIN_BASE] = LAYOUT_ansi_84(
     KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,     KC_TRNS,     KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,     KC_TRNS,               KC_TRNS,
     KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,     KC_TRNS,               KC_TRNS,
     KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,                KC_TRNS,               KC_TRNS,
     KC_TRNS,              KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,                KC_TRNS,  KC_TRNS,     KC_TRNS,
     KC_TRNS,  KC_TRNS,    KC_TRNS,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,     KC_TRNS,  KC_TRNS),

[WIN_FN] = LAYOUT_ansi_84(
     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
     KC_TRNS,  BT_HST1,  BT_HST2,  BT_HST3,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
     KC_TRNS,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
     KC_TRNS,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,            KC_TRNS,
     KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS)
};

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
     /*
          K3 Pro has 2 LEDs on the caps lock key: 1 red and 1 RGB. The red LED is set using the LED_CAPS_LOCK_PIN.
          The RGB LED is controlled by the RGB matrix. To get full control over the caps lock color, need to:
          1. Disable the red LED: combination of undefining a couple of macros in `config.h` and setting the pin to output low in led_update_user().
          2. Set the RGB LED to the color I want as a caps lock indicator.
          see: https://docs.qmk.fm/#/feature_rgb_matrix?id=indicator-examples
     */
     if (host_keyboard_led_state().caps_lock) {
          RGB_MATRIX_INDICATOR_SET_COLOR(46, 255, 255, 255);
     } else {
          RGB_MATRIX_INDICATOR_SET_COLOR(46, 0, 252, 255);
     }

     /*
          Any non-transparent key on the active layer will be set to green.
          This has the effect of showing the keys that have keycodes assigned
          to them on that layer, but not the ones that retain their default.
          see: https://docs.qmk.fm/#/feature_rgb_matrix?id=indicator-examples
     */
     if (get_highest_layer(layer_state) > 0) {
          uint8_t layer = get_highest_layer(layer_state);
          for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
               for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
                    uint8_t index = g_led_config.matrix_co[row][col];
                    if (index >= led_min && index < led_max && index != NO_LED &&
                         keymap_key_to_keycode(layer, (keypos_t){col,row}) > KC_TRNS) {
                         rgb_matrix_set_color(index, RGB_GREEN);
                    }
               }
          }
     }
     return false;
}
// NOTE: Keychron code uses this instead of using kb level. Had to change `indicator.c:561` to use kb level to get this to build.
bool led_update_user(led_t led_state) {
     // Turn off the red LED on the caps lock key
     static uint8_t caps_state = 0;
     writePin(LED_CAPS_LOCK_PIN, caps_state);
     return false;
}

void keyboard_post_init_user(void) {
     // Customise these values to desired behaviour
     // debug_enable=true;
     // debug_matrix=true;
     // debug_keyboard=true;
     // debug_mouse=true;
}

