#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP_AK60( GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,ESC,  \
                 TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC,      \
                 LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,       \
                 LSFT,NO,  Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,NO,        \
                 LCTL,LALT,LGUI,          SPC,                     NO,  RGUI,RALT,NO)
};
const uint16_t PROGMEM fn_actions[] = {};