#include QMK_KEYBOARD_H

smtd_resolution on_smtd_action(uint16_t keycode, smtd_action action, uint8_t tap_count) {
    switch (keycode) {
        SMTD_MT(KC_N, KC_LEFT_GUI)
        SMTD_MT(KC_R, KC_LEFT_ALT)
        SMTD_MT(KC_T, KC_LEFT_CTRL)
        SMTD_MT(KC_S, KC_LSFT)
    }

    return SMTD_RESOLUTION_UNHANDLED;
};
