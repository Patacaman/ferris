// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H
#include "keymap_us_international.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

enum ferris_layers {
  _BASE,
  _TILDE,
  _NUM,
  _NAV,
  _FUN,
  _SYM
};

enum ferris_tap_dances {
	TD_QUES_IQUE = 0,
	TD_EXLM_IEXL,
	TD_SLSH_BSLS, 
	TD_COMM_SCLN,
	TD_DOT_COLN,
};

/* Tap Dance keycodes */
#define KC_T_QUES TD(TD_QUES_IQUE) 	/* Tap for ?, double tap for ¿ */
#define KC_T_EXLM TD(TD_EXLM_IEXL) 	/* Tap for !, double tap for ¡ */
#define KC_T_SLSH TD(TD_SLSH_BSLS) 	/* Tap for /, Double tap for \ */
#define KC_T_COMM TD(TD_COMM_SCLN) 	/* Tap for ,, double tap for ; */
#define KC_T_DOT TD(TD_DOT_COLN) 	/* Tap for ., Double tap for : */

/* Tap-Hold keycodes */
#define KC_NUMSP 	LT(_NUM, KC_SPC) 		/* Tap for Space, Hold for NUM layer */
#define KC_NAVENT 	LT(_NAV, KC_ENT) 		/* Tap for Enter, Hold for NAV layer */
#define KC_FUNBSP 	LT(_FUN, KC_BSPC) 		/* Tap for BackSpace, Hold for FUN layer */

/* Abbreviature keycodes */
/* GASC */
/* #define GUI_A LGUI_T(KC_A)
#define ALT_R LALT_T(KC_R)
#define SFT_S LSFT_T(KC_S)
#define CRTL_T LCTL_T(KC_T)
#define CRTL_N RCTL_T(KC_N)
#define SFT_E RSFT_T(KC_E)
#define ALT_I LALT_T(KC_I)
#define GUI_O RGUI_T(KC_O) */

#define GUI_C RGUI_T(KC_C)
#define ALT_R LALT_T(KC_R)
#define SFT_S LSFT_T(KC_S)
#define CRTL_T LCTL_T(KC_T)
#define CRTL_N RCTL_T(KC_N)
#define SFT_E RSFT_T(KC_E)
#define ALT_I LALT_T(KC_I)
#define GUI_A LGUI_T(KC_A)

#define A_NEXT 		KC_MEDIA_NEXT_TRACK 
#define A_PREV 		KC_MEDIA_PREV_TRACK
#define A_PLAY 		KC_MEDIA_PLAY_PAUSE
#define A_VUP		KC_AUDIO_VOL_UP
#define A_VDOWN 	KC_AUDIO_VOL_DOWN
#define A_MUTE 		KC_AUDIO_MUTE

const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
    &delete_key_override,
    NULL // Null terminate the array of overrides!
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT_split_3x5_2(
	KC_W,	KC_L,	KC_Y,	KC_P,	KC_B,				KC_F,	KC_J,	KC_O,	 	KC_U,		KC_T_QUES, 
	GUI_C, 	ALT_R,	SFT_S,	CRTL_T,	KC_G, 				KC_M,	CRTL_N,	SFT_E,	 	ALT_I,		GUI_A,
	KC_Q,	KC_Z, 	KC_V,	KC_D,	KC_K, 				KC_X,  	KC_H,	KC_T_SLSH,	KC_T_COMM, 	KC_T_DOT, 
				   OSL(_TILDE), KC_NUMSP,				KC_NAVENT, KC_FUNBSP),
    
/* 	[_BASE] = LAYOUT_split_3x5_2(
	KC_Q,	KC_W,	KC_F,	KC_P,	KC_G,				KC_J,	KC_L,	KC_U,	 	KC_Y,		KC_T_QUES, 
	GUI_A, 	ALT_R,	SFT_S,	CRTL_T,	KC_D, 				KC_H,	CRTL_N,	SFT_E,	 	ALT_I,		GUI_O,
	KC_Z,	KC_X, 	KC_C,	KC_V,	KC_B, 				KC_K,  	KC_M,	KC_T_COMM, 	KC_T_DOT,	KC_MINS, 
				   OSL(_TILDE), KC_NUMSP,				KC_NAVENT, KC_FUNBSP), */
	
/* 	[_TILDE] = LAYOUT_split_3x5_2(
	XXXXXXX, 	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 	XXXXXXX, XXXXXXX, 	 RALT(KC_U), RALT(KC_Y), XXXXXXX, 
	RALT(KC_A), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 	XXXXXXX, RALT(KC_N), RALT(KC_E), RALT(KC_I), RALT(KC_O),
	XXXXXXX, 	XXXXXXX, US_CCED, XXXXXXX, XXXXXXX, 	XXXXXXX, XXXXXXX, 	 XXXXXXX, 	 XXXXXXX, 	 XXXXXXX,	
								 US_ACUT, TO(_NUM),	    TO(_NAV), KC_DEL), */
								 
	[_TILDE] = LAYOUT_split_3x5_2(
	XXXXXXX, 	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 	XXXXXXX, XXXXXXX, 	 RALT(KC_O),RALT(KC_U), RALT(KC_Y), 
	US_CCED,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 	XXXXXXX, RALT(KC_N), RALT(KC_E), RALT(KC_I), RALT(KC_A),
	XXXXXXX, 	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 	XXXXXXX, XXXXXXX, 	 XXXXXXX, 	 XXXXXXX, 	 XXXXXXX,	
								 US_ACUT, TO(_NUM),	    TO(_NAV), KC_DEL),								 
							   
	[_NUM] = LAYOUT_split_3x5_2(
	KC_ESC, 	XXXXXXX, XXXXXXX, XXXXXXX, US_PERC, 	KC_T_SLSH, 	KC_7,	KC_8, 	KC_9, US_ASTR, 
	KC_LGUI, 	KC_LALT, KC_LSFT, KC_LCTL, KC_T_COMM, 	KC_T_DOT, 	KC_4,	KC_5, 	KC_6, KC_MINS,
	TO(_BASE), 	XXXXXXX, XXXXXXX, XXXXXXX, KC_EQL, 		KC_0,  		KC_1,	KC_2,   KC_3, US_PLUS,	
								   KC_TAB, XXXXXXX, 	MO(_SYM), 	KC_BSPC),
							   
	[_NAV] = LAYOUT_split_3x5_2( 
	KC_ESC, 	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 	KC_PGUP, KC_HOME,	KC_UP,   KC_END, 	XXXXXXX, 
	KC_LGUI, 	KC_LALT, KC_LSFT, KC_LCTL, XXXXXXX, 	KC_PGDN, KC_LEFT, 	KC_DOWN, KC_RGHT, 	XXXXXXX,
	TO(_BASE), 	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 	C(KC_Z), C(KC_X), 	C(KC_C), C(KC_V), 	C(KC_Y),	
							      KC_TAB, MO(_SYM), 	XXXXXXX, XXXXXXX),
							   
	[_FUN] = LAYOUT_split_3x5_2(
	KC_ESC, 	XXXXXXX, LSG(KC_S), XXXXXXX, A_NEXT, 	A_VUP, 	 KC_F7,	KC_F8, 	KC_F9,	KC_F12, 
	KC_LGUI, 	KC_LALT, KC_LSFT, 	KC_LCTL, A_PREV, 	A_VDOWN, KC_F4,	KC_F5,  KC_F6,	KC_F11,
	XXXXXXX, 	XXXXXXX, XXXXXXX, 	XXXXXXX, A_PLAY, 	A_MUTE,  KC_F1,	KC_F2,	KC_F3,	KC_F10,	
								   KC_TAB,  XXXXXXX, 	XXXXXXX, XXXXXXX),
							   
	[_SYM] = LAYOUT_split_3x5_2(
	KC_ESC, 	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 	US_DTIL, US_NOT, 	US_DIAE, US_LPRN, US_RPRN, 
	KC_LGUI, 	KC_LALT, KC_LSFT, KC_LCTL, XXXXXXX, 	US_DEG,  US_PIPE, 	US_EURO, US_LBRC, US_RBRC,
	XXXXXXX, 	XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 	KC_T_EXLM, US_LABK,	US_RABK, US_LCBR, US_RCBR,	
							       KC_TAB, XXXXXXX, 	XXXXXXX, XXXXXXX)
};

// Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
	[TD_QUES_IQUE] = ACTION_TAP_DANCE_DOUBLE(US_QUES, US_IQUE), 
	[TD_EXLM_IEXL] = ACTION_TAP_DANCE_DOUBLE(US_EXLM, US_IEXL),
	[TD_SLSH_BSLS] = ACTION_TAP_DANCE_DOUBLE(US_SLSH, US_BSLS),
	[TD_COMM_SCLN] = ACTION_TAP_DANCE_DOUBLE(US_COMM, US_SCLN),
	[TD_DOT_COLN] = ACTION_TAP_DANCE_DOUBLE(US_DOT, US_COLN)
};
