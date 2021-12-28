#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
		KC_TAB, KC_1, KC_2, KC_3, KC_4, KC_ESC,
		KC_GRV, KC_Q, KC_W, KC_E, KC_R,
		KC_LCTL, KC_A, KC_S, KC_D, KC_F,
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V,
		MO(1),  KC_DEL, KC_SPACE),

    [1] = LAYOUT(
		KC_B, KC_N, KC_Y, KC_H, KC_U, KC_TRNS,
		KC_M, KC_TRNS, KC_UP, KC_TRNS, KC_TRNS,
		KC_J, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS,
		KC_P, KC_MPRV, KC_MNXT, KC_MPLY, KC_TRNS,
		KC_TRNS,  KC_TRNS, KC_TRNS),
};