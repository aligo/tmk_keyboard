#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // /* plain qwerty */
    // KEYMAP_AK60(         ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV,  \
    //                      TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC,      \
    //                      CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,       \
    //                      LSFT,NO,  Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,NO,        \
    //                      LCTL,LALT,LGUI,          SPC,                     NO,  RGUI,RALT,NO)
    /* ak60 qwerty */
    KEYMAP_AK60(         ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV,  \
                         TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC,      \
                         LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,       \
                         FN20,NO,  Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,NO,        \
                         FN0, LALT,LGUI,          FN21,                    NO,  RGUI,RALT,NO),
    /* 10:  Fn */
    [10] = KEYMAP_AK60(  END, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, PSCR,PAUS, \
                         CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PGUP,PGDN,INS,       \
                         TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,LEFT,DOWN,UP,  RGHT,TRNS,TRNS,     HOME,      \
                         TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,      \
                         TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),


};


/*
 * Fn action definition
 */
const uint16_t PROGMEM fn_actions[] = {
    [0]  = ACTION_LAYER_MOMENTARY(10),
    [20] = ACTION_MODS_ONESHOT(MOD_LSFT),
    [21] = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_SPC),
};