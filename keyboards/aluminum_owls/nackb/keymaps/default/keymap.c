// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define BSE     0
#define SYM     1
#define NVM     2
#define FN      3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BSE] = LAYOUT(
        KC_ESC,         KC_Q,           KC_W,       KC_F,       KC_P,       KC_B,
        KC_TAB,         KC_A,           KC_R,       KC_S,       KC_T,       KC_G,
        KC_LCTL,        ALT_T(KC_Z),    KC_X,       KC_C,       KC_D,       KC_V,
                                                                KC_BSPC,    OSL(SYM),   OS_LSFT,

                        KC_J,           KC_L,       KC_U,       KC_Y,       KC_0,       KC_HOME,
                        KC_M,           KC_N,       KC_E,       KC_I,       KC_O,       KC_ENT,
                        KC_K,           KC_H,       KC_COMM,    KC_DOT,     KC_QUOT,    OSL(FN),
        OSL(NVM),       KC_SPC,         KC_DEL

    ),

    [SYM] = LAYOUT(
        TG(SYM),        KC_GRV,         KC_LT,      KC_GT,      KC_MINS,    KC_PIPE,
        KC_TRNS,        KC_EXLM,        KC_ASTR,    KC_SLSH,    KC_EQL,     KC_AMPR,
        KC_TRNS,        KC_TILD,        KC_PLUS,    KC_LBRC,    KC_RBRC,    KC_PERC,
                                                                KC_TRNS,    KC_TRNS,    KC_TRNS,

                        KC_CIRC,        KC_LCBR,    KC_RCBR,    KC_DLR,     KC_BSLS,    KC_TRNS,
                        KC_HASH,        KC_LPRN,    KC_RPRN,    KC_SCLN,    KC_DQUO,    KC_TRNS,
                        KC_AT,          KC_COLN,    KC_COMM,    KC_DOT,     KC_QUES,    KC_TRNS,
        KC_TRNS,        KC_UNDS,        KC_TRNS

    ),

    [NVM] = LAYOUT(
        TG(NVM),        KC_1,           KC_2,       KC_3,       KC_4,       KC_5,
        KC_TRNS,        KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,        KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
                                                                KC_TRNS,    KC_TRNS,    KC_TRNS,

                        KC_6,           KC_7,       KC_8,       KC_9,       KC_0,       KC_TRNS,
                        KC_PGDN,        KC_UP,      KC_PGUP,    KC_TRNS,    KC_LCMD,    KC_TRNS,
                        KC_LEFT,        KC_DOWN,    KC_RGHT,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,        KC_TRNS,        KC_TRNS

    ),

    [FN] = LAYOUT(
        TG(FN),         KC_F1,          KC_F2,      KC_F3,      KC_F4,      KC_F5,
        KC_TRNS,        KC_F11,         KC_F12,     KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,        KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
                                                                KC_TRNS,    KC_TRNS,    KC_TRNS,

                        KC_F6,          KC_F7,      KC_F8,      KC_F9,      KC_F10,     QK_RBT,
                        KC_TRNS,        KC_TRNS,    KC_MUTE,    KC_VOLD,    KC_VOLU,    KC_TRNS,
                        KC_TRNS,        KC_TRNS,    KC_MPLY,    KC_MPRV,    KC_MNXT,    KC_TRNS,
        KC_TRNS,        KC_TRNS,        KC_TRNS

    )

};
