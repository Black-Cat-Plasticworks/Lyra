#include QMK_KEYBOARD_H
#include <stdio.h>
char wpm_str[10];
//
// Keymaps
//

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // Layer 0
    [0] = LAYOUT(
    KC_ESC,		KC_1,		KC_2,		KC_3,				KC_4,		KC_5,		KC_6,				KC_7,		KC_8,		KC_9,		KC_0,		KC_MINS,		KC_EQL,			KC_BSPC,
    KC_TAB,		KC_LBRC,	KC_Q,		KC_W,				KC_E,		KC_R,		KC_T,				KC_Y,		KC_U,       KC_I,		KC_O,		KC_P,			KC_NUHS,		KC_DEL,			
    KC_CLCK,	KC_RBRC,	KC_A,		KC_S,				KC_D,		KC_F,		KC_G,				KC_H,		KC_J,       KC_K,		KC_L,		KC_SCLN,		KC_QUOT,		KC_ENT,
    KC_LSFT,	KC_NUBS,	KC_Z,		KC_X,       		KC_C,       KC_V,       KC_B,            	KC_N,		KC_M,		KC_COMM,	KC_DOT,		KC_SLSH,		KC_UP,			KC_RSFT,
    KC_LCTL,	KC_LGUI,	KC_LALT,	TT(1),				KC_APP,		KC_PGDN,	KC_SPC,				KC_SPC,		KC_PGUP,	KC_RALT,	KC_RCTL,	KC_LEFT,		KC_DOWN,		KC_RGHT					
    ),

    // Layer 1
    [1] = LAYOUT(
    KC_TRNS,		KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,		KC_F6,				KC_F7,      KC_F8,      KC_F9,		KC_F10,     KC_F11,			KC_F12,			KC_TRNS,
    KC_TRNS,		KC_TRNS,    KC_TRNS,	KC_TRNS,    KC_TRNS,    KC_TRNS,	KC_TRNS,			KC_TRNS,    KC_TRNS,    KC_TRNS,	KC_TRNS,    KC_TRNS,		KC_TRNS,		KC_TRNS,
    KC_TRNS,		KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,	KC_TRNS,			KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,		KC_TRNS,		KC_TRNS,
    KC_TRNS,		KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,			KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,		KC_TRNS,		KC_TRNS,
    KC_TRNS,		KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_VOLD,	KC_TRNS,			KC_TRNS,	KC_VOLU,	KC_TRNS,	KC_TRNS,	KC_TRNS,		KC_TRNS,		KC_TRNS	
    ),
	    // Layer 2
    [2] = LAYOUT(
    KC_TRNS,		KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,		KC_F6,				KC_F7,      KC_F8,      KC_F9,		KC_F10,     KC_F11,			KC_F12,			KC_TRNS,
    KC_TRNS,		KC_TRNS,    KC_TRNS,	KC_TRNS,    KC_TRNS,    KC_TRNS,	KC_TRNS,			KC_TRNS,    KC_TRNS,    KC_TRNS,	KC_TRNS,    KC_TRNS,		KC_TRNS,		KC_TRNS,
    KC_TRNS,		KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,	KC_TRNS,			KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,		KC_TRNS,		KC_TRNS,
    KC_TRNS,		KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,			KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,		KC_TRNS,		KC_TRNS,
    KC_TRNS,		KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_VOLD,	KC_TRNS,			KC_TRNS,	KC_VOLU,	KC_TRNS,	KC_TRNS,	KC_TRNS,		KC_TRNS,		KC_TRNS	
    ),
	    // Layer 3
    [3] = LAYOUT(
    KC_TRNS,		KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,		KC_F6,				KC_F7,      KC_F8,      KC_F9,		KC_F10,     KC_F11,			KC_F12,			KC_TRNS,
    KC_TRNS,		KC_TRNS,    KC_TRNS,	KC_TRNS,    KC_TRNS,    KC_TRNS,	KC_TRNS,			KC_TRNS,    KC_TRNS,    KC_TRNS,	KC_TRNS,    KC_TRNS,		KC_TRNS,		KC_TRNS,
    KC_TRNS,		KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,	KC_TRNS,			KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,		KC_TRNS,		KC_TRNS,
    KC_TRNS,		KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,			KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,		KC_TRNS,		KC_TRNS,
    KC_TRNS,		KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_VOLD,	KC_TRNS,			KC_TRNS,	KC_VOLU,	KC_TRNS,	KC_TRNS,	KC_TRNS,		KC_TRNS,		KC_TRNS	
    ),
	    // Layer 4
    [4] = LAYOUT(
    KC_TRNS,		KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,		KC_F6,				KC_F7,      KC_F8,      KC_F9,		KC_F10,     KC_F11,			KC_F12,			KC_TRNS,
    KC_TRNS,		KC_TRNS,    KC_TRNS,	KC_TRNS,    KC_TRNS,    KC_TRNS,	KC_TRNS,			KC_TRNS,    KC_TRNS,    KC_TRNS,	KC_TRNS,    KC_TRNS,		KC_TRNS,		KC_TRNS,
    KC_TRNS,		KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,	KC_TRNS,			KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,		KC_TRNS,		KC_TRNS,
    KC_TRNS,		KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,			KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,		KC_TRNS,		KC_TRNS,
    KC_TRNS,		KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_VOLD,	KC_TRNS,			KC_TRNS,	KC_VOLU,	KC_TRNS,	KC_TRNS,	KC_TRNS,		KC_TRNS,		KC_TRNS	
    ),
	    // Layer 5
    [5] = LAYOUT(
    KC_TRNS,		KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,		KC_F6,				KC_F7,      KC_F8,      KC_F9,		KC_F10,     KC_F11,			KC_F12,			KC_TRNS,
    KC_TRNS,		KC_TRNS,    KC_TRNS,	KC_TRNS,    KC_TRNS,    KC_TRNS,	KC_TRNS,			KC_TRNS,    KC_TRNS,    KC_TRNS,	KC_TRNS,    KC_TRNS,		KC_TRNS,		KC_TRNS,
    KC_TRNS,		KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,	KC_TRNS,			KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,		KC_TRNS,		KC_TRNS,
    KC_TRNS,		KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,			KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,		KC_TRNS,		KC_TRNS,
    KC_TRNS,		KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_VOLD,	KC_TRNS,			KC_TRNS,	KC_VOLU,	KC_TRNS,	KC_TRNS,	KC_TRNS,		KC_TRNS,		KC_TRNS	
    ),
	    // Layer 6
    [6] = LAYOUT(
    KC_TRNS,		KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,		KC_F6,				KC_F7,      KC_F8,      KC_F9,		KC_F10,     KC_F11,			KC_F12,			KC_TRNS,
    KC_TRNS,		KC_TRNS,    KC_TRNS,	KC_TRNS,    KC_TRNS,    KC_TRNS,	KC_TRNS,			KC_TRNS,    KC_TRNS,    KC_TRNS,	KC_TRNS,    KC_TRNS,		KC_TRNS,		KC_TRNS,
    KC_TRNS,		KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,	KC_TRNS,			KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,		KC_TRNS,		KC_TRNS,
    KC_TRNS,		KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,			KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,		KC_TRNS,		KC_TRNS,
    KC_TRNS,		KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_VOLD,	KC_TRNS,			KC_TRNS,	KC_VOLU,	KC_TRNS,	KC_TRNS,	KC_TRNS,		KC_TRNS,		KC_TRNS	
    ),
	    // Layer 7
    [7] = LAYOUT(
    KC_TRNS,		KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,		KC_F6,				KC_F7,      KC_F8,      KC_F9,		KC_F10,     KC_F11,			KC_F12,			KC_TRNS,
    KC_TRNS,		KC_TRNS,    KC_TRNS,	KC_TRNS,    KC_TRNS,    KC_TRNS,	KC_TRNS,			KC_TRNS,    KC_TRNS,    KC_TRNS,	KC_TRNS,    KC_TRNS,		KC_TRNS,		KC_TRNS,
    KC_TRNS,		KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,	KC_TRNS,			KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,		KC_TRNS,		KC_TRNS,
    KC_TRNS,		KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,			KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,		KC_TRNS,		KC_TRNS,
    KC_TRNS,		KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_VOLD,	KC_TRNS,			KC_TRNS,	KC_VOLU,	KC_TRNS,	KC_TRNS,	KC_TRNS,		KC_TRNS,		KC_TRNS	
    )

};

//
// Keyboard initialization
//
void keyboard_post_init_user(void) {
    // Wait for keyboard startup
    wait_ms(100);
}
#ifdef OLED_DRIVER_ENABLE

// 'lyralogooled', 32x128px

static void render_logo(void) {
static const char PROGMEM QMK_logo[] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xe0, 0x78, 0x18, 0x0c, 0x04, 0x06, 0x02, 
	0x02, 0x82, 0xc0, 0xf0, 0x38, 0x8c, 0xf2, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0xc0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x40, 0x40, 0x40, 0xc0, 0x80, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x80, 0x40, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x1f, 0x18, 0x30, 0x20, 0xa0, 0xe0, 0xf8, 
	0x3e, 0x1f, 0x13, 0x0c, 0x06, 0xc3, 0xf0, 0x60, 0x00, 0x80, 0xf0, 0xe0, 0x00, 0x38, 0xfe, 0x67, 
	0x7b, 0xa5, 0xf3, 0xf0, 0x70, 0x00, 0x00, 0x80, 0xc0, 0xc0, 0xe0, 0x70, 0x30, 0x20, 0x00, 0x00, 
	0x00, 0x80, 0x00, 0x00, 0x00, 0x7f, 0xc0, 0xdd, 0xdd, 0xdd, 0xe3, 0x7e, 0x3c, 0x3e, 0x61, 0xdf, 
	0xde, 0xde, 0x01, 0xff, 0xfe, 0x00, 0x80, 0x80, 0x80, 0xff, 0xc0, 0xdf, 0xdf, 0xdf, 0xe0, 0xff, 
	0x7f, 0x3c, 0x62, 0xdd, 0xdd, 0xdd, 0xe3, 0x7e, 0x3c, 0xfe, 0xc1, 0xfd, 0x7d, 0xc3, 0xfd, 0x7d, 
	0xc3, 0xfe, 0xfc, 0x30, 0xea, 0xd5, 0xd5, 0xd5, 0xc3, 0xff, 0xfe, 0x7e, 0xc1, 0xfd, 0x7d, 0x7d, 
	0xc3, 0xfe, 0xfc, 0x3f, 0xe1, 0xff, 0xff, 0x3c, 0x62, 0xdd, 0xdd, 0xdd, 0xf7, 0xe6, 0x00, 0x00, 
	0x00, 0x78, 0xc4, 0xc2, 0x82, 0x82, 0x82, 0x82, 0xc2, 0xe4, 0x74, 0x7c, 0x3f, 0x1f, 0x31, 0x60, 
	0xe0, 0xc0, 0x80, 0x9c, 0xbf, 0xe7, 0xf1, 0x78, 0x3e, 0x1f, 0x0b, 0x04, 0x02, 0x01, 0x00, 0x1c, 
	0x3e, 0x2f, 0x13, 0x10, 0x0c, 0x1e, 0x3f, 0x2f, 0x13, 0x09, 0x1c, 0x3e, 0x2f, 0x10, 0x08, 0x06, 
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x06, 
	0x06, 0x06, 0x07, 0x03, 0x7f, 0xc1, 0xbe, 0xbe, 0xbe, 0xa6, 0xe7, 0xc7, 0x60, 0xd4, 0xaa, 0xaa, 
	0xaa, 0x86, 0xfe, 0xfc, 0x7f, 0xc0, 0xff, 0xff, 0x7f, 0xc0, 0xff, 0xff, 0xc4, 0xaa, 0xaa, 0xaa, 
	0xa6, 0xfc, 0xf8, 0xff, 0x02, 0xff, 0xff, 0x60, 0xd4, 0xaa, 0xaa, 0xaa, 0x86, 0xfe, 0xfc, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x28, 0x24, 
	0x32, 0x1b, 0x1f, 0x0f, 0x0f, 0x1f, 0x1f, 0x3c, 0x38, 0x38, 0x78, 0x70, 0x70, 0x70, 0x30, 0x38, 
	0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x07, 0x0d, 0x0e, 0x07, 0x03, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
  };

  oled_write_raw_P(QMK_logo, sizeof(QMK_logo));
}
static void render_status(void) {
    oled_write_P(PSTR("      "), false);
    sprintf(wpm_str, "%03d", get_current_wpm());
    oled_write(wpm_str, false);
    oled_write_P(PSTR("   WPM"), false);
    oled_write_P(PSTR("\n\n"), false);
    led_t led_usb_state = host_keyboard_led_state();
    oled_write_ln_P(PSTR("CPSLK"), led_usb_state.caps_lock);
	oled_write_P(PSTR("\n\n"), false);
	oled_write_P(PSTR("Lyra\n"), false);
	oled_write_P(PSTR("v1.0\n"), false);
	oled_write_P(PSTR("by\n"), false);
	oled_write_P(PSTR("Dom C"), false);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    }
    return rotation;
}

void oled_task_user(void) {
    if (is_keyboard_master()) {
        render_status();
    } else {
        render_logo();
    }
}

#endif
