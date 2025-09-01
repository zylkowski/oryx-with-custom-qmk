#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
  DANCE_8,
  DANCE_9,
  DANCE_10,
  DANCE_11,
  DANCE_12,
  DANCE_13,
  DANCE_14,
  DANCE_15,
  DANCE_16,
  DANCE_17,
};

#define DUAL_FUNC_0 LT(14, KC_Q)
#define DUAL_FUNC_1 LT(6, KC_0)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    DUAL_FUNC_0,    TD(DANCE_0),    TD(DANCE_1),    TD(DANCE_2),    TD(DANCE_3),    TD(DANCE_4),                                    KC_F1,          KC_F2,          KC_F3,          KC_F10,         KC_F11,         KC_F12,         
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT, 
    KC_BSPC,        KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_LEFT_SHIFT,  MT(MOD_LALT, KC_Z),KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RIGHT_SHIFT, 
                                                    KC_SPACE,       KC_LEFT_CTRL,                                   MO(1),          KC_RIGHT_ALT
  ),
  [1] = LAYOUT_voyager(
    KC_COMMA,       KC_DOT,         KC_TRANSPARENT, KC_NO,          KC_NO,          KC_CAPS,                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          MO(8),          
    KC_0,           KC_7,           KC_8,           KC_9,           KC_LBRC,        KC_RBRC,                                        KC_GRAVE,       KC_MINUS,       KC_EQUAL,       KC_BSLS,        ST_MACRO_0,     MO(7),          
    KC_TRANSPARENT, KC_4,           KC_5,           KC_6,           KC_LPRN,        KC_RPRN,                                        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       ST_MACRO_1,     KC_APPLICATION, 
    MO(3),          KC_1,           KC_2,           KC_3,           KC_LCBR,        KC_RCBR,                                        KC_HOME,        ST_MACRO_2,     ST_MACRO_3,     KC_END,         KC_LEFT_ALT,    MO(3),          
                                                    KC_UNDS,        KC_TRANSPARENT,                                 TO(0),          KC_RIGHT_ALT
  ),
  [2] = LAYOUT_voyager(
    LSFT(KC_ESCAPE),KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_LEFT_SHIFT,                                  KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          LSFT(KC_Q),     LSFT(KC_W),     LSFT(KC_E),     LSFT(KC_R),     LSFT(KC_T),                                     LSFT(KC_Y),     LSFT(KC_U),     LSFT(KC_I),     LSFT(KC_O),     LSFT(KC_P),     LSFT(KC_BSLS),  
    KC_DELETE,      LSFT(KC_A),     LSFT(KC_S),     LSFT(KC_D),     LSFT(KC_F),     LSFT(KC_G),                                     LSFT(KC_H),     LSFT(KC_J),     LSFT(KC_K),     LSFT(KC_L),     LSFT(KC_SCLN),  LSFT(KC_QUOTE), 
    LSFT(KC_ENTER), LSFT(KC_Z),     LSFT(KC_X),     LSFT(KC_C),     LSFT(KC_V),     LSFT(KC_B),                                     LSFT(KC_N),     LSFT(KC_M),     LSFT(KC_COMMA), LSFT(KC_DOT),   LSFT(KC_SLASH), KC_ENTER,       
                                                    TD(DANCE_5),    KC_TRANSPARENT,                                 MO(3),          MO(5)
  ),
  [3] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          LSFT(KC_7),     LSFT(KC_8),     LSFT(KC_9),     KC_NO,          KC_NO,                                          ST_MACRO_4,     LSFT(KC_MINUS), LSFT(KC_EQUAL), LSFT(KC_BSLS),  KC_NO,          KC_NO,          
    KC_NO,          LSFT(KC_4),     LSFT(KC_5),     LSFT(KC_6),     KC_NO,          KC_NO,                                          ST_MACRO_5,     ST_MACRO_6,     ST_MACRO_7,     ST_MACRO_8,     KC_NO,          KC_NO,          
    KC_NO,          LSFT(KC_1),     LSFT(KC_2),     LSFT(KC_3),     KC_NO,          KC_NO,                                          KC_NO,          KC_PGDN,        KC_PAGE_UP,     KC_NO,          KC_TRANSPARENT, KC_NO,          
                                                    KC_NO,          KC_TRANSPARENT,                                 KC_NO,          MO(4)
  ),
  [4] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          RALT(KC_GRAVE), RALT(KC_MINUS), RALT(KC_EQUAL), KC_NO,          KC_NO,          KC_NO,          
    ST_MACRO_9,     RALT(KC_Q),     RALT(KC_W),     RALT(KC_E),     RALT(KC_R),     RALT(KC_T),                                     RALT(KC_Y),     RALT(KC_U),     RALT(KC_I),     RALT(KC_O),     RALT(KC_P),     RALT(KC_BSLS),  
    LALT(KC_BSPC),  RALT(KC_A),     RALT(KC_S),     RALT(KC_D),     RALT(KC_F),     RALT(KC_G),                                     RALT(KC_H),     RALT(KC_J),     RALT(KC_K),     RALT(KC_L),     RALT(KC_SCLN),  RALT(KC_QUOTE), 
    MO(5),          RALT(KC_Z),     RALT(KC_X),     RALT(KC_C),     RALT(KC_V),     RALT(KC_B),                                     RALT(KC_N),     RALT(KC_M),     RALT(KC_COMMA), RALT(KC_DOT),   RALT(KC_SLASH), MO(5),          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_NO,          KC_NO
  ),
  [5] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          RALT(LSFT(KC_GRAVE)),RALT(LSFT(KC_MINUS)),RALT(LSFT(KC_EQUAL)),KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          RALT(LSFT(KC_Q)),RALT(LSFT(KC_W)),RALT(LSFT(KC_E)),RALT(LSFT(KC_R)),RALT(LSFT(KC_T)),                                RALT(LSFT(KC_Y)),RALT(LSFT(KC_U)),RALT(LSFT(KC_I)),RALT(LSFT(KC_O)),RALT(LSFT(KC_P)),RALT(LSFT(KC_BSLS)),
    KC_NO,          RALT(LSFT(KC_A)),RALT(LSFT(KC_S)),RALT(LSFT(KC_D)),RALT(LSFT(KC_F)),RALT(LSFT(KC_G)),                                RALT(LSFT(KC_H)),RALT(LSFT(KC_J)),RALT(LSFT(KC_K)),RALT(LSFT(KC_L)),RALT(LSFT(KC_SCLN)),RALT(LSFT(KC_QUOTE)),
    KC_NO,          RALT(LSFT(KC_Z)),RALT(LSFT(KC_X)),RALT(LSFT(KC_C)),RALT(LSFT(KC_V)),RALT(LSFT(KC_B)),                                RALT(LSFT(KC_N)),RALT(LSFT(KC_M)),RALT(LSFT(KC_COMMA)),RALT(LSFT(KC_DOT)),RALT(LSFT(KC_SLASH)),KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_NO,          KC_NO
  ),
  [6] = LAYOUT_voyager(
    QK_BOOT,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_AUDIO_VOL_DOWN,KC_TRANSPARENT, KC_TRANSPARENT, RGB_MODE_FORWARD,KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 TO(0),          KC_TRANSPARENT
  ),
  [7] = LAYOUT_voyager(
    KC_ESCAPE,      KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_MS_WH_UP,    KC_MS_UP,       KC_MS_WH_DOWN,  KC_NO,          KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_ACCEL2,   KC_MS_ACCEL0,   KC_TRANSPARENT, 
    KC_NO,          KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_NO,          KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_MS_BTN2,     KC_NO,          KC_NO,          KC_NO,          DUAL_FUNC_1,    KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_MS_BTN1,     LALT(KC_M),                                     KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_voyager(
    KC_NO,          KC_F10,         KC_F11,         KC_F12,         KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_F7,          KC_F8,          KC_F9,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_F4,          KC_F5,          KC_F6,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_LEFT_SHIFT,  KC_F1,          KC_F2,          KC_F3,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_NO,          KC_TRANSPARENT,                                 KC_NO,          KC_NO
  ),
  [9] = LAYOUT_voyager(
    KC_ESCAPE,      TD(DANCE_6),    TD(DANCE_7),    TD(DANCE_8),    TD(DANCE_9),    TD(DANCE_10),                                   KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_F11,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BSLS,        
    KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_SHIFT,  MT(MOD_LALT, KC_Z),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_RIGHT_SHIFT, 
                                                    KC_SPACE,       TD(DANCE_11),                                   MO(10),         KC_RIGHT_ALT
  ),
  [10] = LAYOUT_voyager(
    KC_ESCAPE,      TD(DANCE_12),   TD(DANCE_13),   TD(DANCE_14),   TD(DANCE_15),   TD(DANCE_16),                                   KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_SHIFT,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_SPACE,       TD(DANCE_17),                                   KC_NO,          KC_NO
  ),
  [11] = LAYOUT_voyager(
    KC_TRANSPARENT, LALT(LSFT(KC_0)),KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          LALT(LSFT(KC_1)),RU_VE,          RU_E,           RU_ER,          RU_TE,                                          RU_YERU,        RU_U,           RU_I,           RU_O,           RU_PE,          KC_NO,          
    KC_BSPC,        RU_A,           RU_ES,          RU_DE,          RU_EF,          RU_GHE,                                         RU_HA,          RU_SHTI,        RU_KA,          RU_EL,          KC_NO,          KC_NO,          
    KC_LEFT_SHIFT,  RU_ZE,          RU_SHA,         RU_TSE,         RU_SOFT,        RU_BE,                                          RU_EN,          RU_EM,          RU_COMM,        RU_DOT,         RU_QUES,        KC_ENTER,       
                                                    KC_TRANSPARENT, KC_NO,                                          KC_NO,          MO(12)
  ),
  [12] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          RU_IE,          KC_NO,          KC_NO,                                          KC_NO,          RU_YU,          KC_NO,          RU_YO,          KC_NO,          KC_NO,          
    KC_NO,          RU_YA,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_LEFT_SHIFT,  RU_ZHE,         RU_SHCH,        RU_CHE,         RU_HARD,        KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_NO,          KC_NO,                                          KC_NO,          KC_NO
  ),
  [13] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


const uint16_t PROGMEM combo0[] = { KC_A, KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_R, KC_U, KC_T, KC_Y, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_Q, KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM combo3[] = { MT(MOD_LALT, KC_Z), KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM combo4[] = { RU_ER, RU_U, RU_TE, RU_YERU, COMBO_END};
const uint16_t PROGMEM combo5[] = { KC_3, KC_2, KC_1, COMBO_END};
const uint16_t PROGMEM combo6[] = { KC_F3, KC_F2, KC_F1, COMBO_END};
const uint16_t PROGMEM combo7[] = { ST_MACRO_3, ST_MACRO_2, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, TG(9)),
    COMBO(combo1, TO(11)),
    COMBO(combo2, KC_CALCULATOR),
    COMBO(combo3, TO(1)),
    COMBO(combo4, TO(0)),
    COMBO(combo5, TO(0)),
    COMBO(combo6, KC_TRANSPARENT),
    COMBO(combo7, ST_MACRO_10),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case DUAL_FUNC_0:
            return TAPPING_TERM -20;
        case TD(DANCE_1):
            return TAPPING_TERM -30;
        case MT(MOD_LALT, KC_Z):
            return TAPPING_TERM -40;
        case KC_X:
            return TAPPING_TERM -50;
        case KC_C:
            return TAPPING_TERM -50;
        case KC_SPACE:
            return TAPPING_TERM -50;
        case KC_LEFT_CTRL:
            return TAPPING_TERM -60;
        case KC_QUOTE:
            return TAPPING_TERM -40;
        case KC_SLASH:
            return TAPPING_TERM -50;
        case KC_TRANSPARENT:
            return TAPPING_TERM + 100;
        case KC_0:
            return TAPPING_TERM -30;
        case KC_7:
            return TAPPING_TERM -30;
        case KC_8:
            return TAPPING_TERM -30;
        case KC_9:
            return TAPPING_TERM -30;
        case KC_LBRC:
            return TAPPING_TERM -30;
        case KC_RBRC:
            return TAPPING_TERM -30;
        case KC_4:
            return TAPPING_TERM -30;
        case KC_5:
            return TAPPING_TERM -30;
        case KC_6:
            return TAPPING_TERM -30;
        case KC_1:
            return TAPPING_TERM -30;
        case KC_2:
            return TAPPING_TERM -30;
        case KC_3:
            return TAPPING_TERM -40;
        case KC_UNDS:
            return TAPPING_TERM -30;
        case TD(DANCE_5):
            return TAPPING_TERM -20;
        case LSFT(KC_QUOTE):
            return TAPPING_TERM -40;
        case LSFT(KC_7):
            return TAPPING_TERM -30;
        case LSFT(KC_8):
            return TAPPING_TERM -30;
        case LSFT(KC_9):
            return TAPPING_TERM -30;
        case LSFT(KC_4):
            return TAPPING_TERM -30;
        case LSFT(KC_5):
            return TAPPING_TERM -30;
        case LSFT(KC_6):
            return TAPPING_TERM -30;
        case LSFT(KC_1):
            return TAPPING_TERM -30;
        case LSFT(KC_2):
            return TAPPING_TERM -30;
        case LSFT(KC_3):
            return TAPPING_TERM -40;
        case TD(DANCE_6):
            return TAPPING_TERM -50;
        case TD(DANCE_7):
            return TAPPING_TERM -50;
        case TD(DANCE_8):
            return TAPPING_TERM -50;
        case TD(DANCE_9):
            return TAPPING_TERM -50;
        case TD(DANCE_10):
            return TAPPING_TERM -50;
        case TD(DANCE_11):
            return TAPPING_TERM -60;
        case TD(DANCE_12):
            return TAPPING_TERM -50;
        case TD(DANCE_13):
            return TAPPING_TERM -50;
        case TD(DANCE_14):
            return TAPPING_TERM -50;
        case TD(DANCE_15):
            return TAPPING_TERM -50;
        case TD(DANCE_16):
            return TAPPING_TERM -50;
        case TD(DANCE_17):
            return TAPPING_TERM -60;
        default:
            return TAPPING_TERM;
    }
}


extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,255,255}, {33,118,221}, {78,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {33,118,221}, {33,118,221}, {33,118,221}, {33,118,221}, {33,118,221}, {33,118,221}, {0,255,255}, {33,118,221}, {33,118,221}, {33,118,221}, {33,118,221}, {33,118,221}, {175,255,255}, {33,118,221}, {33,118,221}, {33,118,221}, {33,118,221}, {33,118,221}, {33,118,221}, {33,118,221}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {33,118,221}, {33,118,221}, {33,118,221}, {33,118,221}, {33,118,221}, {117,148,253}, {33,118,221}, {33,118,221}, {33,118,221}, {33,142,255}, {33,118,221}, {33,118,221}, {33,118,221}, {33,118,221}, {33,118,221}, {33,118,221}, {33,118,221}, {175,255,255}, {121,210,251}, {61,255,255} },

    [1] = { {121,210,251}, {121,210,251}, {78,255,255}, {0,0,0}, {0,0,0}, {22,255,255}, {121,210,251}, {121,210,251}, {121,210,251}, {121,210,251}, {47,241,246}, {47,239,177}, {0,255,255}, {121,210,251}, {121,210,251}, {121,210,251}, {47,241,246}, {47,239,177}, {175,255,255}, {121,210,251}, {121,210,251}, {121,210,251}, {47,241,246}, {47,239,177}, {33,142,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {22,255,255}, {47,239,177}, {47,239,177}, {47,239,177}, {47,239,177}, {47,239,177}, {193,255,166}, {208,148,255}, {208,148,255}, {208,148,255}, {208,148,255}, {47,239,177}, {22,255,255}, {208,237,255}, {208,148,255}, {208,148,255}, {208,237,255}, {61,255,255}, {175,255,255}, {0,0,0}, {61,255,255} },

    [2] = { {238,151,248}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {175,255,255}, {0,0,0}, {175,139,255}, {175,139,255}, {175,139,255}, {175,139,255}, {175,139,255}, {19,222,255}, {175,139,255}, {175,139,255}, {175,139,255}, {175,139,255}, {175,139,255}, {110,212,246}, {175,139,255}, {175,139,255}, {175,139,255}, {175,139,255}, {175,139,255}, {0,255,255}, {33,142,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {175,139,255}, {175,139,255}, {175,139,255}, {175,139,255}, {175,139,255}, {175,139,255}, {175,139,255}, {175,139,255}, {175,139,255}, {175,139,255}, {175,139,255}, {175,139,255}, {175,139,255}, {175,139,255}, {175,139,255}, {175,139,255}, {175,139,255}, {78,255,255}, {175,255,255}, {61,255,255} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {154,214,200}, {154,214,200}, {154,214,200}, {0,0,0}, {0,0,0}, {0,0,0}, {154,214,200}, {154,214,200}, {154,214,200}, {0,0,0}, {0,0,0}, {0,0,0}, {154,214,200}, {154,214,200}, {154,214,200}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {175,139,255}, {175,139,255}, {175,139,255}, {175,139,255}, {0,0,0}, {0,0,0}, {175,139,255}, {175,139,255}, {175,139,255}, {175,139,255}, {0,0,0}, {0,0,0}, {0,0,0}, {175,139,255}, {175,139,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {61,255,255} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {61,209,240}, {61,209,240}, {61,209,240}, {61,209,240}, {61,209,240}, {61,209,240}, {61,209,240}, {61,209,240}, {61,209,240}, {61,209,240}, {61,209,240}, {61,209,240}, {147,196,252}, {61,209,240}, {61,209,240}, {61,209,240}, {61,209,240}, {61,209,240}, {0,0,0}, {0,0,0}, {61,209,240}, {61,209,240}, {61,209,240}, {0,0,0}, {0,0,0}, {0,0,0}, {61,209,240}, {61,209,240}, {61,209,240}, {61,209,240}, {61,209,240}, {61,209,240}, {61,151,240}, {61,209,240}, {61,209,240}, {61,209,240}, {61,209,240}, {61,209,240}, {61,209,240}, {61,209,240}, {61,209,240}, {61,209,240}, {61,209,240}, {147,196,252}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {122,196,252}, {122,196,252}, {122,196,252}, {122,196,252}, {122,196,252}, {0,0,0}, {122,196,252}, {122,196,252}, {122,196,252}, {122,196,252}, {122,196,252}, {0,0,0}, {122,196,252}, {122,196,252}, {122,196,252}, {122,196,252}, {122,196,252}, {0,0,0}, {0,0,0}, {122,196,252}, {122,196,252}, {122,196,252}, {0,0,0}, {0,0,0}, {0,0,0}, {122,196,252}, {122,196,252}, {122,196,252}, {122,196,252}, {122,196,252}, {122,196,252}, {122,196,252}, {122,196,252}, {122,196,252}, {122,196,252}, {122,196,252}, {122,196,252}, {122,196,252}, {122,196,252}, {122,196,252}, {122,196,252}, {122,196,252}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255}, {3,168,255} },

    [7] = { {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {193,255,166}, {193,255,166}, {193,255,166}, {0,0,0}, {0,0,0}, {0,0,0}, {193,255,166}, {193,255,166}, {193,255,166}, {0,0,0}, {0,0,0}, {193,255,166}, {0,0,0}, {0,0,0}, {0,0,0}, {193,255,166}, {0,0,0}, {193,255,166}, {193,255,166}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {193,255,166}, {193,255,166}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [8] = { {0,0,0}, {22,255,255}, {22,255,255}, {22,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {22,255,255}, {22,255,255}, {22,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {22,255,255}, {22,255,255}, {22,255,255}, {0,0,0}, {0,0,0}, {175,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [9] = { {0,245,245}, {122,68,255}, {122,68,255}, {122,68,255}, {122,68,255}, {122,68,255}, {237,71,255}, {237,71,255}, {237,71,255}, {237,71,255}, {237,71,255}, {237,71,255}, {237,71,255}, {237,71,255}, {237,71,255}, {237,71,255}, {237,71,255}, {237,71,255}, {175,255,255}, {237,71,255}, {237,71,255}, {237,71,255}, {237,71,255}, {237,71,255}, {237,71,255}, {237,71,255}, {122,68,255}, {122,68,255}, {122,68,255}, {122,68,255}, {122,68,255}, {122,68,255}, {237,71,255}, {237,71,255}, {237,71,255}, {237,71,255}, {237,71,255}, {237,71,255}, {237,71,255}, {237,71,255}, {237,71,255}, {237,71,255}, {237,71,255}, {237,71,255}, {237,71,255}, {237,71,255}, {237,71,255}, {237,71,255}, {237,71,255}, {175,255,255}, {237,71,255}, {61,255,255} },

    [10] = { {0,245,245}, {121,210,251}, {121,210,251}, {121,210,251}, {121,210,251}, {121,210,251}, {237,115,239}, {237,115,239}, {237,115,239}, {237,115,239}, {237,115,239}, {237,115,239}, {237,115,239}, {237,115,239}, {237,115,239}, {237,115,239}, {237,115,239}, {237,115,239}, {237,115,239}, {237,115,239}, {237,115,239}, {237,115,239}, {237,115,239}, {237,115,239}, {237,115,239}, {237,115,239}, {121,210,251}, {121,210,251}, {121,210,251}, {121,210,251}, {121,210,251}, {237,115,239}, {237,115,239}, {237,115,239}, {237,115,239}, {237,115,239}, {237,115,239}, {237,115,239}, {0,216,255}, {0,216,255}, {0,216,255}, {0,216,255}, {237,115,239}, {237,115,239}, {237,115,239}, {237,115,239}, {237,115,239}, {237,115,239}, {237,115,239}, {237,115,239}, {237,115,239}, {237,115,239} },

    [11] = { {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {171,255,255}, {171,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {171,255,255}, {171,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {171,255,255}, {171,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {171,255,255}, {171,255,255}, {171,255,255}, {171,255,255}, {171,255,255}, {171,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {171,255,255}, {171,255,255}, {0,0,255}, {0,255,255}, {0,255,255}, {0,255,255}, {171,255,255}, {171,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {171,255,255}, {171,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {171,255,255}, {171,255,255} },

    [12] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [13] = { {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {155,93,246}, {155,93,246}, {155,93,246}, {155,93,246}, {155,93,246}, {156,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {155,93,246}, {155,93,246}, {155,93,246}, {155,93,246}, {155,93,246}, {156,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {156,255,255}, {156,255,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
      case 5:
        set_layer_color(5);
        break;
      case 6:
        set_layer_color(6);
        break;
      case 7:
        set_layer_color(7);
        break;
      case 8:
        set_layer_color(8);
        break;
      case 9:
        set_layer_color(9);
        break;
      case 10:
        set_layer_color(10);
        break;
      case 11:
        set_layer_color(11);
        break;
      case 12:
        set_layer_color(12);
        break;
      case 13:
        set_layer_color(13);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}

extern bool set_scrolling;
extern bool navigator_turbo;
extern bool navigator_aim;


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[18];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_1);
        tap_code16(KC_1);
        tap_code16(KC_1);
    }
    if(state->count > 3) {
        tap_code16(KC_1);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_1); break;
        case DOUBLE_TAP: register_code16(KC_F1); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_1); register_code16(KC_1);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_1); break;
        case DOUBLE_TAP: unregister_code16(KC_F1); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_1); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_2);
        tap_code16(KC_2);
        tap_code16(KC_2);
    }
    if(state->count > 3) {
        tap_code16(KC_2);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_2); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_GUI); break;
        case DOUBLE_TAP: register_code16(KC_F2); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_2); register_code16(KC_2);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_2); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_GUI); break;
        case DOUBLE_TAP: unregister_code16(KC_F2); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_2); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_3);
        tap_code16(KC_3);
        tap_code16(KC_3);
    }
    if(state->count > 3) {
        tap_code16(KC_3);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_3); break;
        case DOUBLE_TAP: register_code16(KC_F3); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_3); register_code16(KC_3);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_3); break;
        case DOUBLE_TAP: unregister_code16(KC_F3); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_3); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_4);
        tap_code16(KC_4);
        tap_code16(KC_4);
    }
    if(state->count > 3) {
        tap_code16(KC_4);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_4); break;
        case DOUBLE_TAP: register_code16(KC_F4); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_4); register_code16(KC_4);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_4); break;
        case DOUBLE_TAP: unregister_code16(KC_F4); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_4); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_5);
        tap_code16(KC_5);
        tap_code16(KC_5);
    }
    if(state->count > 3) {
        tap_code16(KC_5);
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(KC_5); break;
        case DOUBLE_TAP: register_code16(KC_F5); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_5); register_code16(KC_5);
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(KC_5); break;
        case DOUBLE_TAP: unregister_code16(KC_F5); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_5); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
    }
    if(state->count > 3) {
        tap_code16(KC_ESCAPE);
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: register_code16(KC_LEFT_SHIFT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ESCAPE); register_code16(KC_ESCAPE);
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: unregister_code16(KC_LEFT_SHIFT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(tap_dance_state_t *state, void *user_data);
void dance_6_finished(tap_dance_state_t *state, void *user_data);
void dance_6_reset(tap_dance_state_t *state, void *user_data);

void on_dance_6(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_1);
        tap_code16(KC_1);
        tap_code16(KC_1);
    }
    if(state->count > 3) {
        tap_code16(KC_1);
    }
}

void dance_6_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(KC_1); break;
        case SINGLE_HOLD: register_code16(KC_1); break;
        case DOUBLE_TAP: register_code16(KC_F1); break;
        case DOUBLE_HOLD: register_code16(KC_F1); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_1); register_code16(KC_1);
    }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(KC_1); break;
        case SINGLE_HOLD: unregister_code16(KC_1); break;
        case DOUBLE_TAP: unregister_code16(KC_F1); break;
        case DOUBLE_HOLD: unregister_code16(KC_F1); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_1); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(tap_dance_state_t *state, void *user_data);
void dance_7_finished(tap_dance_state_t *state, void *user_data);
void dance_7_reset(tap_dance_state_t *state, void *user_data);

void on_dance_7(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_2);
        tap_code16(KC_2);
        tap_code16(KC_2);
    }
    if(state->count > 3) {
        tap_code16(KC_2);
    }
}

void dance_7_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(KC_2); break;
        case SINGLE_HOLD: register_code16(KC_2); break;
        case DOUBLE_TAP: register_code16(KC_F2); break;
        case DOUBLE_HOLD: register_code16(KC_F2); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_2); register_code16(KC_2);
    }
}

void dance_7_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(KC_2); break;
        case SINGLE_HOLD: unregister_code16(KC_2); break;
        case DOUBLE_TAP: unregister_code16(KC_F2); break;
        case DOUBLE_HOLD: unregister_code16(KC_F2); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_2); break;
    }
    dance_state[7].step = 0;
}
void on_dance_8(tap_dance_state_t *state, void *user_data);
void dance_8_finished(tap_dance_state_t *state, void *user_data);
void dance_8_reset(tap_dance_state_t *state, void *user_data);

void on_dance_8(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_3);
        tap_code16(KC_3);
        tap_code16(KC_3);
    }
    if(state->count > 3) {
        tap_code16(KC_3);
    }
}

void dance_8_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case SINGLE_TAP: register_code16(KC_3); break;
        case SINGLE_HOLD: register_code16(KC_3); break;
        case DOUBLE_TAP: register_code16(KC_F3); break;
        case DOUBLE_HOLD: register_code16(KC_F3); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_3); register_code16(KC_3);
    }
}

void dance_8_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
        case SINGLE_TAP: unregister_code16(KC_3); break;
        case SINGLE_HOLD: unregister_code16(KC_3); break;
        case DOUBLE_TAP: unregister_code16(KC_F3); break;
        case DOUBLE_HOLD: unregister_code16(KC_F3); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_3); break;
    }
    dance_state[8].step = 0;
}
void on_dance_9(tap_dance_state_t *state, void *user_data);
void dance_9_finished(tap_dance_state_t *state, void *user_data);
void dance_9_reset(tap_dance_state_t *state, void *user_data);

void on_dance_9(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_4);
        tap_code16(KC_4);
        tap_code16(KC_4);
    }
    if(state->count > 3) {
        tap_code16(KC_4);
    }
}

void dance_9_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[9].step = dance_step(state);
    switch (dance_state[9].step) {
        case SINGLE_TAP: register_code16(KC_4); break;
        case SINGLE_HOLD: register_code16(KC_4); break;
        case DOUBLE_TAP: register_code16(KC_F4); break;
        case DOUBLE_HOLD: register_code16(KC_F4); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_4); register_code16(KC_4);
    }
}

void dance_9_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[9].step) {
        case SINGLE_TAP: unregister_code16(KC_4); break;
        case SINGLE_HOLD: unregister_code16(KC_4); break;
        case DOUBLE_TAP: unregister_code16(KC_F4); break;
        case DOUBLE_HOLD: unregister_code16(KC_F4); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_4); break;
    }
    dance_state[9].step = 0;
}
void on_dance_10(tap_dance_state_t *state, void *user_data);
void dance_10_finished(tap_dance_state_t *state, void *user_data);
void dance_10_reset(tap_dance_state_t *state, void *user_data);

void on_dance_10(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_5);
        tap_code16(KC_5);
        tap_code16(KC_5);
    }
    if(state->count > 3) {
        tap_code16(KC_5);
    }
}

void dance_10_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[10].step = dance_step(state);
    switch (dance_state[10].step) {
        case SINGLE_TAP: register_code16(KC_5); break;
        case SINGLE_HOLD: register_code16(KC_5); break;
        case DOUBLE_TAP: register_code16(KC_F5); break;
        case DOUBLE_HOLD: register_code16(KC_F5); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_5); register_code16(KC_5);
    }
}

void dance_10_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[10].step) {
        case SINGLE_TAP: unregister_code16(KC_5); break;
        case SINGLE_HOLD: unregister_code16(KC_5); break;
        case DOUBLE_TAP: unregister_code16(KC_F5); break;
        case DOUBLE_HOLD: unregister_code16(KC_F5); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_5); break;
    }
    dance_state[10].step = 0;
}
void on_dance_11(tap_dance_state_t *state, void *user_data);
void dance_11_finished(tap_dance_state_t *state, void *user_data);
void dance_11_reset(tap_dance_state_t *state, void *user_data);

void on_dance_11(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LEFT_CTRL);
        tap_code16(KC_LEFT_CTRL);
        tap_code16(KC_LEFT_CTRL);
    }
    if(state->count > 3) {
        tap_code16(KC_LEFT_CTRL);
    }
}

void dance_11_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[11].step = dance_step(state);
    switch (dance_state[11].step) {
        case SINGLE_TAP: register_code16(KC_LEFT_CTRL); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: register_code16(KC_F17); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LEFT_CTRL); register_code16(KC_LEFT_CTRL);
    }
}

void dance_11_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[11].step) {
        case SINGLE_TAP: unregister_code16(KC_LEFT_CTRL); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: unregister_code16(KC_F17); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LEFT_CTRL); break;
    }
    dance_state[11].step = 0;
}
void on_dance_12(tap_dance_state_t *state, void *user_data);
void dance_12_finished(tap_dance_state_t *state, void *user_data);
void dance_12_reset(tap_dance_state_t *state, void *user_data);

void on_dance_12(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_1);
        tap_code16(KC_1);
        tap_code16(KC_1);
    }
    if(state->count > 3) {
        tap_code16(KC_1);
    }
}

void dance_12_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[12].step = dance_step(state);
    switch (dance_state[12].step) {
        case SINGLE_TAP: register_code16(KC_1); break;
        case SINGLE_HOLD: register_code16(KC_1); break;
        case DOUBLE_TAP: register_code16(KC_F1); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_1); register_code16(KC_1);
    }
}

void dance_12_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[12].step) {
        case SINGLE_TAP: unregister_code16(KC_1); break;
        case SINGLE_HOLD: unregister_code16(KC_1); break;
        case DOUBLE_TAP: unregister_code16(KC_F1); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_1); break;
    }
    dance_state[12].step = 0;
}
void on_dance_13(tap_dance_state_t *state, void *user_data);
void dance_13_finished(tap_dance_state_t *state, void *user_data);
void dance_13_reset(tap_dance_state_t *state, void *user_data);

void on_dance_13(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_2);
        tap_code16(KC_2);
        tap_code16(KC_2);
    }
    if(state->count > 3) {
        tap_code16(KC_2);
    }
}

void dance_13_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[13].step = dance_step(state);
    switch (dance_state[13].step) {
        case SINGLE_TAP: register_code16(KC_2); break;
        case SINGLE_HOLD: register_code16(KC_2); break;
        case DOUBLE_TAP: register_code16(KC_F2); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_2); register_code16(KC_2);
    }
}

void dance_13_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[13].step) {
        case SINGLE_TAP: unregister_code16(KC_2); break;
        case SINGLE_HOLD: unregister_code16(KC_2); break;
        case DOUBLE_TAP: unregister_code16(KC_F2); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_2); break;
    }
    dance_state[13].step = 0;
}
void on_dance_14(tap_dance_state_t *state, void *user_data);
void dance_14_finished(tap_dance_state_t *state, void *user_data);
void dance_14_reset(tap_dance_state_t *state, void *user_data);

void on_dance_14(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_3);
        tap_code16(KC_3);
        tap_code16(KC_3);
    }
    if(state->count > 3) {
        tap_code16(KC_3);
    }
}

void dance_14_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[14].step = dance_step(state);
    switch (dance_state[14].step) {
        case SINGLE_TAP: register_code16(KC_3); break;
        case SINGLE_HOLD: register_code16(KC_3); break;
        case DOUBLE_TAP: register_code16(KC_F3); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_3); register_code16(KC_3);
    }
}

void dance_14_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[14].step) {
        case SINGLE_TAP: unregister_code16(KC_3); break;
        case SINGLE_HOLD: unregister_code16(KC_3); break;
        case DOUBLE_TAP: unregister_code16(KC_F3); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_3); break;
    }
    dance_state[14].step = 0;
}
void on_dance_15(tap_dance_state_t *state, void *user_data);
void dance_15_finished(tap_dance_state_t *state, void *user_data);
void dance_15_reset(tap_dance_state_t *state, void *user_data);

void on_dance_15(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_4);
        tap_code16(KC_4);
        tap_code16(KC_4);
    }
    if(state->count > 3) {
        tap_code16(KC_4);
    }
}

void dance_15_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[15].step = dance_step(state);
    switch (dance_state[15].step) {
        case SINGLE_TAP: register_code16(KC_4); break;
        case SINGLE_HOLD: register_code16(KC_4); break;
        case DOUBLE_TAP: register_code16(KC_F4); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_4); register_code16(KC_4);
    }
}

void dance_15_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[15].step) {
        case SINGLE_TAP: unregister_code16(KC_4); break;
        case SINGLE_HOLD: unregister_code16(KC_4); break;
        case DOUBLE_TAP: unregister_code16(KC_F4); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_4); break;
    }
    dance_state[15].step = 0;
}
void on_dance_16(tap_dance_state_t *state, void *user_data);
void dance_16_finished(tap_dance_state_t *state, void *user_data);
void dance_16_reset(tap_dance_state_t *state, void *user_data);

void on_dance_16(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_5);
        tap_code16(KC_5);
        tap_code16(KC_5);
    }
    if(state->count > 3) {
        tap_code16(KC_5);
    }
}

void dance_16_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[16].step = dance_step(state);
    switch (dance_state[16].step) {
        case SINGLE_TAP: register_code16(KC_5); break;
        case SINGLE_HOLD: register_code16(KC_5); break;
        case DOUBLE_TAP: register_code16(KC_F5); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_5); register_code16(KC_5);
    }
}

void dance_16_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[16].step) {
        case SINGLE_TAP: unregister_code16(KC_5); break;
        case SINGLE_HOLD: unregister_code16(KC_5); break;
        case DOUBLE_TAP: unregister_code16(KC_F5); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_5); break;
    }
    dance_state[16].step = 0;
}
void on_dance_17(tap_dance_state_t *state, void *user_data);
void dance_17_finished(tap_dance_state_t *state, void *user_data);
void dance_17_reset(tap_dance_state_t *state, void *user_data);

void on_dance_17(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LEFT_CTRL);
        tap_code16(KC_LEFT_CTRL);
        tap_code16(KC_LEFT_CTRL);
    }
    if(state->count > 3) {
        tap_code16(KC_LEFT_CTRL);
    }
}

void dance_17_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[17].step = dance_step(state);
    switch (dance_state[17].step) {
        case SINGLE_TAP: register_code16(KC_LEFT_CTRL); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: register_code16(KC_F17); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LEFT_CTRL); register_code16(KC_LEFT_CTRL);
    }
}

void dance_17_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[17].step) {
        case SINGLE_TAP: unregister_code16(KC_LEFT_CTRL); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: unregister_code16(KC_F17); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LEFT_CTRL); break;
    }
    dance_state[17].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
        [DANCE_8] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_8, dance_8_finished, dance_8_reset),
        [DANCE_9] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_9, dance_9_finished, dance_9_reset),
        [DANCE_10] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_10, dance_10_finished, dance_10_reset),
        [DANCE_11] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_11, dance_11_finished, dance_11_reset),
        [DANCE_12] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_12, dance_12_finished, dance_12_reset),
        [DANCE_13] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_13, dance_13_finished, dance_13_reset),
        [DANCE_14] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_14, dance_14_finished, dance_14_reset),
        [DANCE_15] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_15, dance_15_finished, dance_15_reset),
        [DANCE_16] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_16, dance_16_finished, dance_16_reset),
        [DANCE_17] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_17, dance_17_finished, dance_17_reset),
};

void handle_shift_mo1(bool *is_on_shift_mo1) {
    if (is_on_shift_mo1) {
        layer_off(3);
        *is_on_shift_mo1 = false;
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  static bool l_shift_held = false;
  static bool r_shift_held = false;
  static bool is_on_shift_mo1 = false;

  switch (keycode) {
    case KC_LEFT_SHIFT:
    if (record->event.pressed) {
        if (r_shift_held) { 
            register_code(KC_LSFT);
            register_code(KC_ENTER);
            unregister_code(KC_ENTER);
            unregister_code(KC_LSFT);
            return false;
        } else {
            l_shift_held = true;
        }
    } else {
        handle_shift_mo1(&is_on_shift_mo1);
        l_shift_held = false;
    }

    break;
    case KC_RIGHT_SHIFT:
    if (record->event.pressed) {
        if (l_shift_held) { 
            unregister_code(KC_LSFT);
            unregister_code(KC_RSFT);
            register_code(KC_ENTER);
            unregister_code(KC_ENTER);
            return false;
        } else {
            r_shift_held = true;
        }
    } else {
        handle_shift_mo1(&is_on_shift_mo1);
        r_shift_held = false;
    }

    break;
    case KC_BACKSPACE:
    if (record->event.pressed && (l_shift_held || r_shift_held ) ) { 
            unregister_code(KC_LSFT);
            unregister_code(KC_RSFT);
            register_code(KC_DELETE);
            unregister_code(KC_DELETE);
            return false;
    }
    break;
    case KC_SPACE:
    if (record->event.pressed && (l_shift_held || r_shift_held ) ) { 
            unregister_code(KC_LSFT);
            unregister_code(KC_RSFT);
            register_code(KC_ESCAPE);
            unregister_code(KC_ESCAPE);
            return false;
    }
    break;
    case MO(1): 
        bool is_shift_pressed = l_shift_held || r_shift_held;
        if (record->event.pressed) {
            if (is_shift_pressed) {
                unregister_code(KC_LSFT);
                unregister_code(KC_RSFT);
                layer_on(3);  // Activate layer 3 instead of layer 1
                is_on_shift_mo1 = true;
            } else {
                layer_on(1);  // Activate layer 1 normally
            }
        } else { // Key released
            layer_off(is_shift_pressed ? 3 : 1); // Turn off the corresponding layer
        }
        return false;  // Prevent default MO(1) behaviork if MO(1) is pressed
    break;
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_LBRC))SS_DELAY(100)  SS_LSFT(SS_TAP(X_SCLN))SS_DELAY(100)  SS_LSFT(SS_TAP(X_SLASH))SS_DELAY(100)  SS_LSFT(SS_TAP(X_RBRC)));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_LBRC))SS_DELAY(100)  SS_LSFT(SS_TAP(X_SCLN))SS_DELAY(100)  SS_LSFT(SS_TAP(X_3))SS_DELAY(100)  SS_LSFT(SS_TAP(X_SLASH))SS_DELAY(100)  SS_LSFT(SS_TAP(X_RBRC)));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_A))SS_DELAY(100)  SS_TAP(X_F4));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_A))SS_DELAY(100)  SS_TAP(X_F5));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_GRAVE))SS_DELAY(100)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_LBRC)SS_DELAY(100)  SS_TAP(X_H));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_RBRC)SS_DELAY(100)  SS_TAP(X_Q));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_LBRC)SS_DELAY(100)  SS_TAP(X_Q));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_RBRC)SS_DELAY(100)  SS_TAP(X_H));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_TAB)));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_A))SS_DELAY(100)  SS_TAP(X_F2));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_ESCAPE);
        } else {
          unregister_code16(KC_ESCAPE);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_F4));
        } else {
          unregister_code16(LALT(KC_F4));
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(KC_C));
        } else {
          unregister_code16(LALT(KC_C));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_C));
        } else {
          unregister_code16(LALT(KC_C));
        }  
      }  
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}
