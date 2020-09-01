#include QMK_KEYBOARD_H
#include "keymap_finnish.h"

#define _DVORAK 0
#define _NUM    1
#define _SYM    2
#define _FUN    3
#define _NAV    4

enum code_t {
  DVORAK = SAFE_RANGE,
  NUM,
  SYM,
  NAV,
  MY_CIRC,
  MY_TILD,
  MY_GRV
} Code;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_DVORAK] = LAYOUT(

/*pinky     ,pinky   ,ring    ,middle          ,point   ,point   ,_____ ,_____ ,point                    ,point   ,middle          ,ring    ,pinky   ,pinky*/
    KC_CLCK ,_______ ,KC_LGUI ,KC_LCTL         ,KC_LSFT ,KC_LALT ,/*    ,      ,*/KC_RALT                ,KC_RSFT ,KC_RCTL         ,KC_RGUI ,_______ , KC_BSPC,
    KC_TAB  ,MY_QUES ,KC_COMM ,KC_DOT          ,KC_P    ,KC_Y    ,/*    ,      ,*/KC_F                   ,KC_G    ,KC_C            ,KC_R    ,KC_L    ,FI_ODIA ,
    KC_ESC  ,KC_A    ,KC_O    ,KC_E            ,KC_U    ,KC_I    ,/*    ,      ,*/KC_D                   ,KC_H    ,KC_T            ,KC_N    ,KC_S    ,FI_ADIA ,
    KC_ENT  ,FI_LABK ,KC_Q    ,KC_J            ,KC_K    ,KC_X    ,FUN   ,NAV   ,KC_B                     ,KC_M    ,KC_W            ,KC_V    ,KC_Z    ,KC_RSFT ,
    /*      ,        ,        ,*/ OSM(KC_LQUI) ,NUM     ,KC_SPC  ,/*    ,      ,*/MT(MOD_LSFT,KC_BSPACE) ,SYM     ,OSM(MOD_RCTL)/* ,        ,        ,*/
/*pinky     ,pinky   ,ring    ,middle          ,point   ,point   ,_____ ,_____ ,point                    ,point   ,middle          ,ring    ,pinky   ,pinky*/

  ),

  [_NUM] = LAYOUT(

/*pinky     ,pinky   ,ring    ,middle    ,point   ,point    ,_____  ,_____  ,point       ,point   ,middle   ,ring    ,pinky   ,pinky*/
    KC_CLCK ,_______ ,_______ ,_______   ,_______ ,_______  ,/*     ,       ,*/_______   ,_______ ,_______  ,_______ ,_______ ,KC_BSPC ,
    KC_TAB  ,_______ ,_______ ,_______   ,_______ , _______ ,/*     ,       ,*/FI_PLUS   ,KC_7    ,KC_8     ,KC_9    ,FI_PERC ,_______ ,
    KC_ESC  ,_______ ,KC_LGUI ,KC_LCTL   ,KC_LSFT ,KC_LALT  ,/*     ,       ,*/FI_EQL    ,KC_4    ,KC_5     ,KC_6    ,FI_ASTR ,_______ ,
    KC_ENT  ,_______ ,_______ ,_______   ,_______ ,_______  ,_______,_______,FI_MINS     ,KC_1    ,KC_2     ,KC_3    ,FI_UNDR ,KC_RSFT ,
    /*      ,        ,        ,*/ _______,_______ ,KC_SPC   ,/*     ,       ,*/KC_BSPACE ,KC_0    ,KC_ENT/* ,        ,        ,*/
/*pinky     ,pinky   ,ring    ,middle    ,point   ,point    ,_____  ,_____  ,point       ,point   ,middle   ,ring    ,pinky   ,pinky*/

  ),

  [_SYM] = LAYOUT(

/*pinky     ,pinky   ,ring    ,middle   ,point   ,point   ,_____   ,_____   ,point      ,point   ,middle    ,ring    ,pinky   ,pinky*/
    KC_CLCK ,_______ ,_______ ,_______  ,_______ ,_______ ,/*      ,        ,*/_______  ,_______ ,_______   ,_______ ,_______ ,KC_BSPC ,
    KC_TAB  ,FI_QUOT ,FI_DQUO ,FI_LCBR  ,FI_RCBR ,FI_AT   ,/*      ,        ,*/_______  ,_______ ,_______   ,_______ ,_______ , _______,
    KC_ESC  ,MY_CIRC ,FI_DLR  ,FI_LPRN  ,FI_RPRN ,FI_HASH ,/*      ,        ,*/KC_RALT  ,KC_RSFT ,KC_RCTL   ,KC_RGUI ,_______ ,_______ ,
    KC_ENT  ,MY_TILD ,FI_EXLM ,FI_LBRC  ,FI_RBRC ,FI_AMPR ,_______ ,_______ ,_______    ,_______ , _______  ,_______ ,
    /*      ,        ,        ,*/_______,KC_ENT  ,KC_SPC  ,/*      ,        ,*/KC_BSPACE,SYM     ,_______/* ,        ,        ,*/
/*pinky     ,pinky   ,ring    ,middle   ,point   ,point   ,_____   ,_____   ,point      ,point   ,middle    ,ring    ,pinky   ,pinky*/

  ),


  [_FUN] = LAYOUT(

/*pinky     ,pinky   ,ring    ,middle     ,point   ,point    ,_____  ,_____  ,point       ,point   ,middle   ,ring   ,pinky   ,pinky*/
    KC_CLCK ,_______ ,_______ ,_______    ,_______ ,_______  ,/*     ,       ,*/_______   ,KC_F10  ,KC_F11   ,KC_F12 ,_______ ,KC_BSPC ,
    KC_TAB  ,_______ ,_______ ,_______    ,_______ , _______ ,/*     ,       ,*/FI_PIPE   ,KC_F7   ,KC_F8    ,KC_F9  ,_______ ,_______ ,
    KC_ESC  ,_______ ,KC_LGUI ,KC_LCTL    ,KC_LSFT ,KC_LALT  ,/*     ,       ,*/FI_BSLS   ,KC_F4   ,KC_F5    ,KC_F6  ,_______ ,_______ ,
    KC_ENT  ,_______ ,_______ ,_______    ,_______ ,_______  ,_______,_______,_______     ,KC_F1   ,KC_F2    ,KC_F3  ,_______ ,KC_RSFT ,
    /*      ,        ,        ,*/ _______ ,_______ ,_______    ,/*     ,       ,*/KC_BSPACE ,_______ ,KC_ENT/* ,       ,        ,*/
/*pinky     ,pinky   ,ring    ,middle     ,point   ,point    ,_____  ,_____  ,point       ,point   ,middle   ,ring   ,pinky   ,pinky*/

  ),

  [_NAV] = LAYOUT(

/*pinky     ,pinky     ,ring       ,middle     ,point    ,point     ,_____   ,_____   ,point      ,point   ,middle    ,ring    ,pinky   ,pinky*/
    KC_CLCK ,_______   ,KC_PSCREEN ,KC_BRID    ,KC_BRIU  ,_______   ,/*      ,        ,*/_______  ,_______ ,_______   ,_______ ,_______ ,KC_BSPC ,
    KC_TAB  ,KC_INSERT ,KC_HOME    ,KC_UP      ,KC_END   ,KC_PGUP   ,/*      ,        ,*/_______  ,_______ ,_______   ,_______ , _______,_______ ,
    KC_ESC  ,KC_DELETE ,KC_LEFT    ,KC_DOWN    ,KC_RIGHT ,KC_PGDOWN ,/*      ,        ,*/KC_RALT  ,KC_RSFT ,KC_RCTL   ,KC_RGUI ,_______ ,_______ ,
    KC_ENT  ,_______   ,_______    ,KC_VOLD    ,KC_VOLU  , _______  ,_______ ,_______ ,_______    ,_______ , _______  ,        ,_______ ,KC_RSFT ,
    /*      ,          ,           ,*/ _______ ,KC_ENT   ,KC_SPC    ,/*      ,        ,*/_______,_______ ,_______/* ,        ,        ,*/
/*pinky     ,pinky     ,ring       ,middle     ,point    ,point     ,_____   ,_____   ,point      ,point   ,middle    ,ring    ,pinky   ,pinky*/

  ),
};

static bool shift_held = false;
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
	case KC_LSFT:
		shift_held = record->event.pressed;
		return true;
	case KC_RSFT:
		shift_held = record->event.pressed;
		return true;
    case  MY_QUES:
        if (record->event.pressed) {
            if (shift_held) {
                register_code(FI_QUES);
                unregister_code(FI_SLSH);
            } else {
                register_code(FI_SLSH);
                unregister_code(FI_QUES);
            }
        } else { // Release the key
            register_code(FI_SLSH);
            unregister_code(FI_QUES);
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
    case MY_GRV:
        if (record->event.pressed) {
            register_code(KC_LSFT);
            tap_code(FI_ACUT);
            unregister_code(KC_LSFT);
            tap_code(KC_SPC);
        }
        return false;

    return true;
}
