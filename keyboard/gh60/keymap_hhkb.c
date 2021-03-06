#include "keymap_common.h"

/*
 * HHKB Layout
 */
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: Default layer
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Bspc |
     * |-----------------------------------------------------------|
     * |Ctrl  |  A|  S|  D|  F|  G|  H|  J|  K|  L|Fn3|  '|Return  |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Fn |
     * |-----------------------------------------------------------|
     * |    |Gui |Alt |      Space             |    |Alt |Gui |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP_HHKB(
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS, GRV, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC,      \
        LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,       \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RSFT,FN0,       \
        FN2 ,LALT,LGUI,          SPC,                     RGUI,RALT,FN1, FN15),
    /* 1: HHKB Fn layer
     * ,-----------------------------------------------------------.
     * |Pwr| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |   |PRV|PLY|NXT|   |   |   |Psc|Slk|Pus|Up |   |     |
     * |-----------------------------------------------------------|
     * |      |VoD|VoU|Mut|Ejc|   |  *|  /|Hom|PgU|Lef|Rig|Enter   |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |  +|  -|End|PgD|Dow|      |   |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP_HHKB(
        PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL,  \
        CAPS,TRNS,MPRV,MPLY,MNXT,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS,UP,  TRNS,TRNS,      \
        TRNS,VOLD,VOLU,MUTE,EJCT,TRNS,PAST,PSLS,HOME,PGUP,LEFT,RGHT,     PENT,      \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PPLS,PMNS,END, PGDN,DOWN,     TRNS,TRNS,      \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),
    /* 2: HHKB FN1 layer Mouse
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
     * |-----------------------------------------------------------|
     * |     |   |   |MsU|   |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |Bn1|MsL|MsD|MsR|Bn2|   |   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |WhU|WhD|   |   |   |   |   |   |      |   |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP_HHKB(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  \
        TRNS,TRNS,TRNS,MS_U,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,      \
        TRNS,BTN1,MS_L,MS_D,MS_R,BTN2,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,      \
        TRNS,TRNS,TRNS,WH_D,WH_U,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,      \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),
    /* 3: HHKB FN2 layer Idea
     * ,-----------------------------------------------------------.
     * |  |FN11|FN3|   |   |   |FN14|FN4|FN12|FN5|FN6|  |FN13|  |  |
     * |-----------------------------------------------------------|
     * |     |   |FN7|END|   |   |   |   |   |   | Up|FN8|FN9|     |
     * |-----------------------------------------------------------|
     * |      |Hom|   |   |Rig|   |   |   |   |FN10|   |   |       |
     * |-----------------------------------------------------------|
     * |        |   |   |PgU|PgD|Lef|Dow|   |   |   |   |      |   |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP_HHKB(
        TRNS,FN11,FN3, TRNS,TRNS,TRNS,FN14,FN4, FN12,FN5, FN6, TRNS,FN13,TRNS,TRNS,  \
        TRNS,TRNS,FN7, END, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,UP,  FN8, FN9, TRNS,      \
        TRNS,HOME,TRNS,TRNS,RGHT,TRNS,TRNS,TRNS,TRNS,FN10,TRNS,TRNS,     TRNS,      \
        TRNS,TRNS,TRNS,PGUP,PGDN,LEFT,DOWN,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,      \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),
};

/*
 * Fn action definition
 */
const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
    [1] = ACTION_LAYER_MOMENTARY(2),
    [2] = ACTION_LAYER_MOMENTARY(3),
    [3] = ACTION_MODS_KEY(MOD_LCTL, KC_F2),
    [4] = ACTION_MODS_KEY(MOD_LALT, KC_F7),
    [5] = ACTION_MODS_KEY(MOD_LSFT, KC_F9),
    [6] = ACTION_MODS_KEY(MOD_LSFT, KC_F10),
    [7] = ACTION_MODS_KEY(MOD_LGUI, KC_F4),
    [8] = ACTION_MODS_KEY(MOD_LGUI | MOD_LALT, KC_LEFT),
    [9] = ACTION_MODS_KEY(MOD_LGUI | MOD_LALT, KC_RGHT),
    [10] = ACTION_MODS_KEY(MOD_LGUI | MOD_LCTL, KC_L),
    [11] = ACTION_MODS_KEY(MOD_LALT, KC_F1),
    [12] = ACTION_MODS_KEY(MOD_LGUI, KC_F8),
    [13] = ACTION_MODS_KEY(MOD_LGUI, KC_F12),
    [14] = ACTION_MODS_KEY(MOD_LSFT, KC_F6),
    [15] = ACTION_MODS(MOD_LGUI | MOD_LALT | MOD_LCTL),
    // [16] = ACTION_BACKLIGHT_TOGGLE(),
    // [17] = ACTION_BACKLIGHT_INCREASE(),
    // [18] = ACTION_BACKLIGHT_DECREASE(),
};
