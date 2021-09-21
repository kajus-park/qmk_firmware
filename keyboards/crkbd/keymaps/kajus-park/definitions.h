// Layers
#define _DH 0
#define _QW 1
#define _LO 2
#define _RA 3
#define _AD 4
#define _EM 5


//Colemak
// Left-hand home row mods
#define  HOME_A LGUI_T(KC_A)
#define  HOME_R LALT_T(KC_R)
#define  HOME_S LSFT_T(KC_S)
#define  HOME_T LCTL_T(KC_T)

// Right-hand home row mods
#define  HOME_N RCTL_T(KC_N)
#define  HOME_E RSFT_T(KC_E)
#define  HOME_I LALT_T(KC_I)
#define  HOME_O RGUI_T(KC_O)
//Qwerty
// Left-hand home row mods
// Left-hand home row mods
#define QHOME_A LGUI_T(KC_A)
#define QHOME_S LALT_T(KC_S)
#define QHOME_D LSFT_T(KC_D)
#define QHOME_F LCTL_T(KC_F)

// Right-hand home row mods
#define QHOME_J RCTL_T(KC_J)
#define QHOME_K RSFT_T(KC_K)
#define QHOME_L LALT_T(KC_L)
#define QHOME_SCLN RGUI_T(KC_SCLN)

// Modifiers
#define LT_ESC LT(_AD, KC_ESC)
#define LT_GUI LT(_AD, KC_RGUI)
#define LT_TAB LT(_LO, KC_TAB)
#define LT_DEL LT(_RA, KC_DEL)
#define LT_SPC LT(_LO, KC_SPC)
#define S_SPC LSFT_T(KC_SPC)
#define S_TAB LSFT_T(KC_TAB)
#define S_DEL RSFT_T(KC_DEL)
#define LT_BSPC LT(_RA, KC_BSPC)

#define LST(X) LSFT_T(X)
#define RST(X) RSFT_T(X)
#define LCT(X) LCTL_T(X)
#define RCT(X) RCTL_T(X)
#define LGT(X) LGUI_T(X)
#define RGT(X) RGUI_T(X)
#define TAT(X) LALT_T(X)
#define AGT(X) RALT_T(X)

enum keycodes {
  MODDH = SAFE_RANGE,
  QWERTY,
  EMOJI,
  M_BSPC,
  M_WIPE,
  M_RGBRS,
  M_RAN64,
  UC_FLIP,
  UC_TABL,
  UC_SHRG,
  UC_DISA,
  UC_DANC,
  UC_SCRE,
  UC_WALL,
  UC_SOB,
  UC_DEAL,
  UC_RAGE,
  UC_NOOO,
  UC_SALU,
  UC_LENY,
  UC_WHAT,
  UC_CRY,
  UC_SHR2,
  UC_HAPY,
  UC_STRG
};