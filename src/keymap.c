#include <avr/pgmspace.h>

#include "keymap.h"
#include "matrix.h"

const keycode_t KEYMAP[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
{
  { KC_ESCAPE,   KC_1,    KC_2,    KC_3,     KC_4,    KC_5,     KC_6,    KC_7,     KC_8,    KC_9,     KC_0,      KC_MINUS,    KC_EQUAL,    KC_BSPACE },
  { KC_TAB,      KC_Q,    KC_W,    KC_E,     KC_R,    KC_T,     KC_Y,    KC_U,     KC_I,    KC_O,     KC_P,      KC_LBRACKET, KC_RBRACKET, KC_BSLASH },
  { KC_CAPSLOCK, KC_A,    KC_S,    KC_D,     KC_F,    KC_G,     KC_H,    KC_J,     KC_K,    KC_L,     KC_SCOLON, KC_QUOTE,    KC_NONE,     KC_ENTER },
  { KC_LSHIFT,   KC_NONE, KC_Z,    KC_X,     KC_C,    KC_V,     KC_B,    KC_N,     KC_M,    KC_COMMA, KC_DOT,    KC_SLASH,    KC_NONE,     KC_RSHIFT },
  { KC_LCTRL,    KC_LGUI, KC_LALT, KC_NONE,  KC_NONE, KC_SPACE, KC_NONE, KC_NONE,  KC_NONE, KC_NONE,  KC_RALT,   KC_RGUI,     KC_APPLICATION, KC_RCTRL  }
};

keycode_t keymap_key_at(matrix_row_t row, matrix_row_t col) {
  return (keycode_t)(pgm_read_byte(&(KEYMAP[row][col])));
}