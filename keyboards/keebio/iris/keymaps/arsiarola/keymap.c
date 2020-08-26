#include QMK_KEYBOARD_H
#include "keymap_finnish.h"

#define _DVORAK 0
#define _NUM    1
#define _FUN    2
#define _NAV    3

enum custom_keycodes {
  DVORAK = SAFE_RANGE,
  NUM,
  FUN,
  NAV,
  MY_NUM
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_DVORAK] = LAYOUT(

/*pinky    ,pinky  ,ring        ,middle       ,point        ,point       ,_____  ,_____ ,point                    ,point        ,middle      ,ring        ,pinky ,pinky*/
    KC_TAB ,KC_1   ,KC_2        ,KC_3         ,KC_4         ,KC_5        ,/*     ,      ,*/KC_6                   ,KC_7         ,KC_8        ,KC_9        ,KC_0  , KC_BSPC,
    KC_ENT ,FI_MINS,KC_COMM     ,KC_DOT       ,KC_P         ,KC_Y        ,/*     ,      ,*/KC_F                   ,KC_G         ,KC_C        ,KC_R        ,KC_L  ,FI_ODIA ,
    KC_ESC ,KC_A   ,LGUI_T(KC_O),LCTL_T(KC_E) ,LSFT_T(KC_U) ,LALT_T(KC_I),/*     ,      ,*/RALT_T(KC_D)           ,RSFT_T(KC_H) ,RCTL_T(KC_T),RGUI_T(KC_N),KC_S  ,FI_ADIA ,
    KC_LSFT,KC_SCLN,KC_Q        ,KC_J         ,KC_K         ,KC_X        ,KC_HOME,KC_END,KC_B                     ,KC_M         ,KC_W        ,KC_V        ,KC_Z  ,KC_RSFT ,
    /*     ,       ,            ,*/ NUM       ,MY_NUM       ,KC_SPC      ,/*     ,      ,*/MT(MOD_LSFT,KC_BSPACE) ,FUN          ,KC_ENT/*    ,            ,      ,*/
/*pinky    ,pinky  ,ring        ,middle       ,point        ,point       ,_____  ,_____ ,point                    ,point        ,middle      ,ring        ,pinky ,pinky*/

  ),

  [_NUM] = LAYOUT(

/*pinky    ,pinky   ,ring           ,middle          ,point          ,point          ,_____  ,_____ ,point           ,point       ,middle      ,ring        ,pinky,pinky*/
    KC_ESC ,KC_1    ,KC_2           ,KC_3            ,KC_4           ,KC_5           ,/*     ,      ,*/KC_6          ,KC_7        ,KC_8        ,KC_9        ,KC_0 ,KC_BSPC,
    KC_LCTL,FI_EXLM ,FI_PERC        ,FI_LBRC         ,FI_RBRC        , FI_PIPE       ,/*     ,      ,*/FI_PLUS       ,KC_7        ,KC_8        ,KC_9        ,KC_L ,KC_SLSH,
    KC_TAB ,KC_A    ,LGUI_T(FI_DQUO),LCTL_T(FI_LPRN) ,LSFT_T(FI_RPRN),LALT_T(FI_BSLS),/*     ,      ,*/RALT_T(FI_EQL),RSFT_T(KC_4),RCTL_T(KC_5),RGUI_T(KC_6),KC_S ,KC_MINS,
    KC_LSFT,KC_SCLN ,FI_QUOT        ,FI_LCBR         ,FI_RCBR        ,FI_HASH        ,KC_HOME,KC_END,                ,KC_1        ,KC_2        ,KC_3        ,KC_Z ,KC_RSFT,
    /*     ,        ,               ,*/ NUM          ,MY_NUM         ,KC_SPC         ,/*     ,      ,*/KC_BSPACE     ,KC_0        ,KC_ENT/*    ,            ,     ,*/
/*pinky    ,pinky   ,ring           ,middle          ,point          ,point          ,_____  ,_____ ,point           ,point       ,middle      ,ring        ,pinky,pinky*/

  ),

  [_FUN] = LAYOUT(

/*pinky    ,pinky   ,ring            ,middle          ,point          ,point          ,_____  ,_____ ,point           ,point        ,middle       ,ring         ,pinky,pinky*/
    KC_ESC ,KC_1    ,KC_2            ,KC_3            ,KC_4           ,KC_5           ,/*     ,      ,*/KC_6          ,KC_7         ,KC_8         ,KC_9         ,KC_0 ,KC_BSPC,
    KC_LCTL,FI_GRV  ,FI_EURO         ,FI_CIRC         ,FI_DLR         ,FI_QUES        ,/*     ,      ,*/KC_F12        ,KC_F7        ,KC_F8        ,KC_F9        ,KC_L ,KC_SLSH,
    KC_TAB ,FI_TILD , LGUI_T(FI_PERC),LCTL_T(KC_NONUS_HASH) ,LSFT_T(FI_ASTR),LALT_T(FI_SLSH),/*     ,      ,*/RALT_T(KC_F11),RSFT_T(KC_F4),RCTL_T(KC_F5),RGUI_T(KC_F6),KC_S ,KC_MINS,
    KC_LSFT,FI_ACUT ,FI_PND          ,FI_LABK         ,FI_RABK        ,FI_AT          ,KC_HOME,KC_END,KC_F10          ,KC_F1        ,KC_F2        ,KC_F3        ,KC_Z ,KC_RSFT,
    /*     ,        ,                ,*/ NUM          ,NUM            ,KC_SPC         ,/*     ,      ,*/KC_BSPACE     ,KC_0         ,NAV/*        ,             ,     ,*/
/*pinky    ,pinky   ,ring            ,middle          ,point          ,point          ,_____  ,_____ ,point           ,point        ,middle       ,ring         ,pinky,pinky*/

  ),

  [_NAV] = LAYOUT(

    KC_ESC ,KC_1   ,KC_2      ,KC_3         ,KC_4        ,KC_5        ,/*     ,      ,*/KC_6           ,KC_7         ,KC_8         ,KC_9         ,KC_0,KC_BSPC,
    KC_LCTL,KC_QUOT,KC_COMM   ,KC_DOT       ,KC_P        ,KC_Y        ,/*     ,      ,*/KC_F           ,KC_G         ,KC_C         ,KC_R         ,KC_L,KC_SLSH,
    KC_TAB ,KC_A   ,LGUI_T(KC_O),LCTL_T(KC_E) ,LSFT_T(KC_U),LALT_T(KC_I),/*     ,      ,*/RALT_T(KC_RBRC),RSFT_T(KC_P4),RCTL_T(KC_P5),RGUI_T(KC_P6),KC_S,KC_MINS,
    KC_LSFT,KC_SCLN,KC_Q      ,KC_J         ,KC_K        ,KC_X        ,KC_HOME,KC_END,KC_B             ,KC_M         ,KC_W         ,KC_V         ,KC_Z,KC_RSFT,
    /*     ,       ,          ,*/ NUM       ,NUM         ,KC_SPC      ,/*     ,      ,*/KC_ENT         ,FUN          ,NAV/*        ,             ,    ,*/

  ),

};

static uint16_t my_timer;
static bool my_pressed;
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    my_pressed = true;
    switch (keycode) {
        case DVORAK:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_DVORAK);
            }
            return false;
            break;
        case MY_NUM:
            if (record->event.pressed) {
                my_timer = timer_read();
                my_pressed = false;
                layer_on(_NUM);
            } else {
                layer_off(_NUM);
                if (timer_elapsed(my_timer) < TAPPING_TERM || !my_pressed) {
                    tap_code(KC_ESC);
                }
            }
            return false;
            break;
        case NUM:
            if (record->event.pressed) {
                layer_on(_NUM);
            } else {
                layer_off(_NUM);
            }
            return false;
            break;
        case FUN:
            if (record->event.pressed) {
                layer_on(_FUN);
            } else {
                layer_off(_FUN);
            }
            return false;
            break;
    }
    return true;
}
