#include QMK_KEYBOARD_H

extern MidiDevice midi_device;

enum custom_keycodes {
  UP_URL = SAFE_RANGE
};


enum control_change_keycodes {
    MI_CC_1 = SAFE_RANGE,
    MI_CC_2
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    LAYOUT_ortho_4x4(
        MI_TRNSD, MI_TRNSU,   MI_OCTD,   MI_OCTU,
        MI_B, MI_Bb,   MI_A,   MI_Ab,
        MI_G, MI_Gb,   MI_F,   MI_E,
        MI_Eb, MI_D, MI_Db, MI_C
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MI_CC_1:
      		if (record->event.pressed) {
        		midi_send_cc(&midi_device, 0, 0x0E, 127);
      		} else {
        		midi_send_cc(&midi_device, 0, 0x0E, 0);
      		}
      		return false;
    	case MI_CC_2:
      		if (record->event.pressed) {
        		midi_send_cc(&midi_device, 0, 0x10, 127);
      		} else {
        		midi_send_cc(&midi_device, 0, 0x10, 0);
      		}
      		return false;
    }
    return true;
}

#ifdef ENCODER_ENABLE
#include "encoder.h"
bool encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) { /* First encoder */
    if (clockwise) {
      tap_code(KC_VOLU);
    } else {
      tap_code(KC_VOLD);
    }
  }
  return true;
}
#endif
