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
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_DVORAK] = LAYOUT(

    KC_ESC ,KC_1   ,KC_2      ,KC_3         ,KC_4        ,KC_5        ,/*     ,      ,*/KC_6        ,KC_7        ,KC_8        ,KC_9        ,KC_0 , KC_BSPC,
    KC_TAB ,KC_QUOT,KC_COMM   ,KC_DOT       ,KC_P        ,KC_Y        ,/*     ,      ,*/KC_F        ,KC_G        ,KC_C        ,KC_R        ,KC_L ,FI_ODIA ,
    KC_LCTL,KC_A   ,LGUI_T(KC_O),LCTL_T(KC_E) ,LSFT_T(KC_U),LALT_T(KC_I),/*     ,      ,*/RALT_T(KC_D),RSFT_T(KC_H),RCTL_T(KC_T),RGUI_T(KC_S),KC_S ,FI_ADIA ,
    KC_LSFT,KC_SCLN,KC_Q      ,KC_J         ,KC_K        ,KC_X        ,KC_HOME,KC_END,KC_B          ,KC_M        ,KC_W        ,KC_V        ,KC_Z ,KC_RSFT ,
    /*     ,       ,          ,*/ NUM       ,NUM         ,KC_SPC      ,/*     ,      ,*/KC_ENT      ,FUN         ,NAV/*       ,            ,     ,*/

  ),

  [_NUM] = LAYOUT(

    KC_ESC ,KC_1   ,KC_2      ,KC_3         ,KC_4        ,KC_5        ,/*     ,      ,*/KC_6           ,KC_7         ,KC_8         ,KC_9         ,KC_0,KC_BSPC,
    KC_TAB ,KC_QUOT,KC_COMM   ,KC_DOT       ,KC_P        ,KC_Y        ,/*     ,      ,*/KC_F           ,KC_G         ,KC_C         ,KC_R         ,KC_L,KC_SLSH,
    KC_LCTL,KC_A   ,LGUI_T(KC_O),LCTL_T(KC_E) ,LSFT_T(KC_U),LALT_T(KC_I),/*     ,      ,*/RALT_T(KC_RBRC),RSFT_T(KC_P4),RCTL_T(KC_P5),RGUI_T(KC_P6),KC_S,KC_MINS,
    KC_LSFT,KC_SCLN,KC_Q      ,KC_J         ,KC_K        ,KC_X        ,KC_HOME,KC_END,KC_B             ,KC_M         ,KC_W         ,KC_V         ,KC_Z,KC_RSFT,
    /*     ,       ,          ,*/ NUM       ,NUM         ,KC_SPC      ,/*     ,      ,*/KC_ENT         ,FUN          ,NAV/*        ,             ,    ,*/

  ),

  [_FUN] = LAYOUT(

    KC_ESC ,KC_1   ,KC_2      ,KC_3         ,KC_4        ,KC_5        ,/*     ,      ,*/KC_6           ,KC_7         ,KC_8         ,KC_9         ,KC_0,KC_BSPC,
    KC_TAB ,KC_QUOT,KC_COMM   ,KC_DOT       ,KC_P        ,KC_Y        ,/*     ,      ,*/KC_F           ,KC_G         ,KC_C         ,KC_R         ,KC_L,KC_SLSH,
    KC_LCTL,KC_A   ,LGUI_T(KC_O),LCTL_T(KC_E) ,LSFT_T(KC_U),LALT_T(KC_I),/*     ,      ,*/RALT_T(KC_RBRC),RSFT_T(KC_P4),RCTL_T(KC_P5),RGUI_T(KC_P6),KC_S,KC_MINS,
    KC_LSFT,KC_SCLN,KC_Q      ,KC_J         ,KC_K        ,KC_X        ,KC_HOME,KC_END,KC_B             ,KC_M         ,KC_W         ,KC_V         ,KC_Z,KC_RSFT,
    /*     ,       ,          ,*/ NUM       ,NUM         ,KC_SPC      ,/*     ,      ,*/KC_ENT         ,FUN          ,NAV/*        ,             ,    ,*/

  ),

  [_NAV] = LAYOUT(

    KC_ESC ,KC_1   ,KC_2      ,KC_3         ,KC_4        ,KC_5        ,/*     ,      ,*/KC_6           ,KC_7         ,KC_8         ,KC_9         ,KC_0,KC_BSPC,
    KC_TAB ,KC_QUOT,KC_COMM   ,KC_DOT       ,KC_P        ,KC_Y        ,/*     ,      ,*/KC_F           ,KC_G         ,KC_C         ,KC_R         ,KC_L,KC_SLSH,
    KC_LCTL,KC_A   ,LGUI_T(KC_O),LCTL_T(KC_E) ,LSFT_T(KC_U),LALT_T(KC_I),/*     ,      ,*/RALT_T(KC_RBRC),RSFT_T(KC_P4),RCTL_T(KC_P5),RGUI_T(KC_P6),KC_S,KC_MINS,
    KC_LSFT,KC_SCLN,KC_Q      ,KC_J         ,KC_K        ,KC_X        ,KC_HOME,KC_END,KC_B             ,KC_M         ,KC_W         ,KC_V         ,KC_Z,KC_RSFT,
    /*     ,       ,          ,*/ NUM       ,NUM         ,KC_SPC      ,/*     ,      ,*/KC_ENT         ,FUN          ,NAV/*        ,             ,    ,*/

  ),

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case DVORAK:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_DVORAK);
      }
      return false;
      break;
    case NUM:
      if (record->event.pressed) {
        layer_on(_NUM);
        update_tri_layer(_NUM, _FUN, _NAV);
      } else {
        layer_off(_NUM);
        update_tri_layer(_NUM, _FUN, _NAV);
      }
      return false;
      break;
    case FUN:
      if (record->event.pressed) {
        layer_on(_FUN);
        update_tri_layer(_NUM, _FUN, _NAV);
      } else {
        layer_off(_FUN);
        update_tri_layer(_NUM, _FUN, _NAV);
      }
      return false;
      break;
    case NAV:
      if (record->event.pressed) {
        layer_on(_NAV);
        update_tri_layer(_NUM, _FUN, _NAV);
      } else {
        layer_off(_NAV);
        update_tri_layer(_NUM, _FUN, _NAV);
      }
      return false;
      break;
  }
  return true;
}
