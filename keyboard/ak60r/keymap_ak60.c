#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // /* plain qwerty */
    // KEYMAP_AK60(         ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV,  \
    //                      TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC,      \
    //                      CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,       \
    //                      LSFT,NO,  Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,NO,        \
    //                      LCTL,LALT,LGUI,          SPC,                     NO,  RGUI,RALT,NO)
    /* ak60 qwerty */
    KEYMAP_AK60(         GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, ESC, BSPC,  \
                         TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,      \
                         LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,       \
                         FN10,NO,  Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,FN1,       \
                         LCTL,LALT,LGUI,          FN0,                     LEFT,DOWN,UP,  RGHT),
    /* 10:  Fn */
    [10] = KEYMAP_AK60(  ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, PSCR,TRNS, \
                         CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,INS, TRNS,TRNS,PGUP,PGDN,TRNS,      \
                         TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,LEFT,DOWN,UP,  RGHT,TRNS,TRNS,     HOME,      \
                         TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,      \
                         TRNS,TRNS,TRNS,          TRNS,                    TRNS,RGUI,RALT,TRNS),
    /* 11:  Mouse */
    [11] = KEYMAP_AK60(  TRNS,MS_L,MS_D,MS_U,MS_R,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
                         TRNS,WH_L,WH_D,WH_U,WH_R,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,      \
                         TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,LEFT,DOWN,UP,  RGHT,TRNS,TRNS,     TRNS,      \
                         TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,      \
                         TRNS,TRNS,TRNS,          BTN1,                    BTN2,TRNS,TRNS,TRNS),
};


/*
 * Fn action definition
 */
const action_t PROGMEM fn_actions[] = {
    [0]  = ACTION_LAYER_TAP_KEY(10, KC_SPACE),
    [1]  = ACTION_LAYER_MOMENTARY(11),
    [10] = ACTION_MODS_ONESHOT(MOD_LSFT)
};

// const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
// {
//     switch (id) {
//         case 1:
//             return (record->event.pressed ?
//                     MACRO( D(LCTL), D(SPC), END ) :
//                     MACRO( U(SPC), END ) );
//         case 2:
//             return (record->event.pressed ?
//                     MACRO( D(LSFT), D(GRV), END ) :
//                     MACRO( U(GRV), END ) );
//     }
//     return MACRO_NONE;
// }
