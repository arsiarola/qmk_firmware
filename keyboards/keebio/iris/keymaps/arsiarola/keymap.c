#include QMK_KEYBOARD_H
#include "keymap_finnish.h"

#define _DVORAK 0
#define _NUM    1
#define _SYM    2
#define _NAV    3

enum code_t {
  DVORAK = SAFE_RANGE,
  NUM,
  SYM,
  NAV,
  MY_CIRC,
  MY_TILD
} Code;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_DVORAK] = LAYOUT(

/*pinky    ,pinky  ,ring        ,middle       ,point        ,point       ,_____  ,_____ ,point                    ,point        ,middle      ,ring        ,pinky ,pinky*/
    KC_TAB ,KC_1   ,KC_2        ,KC_3         ,KC_4         ,KC_5        ,/*     ,      ,*/KC_6                   ,KC_7         ,KC_8        ,KC_9        ,KC_0  , KC_BSPC,
    KC_ENT ,FI_MINS,KC_COMM     ,KC_DOT       ,KC_P         ,KC_Y        ,/*     ,      ,*/KC_F                   ,KC_G         ,KC_C        ,KC_R        ,KC_L  ,FI_ODIA ,
    KC_ESC ,KC_A   ,LGUI_T(KC_O),LCTL_T(KC_E) ,LSFT_T(KC_U) ,LALT_T(KC_I),/*     ,      ,*/RALT_T(KC_D)           ,RSFT_T(KC_H) ,RCTL_T(KC_T),RGUI_T(KC_N),KC_S  ,FI_ADIA ,
    KC_LSFT,KC_SCLN,KC_Q        ,KC_J         ,KC_K         ,KC_X        ,KC_HOME,KC_END,KC_B                     ,KC_M         ,KC_W        ,KC_V        ,KC_Z  ,KC_RSFT ,
    /*     ,       ,            ,*/ NUM       ,NUM          ,KC_SPC      ,/*     ,      ,*/MT(MOD_LSFT,KC_BSPACE) ,SYM          ,KC_ENT/*    ,            ,      ,*/
/*pinky    ,pinky  ,ring        ,middle       ,point        ,point       ,_____  ,_____ ,point                    ,point        ,middle      ,ring        ,pinky ,pinky*/

  ),

  [_NUM] = LAYOUT(

/*pinky    ,pinky   ,ring   ,middle ,point  ,point    ,_____  ,_____ ,point       ,point ,middle   ,ring ,pinky,pinky*/
    KC_ESC ,KC_1    ,KC_F10 ,KC_F11 ,KC_F12 ,KC_5     ,/*     ,      ,*/KC_6      ,KC_7  ,KC_8     ,KC_9 ,KC_0 ,KC_BSPC,
    KC_LCTL,FI_EXLM ,KC_F7  ,KC_F8  ,KC_F9  , FI_RABK ,/*     ,      ,*/FI_PLUS   ,KC_7  ,KC_8     ,KC_9 ,KC_L ,KC_SLSH,
    KC_TAB ,FI_EXLM ,KC_F4  ,KC_F5  ,KC_F7  , FI_LABK ,/*     ,      ,*/FI_MINS   ,KC_7  ,KC_8     ,KC_9 ,KC_L ,KC_SLSH,
    KC_LSFT,KC_SCLN ,KC_F1  ,KC_F2  ,KC_F3  ,FI_COMM  ,KC_HOME,KC_END,FI_DOT      ,KC_1  ,KC_2     ,KC_3 ,KC_Z ,KC_RSFT,
    /*     ,        ,       ,*/ NUM ,NUM    ,KC_SPC   ,/*     ,      ,*/KC_BSPACE ,KC_0  ,KC_ENT/* ,     ,     ,*/
/*pinky    ,pinky   ,ring   ,middle ,point  ,point    ,_____  ,_____ ,point       ,point ,middle   ,ring ,pinky,pinky*/

  ),

  [_SYM] = LAYOUT(

/*pinky    ,pinky   ,ring    ,middle  ,point   ,point   ,_____  ,_____ ,point       ,point   ,middle  ,ring   ,pinky   ,pinky*/
    KC_ESC ,KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,/*     ,      ,*/KC_6      ,KC_7    ,KC_8    ,KC_9   ,KC_0    ,KC_BSPC,
    KC_LCTL,FI_QUOT ,FI_DQUO ,FI_LPRN ,FI_RPRN ,FI_HASH ,/*     ,      ,*/FI_ASTR   ,FI_LCBR ,FI_RCBR ,KC_F9  ,FI_EXLM ,KC_SLSH,
    KC_TAB ,MY_TILD ,KC_LGUI ,KC_LCTL ,KC_LSFT ,KC_LALT ,/*     ,      ,*/KC_RALT   ,KC_RSFT ,KC_RCTL ,KC_RGUI,FI_BSLS ,FI_AMPR,
    KC_LSFT,FI_GRV  ,FI_PERC ,FI_LBRC ,FI_RBRC ,FI_QUES ,KC_HOME,KC_END,FI_SLSH     ,MY_CIRC ,FI_DLR  ,KC_F3  ,FI_PIPE ,KC_RSFT,
    /*     ,        ,        ,*/ NUM  ,NUM     ,KC_SPC  ,/*     ,      ,*/KC_BSPACE ,KC_0    ,NAV/*   ,       ,        ,*/
/*pinky    ,pinky   ,ring    ,middle  ,point   ,point   ,_____  ,_____ ,point       ,point   ,middle  ,ring   ,pinky   ,pinky*/

  ),

  [_NAV] = LAYOUT(

    KC_ESC ,KC_1   ,KC_2        ,KC_3         ,KC_4        ,KC_5        ,/*     ,      ,*/KC_6           ,KC_7         ,KC_8         ,KC_9         ,KC_0,KC_BSPC,
    KC_LCTL,KC_QUOT,KC_COMM     ,MY_CIRC      ,FI_DLR      ,KC_Y        ,/*     ,      ,*/KC_F           ,KC_G         ,KC_C         ,KC_R         ,KC_L,KC_SLSH,
    KC_TAB ,KC_A   ,LGUI_T(KC_O),LCTL_T(KC_E) ,LSFT_T(KC_U),LALT_T(KC_I),/*     ,      ,*/RALT_T(KC_RBRC),RSFT_T(KC_P4),RCTL_T(KC_P5),RGUI_T(KC_P6),KC_S,KC_MINS,
    KC_LSFT,KC_SCLN,KC_Q        ,KC_J         ,KC_K        ,KC_X        ,KC_HOME,KC_END,KC_B             ,KC_M         ,KC_W         ,KC_V         ,KC_Z,KC_RSFT,
    /*     ,       ,            ,*/ NUM       ,NUM         ,KC_SPC      ,/*     ,      ,*/KC_ENT         ,SYM          ,NAV/*        ,             ,    ,*/

  ),

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case DVORAK:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_DVORAK);
            }
            return false;
        case NUM:
            if (record->event.pressed) {
                layer_on(_NUM);
            } else {
                layer_off(_NUM);
            }
            return false;
        case SYM:
            if (record->event.pressed) {
                layer_on(_SYM);
            } else {
                layer_off(_SYM);
            }
            return false;
        case MY_TILD:
            if (record->event.pressed) {
                register_code(KC_ALGR);
                tap_code(FI_DIAE);
                unregister_code(KC_ALGR);
                tap_code(KC_SPC);
            }
            return false;
        case MY_CIRC:
            if (record->event.pressed) {
                register_code(KC_LSFT);
                tap_code(FI_DIAE);
                unregister_code(KC_LSFT);
                tap_code(KC_SPC);
            }
            return false;
    }

    return true;
}
