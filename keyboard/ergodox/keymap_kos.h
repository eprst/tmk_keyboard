static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * Keymap: Default Layer in QWERTY
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |   ~    |   1  |   2  |   3  |   4  |   5  |   -  |           |PrtSc |   6  |   7  |   8  |   9  |   0  |   =    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | Tab    |   Q  |   W  |   E  |   R  |   T  | L1   |           | GRui |   Y  |   U  |   I  |   O  |   P  |   \    |
     * |--------+------+------+------+------+------|      |           |Alt X |------+------+------+------+------+--------|
     * |Shft+Cps|  A/4 |  S/2 |  D/1 |  F/3 |   G  |------|           |------|   H  |   J  |   K  | L/3  |  ;/1 | '/3    |
     * |--------+------+------+------+------+------| Spc  |           | Caps |------+------+------+------+------+--------|
     * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  | RShift |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | LCtrl| LAlt | App  | Esci | LSft |                                       | LGui | RGui | Esc  | RAlt | RCtrl  |  LGui<>Esc
     *   `----------------------------------'                                       `------------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |Home  | End  |       | Left |Right |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | Ins  |       |  Up  |      |      |
     *                                 | Enter| Bspc |------|       |------| RAlt | Space|
     *                                 |      |      | LCtl |       | Down |      |      |
     *                                 `--------------------'       `--------------------'
     *
     * For left led changes: see matrix.c:121
     */

    KEYMAP(  // Layer0: default, leftled:none
        // left hand
        GRV, 1,   2,   3,   4,   5,   MINS,
        TAB, Q,   W,   E,   R,   T,   FN1,
        FN5, FN26,FN31,FN30,FN29,G,
        FN9, Z,   X,   C,   V,   B,   SPC,
        LCTL,LALT,ESC, APP, FN9,
                                      HOME,END,
                                           INS,
                                 ENT, BSPC,LCTL,
        // right hand
             PSCR,6,   7,   8,   9,   0,   EQL,
             FN14,Y,   U,   I,   O,   P,   BSLS,
                  H,   J,   K,   L,   FN27,FN28,
             CAPS,N,   M,   COMM,DOT, SLSH,RSFT,
                       LGUI,RGUI,ESC, RALT,RCTL, // todo: LGUI<->ESC
        LEFT,RIGHT,
        UP,
        DOWN,RALT,SPC
    ),

    KEYMAP(  // Layer1: F-keys instead of numbers, leftled:red
        // left hand
        FN6, F1,  F2,  F3,  F4,  F5,  TRNS,
        TRNS,P1,  P2,  P3,  P4,  P5,  TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,F6,  F7,  F8,  F9,  F10, F11,
             FN13,TRNS,LBRC,RBRC,TRNS,TRNS,F12,
                  LEFT,DOWN,UP, RIGHT,FN27,TRNS,
             FN12,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       DEL, TRNS,TRNS,TRNS,TRNS,
        TRNS, TRNS,
        PGUP,
        PGDN,FN12,FN13
    ),

    KEYMAP(  // Layer2: mouse and navigation, leftled:yellow
        // left hand
        TRNS,NO,  NO,  NO,  NO,  NO,  NO,
        TRNS,ACL0,TRNS,TRNS,TRNS,ACL0,TRNS,
        TRNS,ACL1,TRNS,TRNS,TRNS,ACL1,
        TRNS,ACL2,TRNS,TRNS,TRNS,ACL2,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,

        // right hand
           SYSREQ,MPLY,MPRV,MNXT,VOLD,VOLU,MUTE,
             TRNS,WH_L,WH_D,WH_U,WH_R,PGUP,ACL0,
                  MS_L,MS_D,MS_U,MS_R,PGDN,ACL1,
             TRNS,TRNS,HOME,END, DEL, INS, ACL2,
                       BTN2,BTN3,TRNS,TRNS,TRNS,
        WBAK,WFWD,
        TRNS,
        TRNS,TRNS,BTN1
    ),

    /*
     * Keymap:
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |        |ALT+F1|      |      |ALT+F4|CTL+F5|      |           |Format| SH+F6|ALT+F7|      |  -   |  +   | SH+F11 |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |Ctrl  |Ctrl ]|  {   |   }  |  [   |   ]  |        |
     * |--------+------+------+------+------+------|      |           |Alt ->|------+------+------+------+------+--------|
     * |        |      |      |      |      |      |------|           |------|$this>|  (   |   )  |  _   |  =   |        |
     * |--------+------+------+------+------+------|      |           |Ctrl  |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |Alt <-|CtAltV|  ->  |      | !=   |  =>  |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      |      |      |                                       |   @  |      |      |Alt <-|Alt ->  |
     *   `----------------------------------'                                       `------------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |VolDn |VolUp |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |Ctrl  |      |      |       |Mute  |      |      |
     *                                 |Shift |  :   |------|       |------|      |  $   |
     *                                 |Enter |      |      |       |      |      |      |
     *                                 `--------------------'       `--------------------'
     *
     */
    KEYMAP(  // Layer 3: programming stuff on the right hand
        // left hand
        TRNS,FN21,TRNS,TRNS,FN17,FN25,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 FN22,FN18,TRNS,
        // right hand
             FN10,FN11,FN12,TRNS,MINS,FN15,FN13,
             FN20,FN23,FN1 ,FN2 ,LBRC,RBRC,TRNS,
                  FN3, FN4, FN5, FN6, EQL, TRNS,
             FN19,FN24,FN7, FN16,FN14,FN16,TRNS,
                       FN8, TRNS,TRNS,FN19,FN20,
        VOLD,VOLU,
        MUTE,
        TRNS,TRNS,FN9
    ),

    /*
     * Keymap:
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |        |      |      |      |      |      |      |           |      |      |NUM LK|  /   |  *   |  -   |        |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |  7   |  8   |  9   |  +   |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |------|           |------|      |  4   |  5   |  6   |  +   |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |  1   |  2   |  3   | ENT  |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      |      |      |                                       |  0   | KP_DL|      | ENT  |        |
     *   `----------------------------------'                                       `------------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 |      |      |------|       |------|      |      |
     *                                 |      |      |      |       |      |      |      |
     *                                 `--------------------'       `--------------------'
     *
     */

    KEYMAP(  // Layer4: num pad on the right
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,NLCK,PSLS,PAST,PMNS,TRNS,
             TRNS,TRNS, 7,   8,   9,  PPLS,TRNS,
                  TRNS, 4,   5,   6,  PPLS,TRNS,
             TRNS,TRNS, 1,   2,   3,  PENT,TRNS,
                        0,  PDOT,TRNS,PENT,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    /*
     * Keymap:
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |------|           |------|      |      |      |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      |      |      |                                       |      |      |      |      |        |
     *   `----------------------------------'                                       `------------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 |      |      |------|       |------|      |      |
     *                                 |      |      |      |       |      |      |      |
     *                                 `--------------------'       `--------------------'
     *
     */

/*
    // templates to copy from

    KEYMAP(  // LayerN: transparent on edges + hard-defined thumb keys, all others are empty
        // left hand
        TRNS,NO,  NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,TRNS,TRNS,LALT,LGUI,
                                      TRNS,TRNS,
                                           TRNS,
                                 LCTL,LSFT,TRNS,
        // right hand
             NO,  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                       RGUI,RALT,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,RSFT,RCTL
    ),
    KEYMAP(  // LayerN: fully transparent
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),
*/

};

/* id for user defined functions & macros */
enum function_id {
    TEENSY_KEY,
    CUSTOM_KEY,
    L_CTRL_ALT_ENT,
    R_CTRL_ALT_ENT,
};

enum macro_id {
    THIS_ARR,
    ARR,
    FORMAT_METHOD,
    NOT_EQ,
    ARR2,
    PWD1,
    COPY_HST
};

#include "pass.h"
#define MACRO_THIS_ARR      MACRO( I(15), D(LSHIFT), T(4), U(LSHIFT), T(T), T(H), T(I), T(S), T(MINS), D(LSHIFT), T(DOT), U(LSHIFT), END )
#define MACRO_ARR           MACRO( I(15), T(MINS), D(LSHIFT), T(DOT), U(LSHIFT), END )
#define MACRO_FORMAT_METHOD MACRO( I(15), T(M), T(L), D(LALT), T(UP), U(LALT), W(100), D(LCTRL), D(LSHIFT), T(W), T(W), U(LSHIFT), D(LALT), T(L), U(LALT), U(LCTRL), W(100), T(GRAVE), T(L), W(100), END )
#define MACRO_NOT_EQ        MACRO( I(15), D(LSHIFT), T(1), U(LSHIFT), T(EQL), END )
#define MACRO_ARR2          MACRO( I(15), T(EQL), D(LSHIFT), T(DOT), U(LSHIFT), END )
#define MACRO_COPY_HST      MACRO( I(15), D(RGUI), D(LALT), T(X), U(LALT), U(RGUI), END )

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
    [0]  =   ACTION_FUNCTION(TEENSY_KEY),                    // FN0  - Teensy key
    [1]  =   ACTION_LAYER_TOGGLE(1),
    [2]  =   ACTION_LAYER_TOGGLE(2), // not sure I need this one (locked mouse nav)

    [5] =    ACTION_MODS_KEY(MOD_LSFT, KC_CAPS),
    [6] =    ACTION_MACRO(PWD1),

    [9]  =   ACTION_MODS_ONESHOT(MOD_LSFT),
    [10] =   ACTION_MODS_ONESHOT(MOD_RSFT),  // unused

    [12] =  ACTION_MODS_KEY(MOD_LALT, KC_LEFT),             // FN12 = Alt + <-
    [13] =  ACTION_MODS_KEY(MOD_LALT, KC_RIGHT),            // FN12 = Alt + ->
    [14] =  ACTION_MACRO(COPY_HST),

    [26] =   ACTION_LAYER_TAP_KEY(4, KC_A),
    [27] =   ACTION_LAYER_TAP_KEY(1, KC_SCLN),
    [28] =   ACTION_LAYER_TAP_KEY(3, KC_QUOT),
    [29] =   ACTION_LAYER_TAP_KEY(3, KC_F),
    [30] =   ACTION_LAYER_TAP_KEY(1, KC_D),
    [31] =   ACTION_LAYER_TAP_KEY(2, KC_S)
};

static const uint16_t PROGMEM fn_actions_3[] = {
    [1]  =  ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),             // FN1  = Shifted [ = {
    [2]  =  ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),             // FN2  = Shifted ] = }
    [3]  =  ACTION_MACRO(THIS_ARR),                         // FN3  = $this-> macro
    [4]  =  ACTION_MODS_KEY(MOD_LSFT, KC_9),                // FN4  = Shifted 9 = (
    [5]  =  ACTION_MODS_KEY(MOD_LSFT, KC_0),                // FN5  = Shifted 0 = )
    [6]  =  ACTION_MODS_KEY(MOD_LSFT, KC_MINS),             // FN6  = Shifted - = _
    [7]  =  ACTION_MACRO(ARR),                              // FN7  = -> macro
    [8]  =  ACTION_MODS_KEY(MOD_LSFT, KC_2),                // FN8  = Shifted 2 = @
    [9]  =  ACTION_MODS_KEY(MOD_LSFT, KC_4),                // FN9  = Shifted 4 = $
    [10] =  ACTION_MACRO(FORMAT_METHOD),                    // FN10 = Reformat current method macro
    [11] =  ACTION_MODS_KEY(MOD_LSFT, KC_F6),               // FN11 = Shifted F6
    [12] =  ACTION_MODS_KEY(MOD_LALT, KC_F7),               // FN11 = Alt + F7
    [13] =  ACTION_MODS_KEY(MOD_LSFT, KC_F11),              // FN11 = Shifted F11
    [14] =  ACTION_MACRO(NOT_EQ),                           // FN14 = != macro
    [15] =  ACTION_MODS_KEY(MOD_LSFT, KC_EQL),              // FN15 = Shifted = = +
    [16] =  ACTION_MACRO(ARR2),                             // FN16 = => macro
    [17] =  ACTION_MODS_KEY(MOD_LALT, KC_F4),               // FN17 = Alt + F4
    [18] =  ACTION_MODS_KEY(MOD_LSFT, KC_SCLN),             // FN18 = :
    [19] =  ACTION_MODS_KEY(MOD_LALT | MOD_LCTL, KC_LEFT),  // FN19 = Ctrl + Alt + <-
    [20] =  ACTION_MODS_KEY(MOD_LALT | MOD_LCTL, KC_RIGHT), // FN20 = Ctrl + Alt + ->
    [21] =  ACTION_MODS_KEY(MOD_LALT, KC_F1),               // FN21 = Alt + F1
    [22] =  ACTION_MODS_KEY(MOD_LCTL | MOD_LSFT, KC_ENTER), // FN22 = Ctrl + Shift + Enter
    [23] =  ACTION_MODS_KEY(MOD_LCTL, KC_RBRC),             // FN23 = Ctrl + [
    [24] =  ACTION_MODS_KEY(MOD_LCTL | MOD_LALT, KC_V),     // FN24 = Ctrl + Alt + V
    [25] =  ACTION_MODS_KEY(MOD_LCTL, KC_F5)                // FN25 = Ctrl + F5
};

static const uint16_t PROGMEM fn_actions_4[] = {
    [1]  =  ACTION_MODS_KEY(MOD_LSFT, KC_BSLS),             // FN1  = Shifted BackSlash // " in Workman
    [2]  =  ACTION_MODS_KEY(MOD_LSFT, KC_MINS),             // FN2  = Shifted Minus     // \ in Workman
    [3]  =  ACTION_MODS_KEY(MOD_LSFT, KC_COMM),             // FN3  = Shifted comma     // < in Workman
    [4]  =  ACTION_MODS_KEY(MOD_LSFT, KC_DOT),              // FN4  = Shifted dot       // > in Workman
    [5]  =  ACTION_MODS_KEY(MOD_LSFT, KC_SLSH),             // FN5  = Shifted slash     // ? in Workman
};

static const uint16_t PROGMEM fn_actions_7[] = {
//    [0]  =  ACTION_MACRO(XMONAD_RESET),                     // FN0  = xmonad-reanimator
//    [1]  =  ACTION_MACRO(PASSWORD1),                        // FN1  = default password
//    [2]  =  ACTION_MACRO(PASSWORD1),                        // FN2  = other password
//    [3]  =  ACTION_MACRO(PASSWORD1),                        // FN3  = mega password
};

static const uint16_t PROGMEM fn_actions_9[] = {
    [0]  =  ACTION_MODS_KEY(MOD_LCTL,          KC_P0),      // FN0  = Ctrl+0
    [1]  =  ACTION_MODS_KEY(MOD_LALT,          KC_P1),      // FN1  = Alt+1
    [2]  =  ACTION_MODS_KEY(MOD_LALT,          KC_P2),      // FN2  = Alt+2
    [3]  =  ACTION_MODS_KEY(MOD_LALT,          KC_P3),      // FN3  = Alt+3
    [4]  =  ACTION_MODS_KEY(MOD_LALT,          KC_P4),      // FN4  = Alt+4
    [5]  =  ACTION_MODS_KEY(MOD_LALT,          KC_P5),      // FN5  = Alt+5
    [6]  =  ACTION_MODS_KEY(MOD_LALT,          KC_P6),      // FN6  = Alt+6
    [7]  =  ACTION_MODS_KEY(MOD_LALT,          KC_P7),      // FN7  = Alt+7
    [8]  =  ACTION_MODS_KEY(MOD_LALT,          KC_P8),      // FN8  = Alt+8
    [9]  =  ACTION_MODS_KEY(MOD_LALT,          KC_P9),      // FN9  = Alt+9
    [10] =  ACTION_MODS_KEY(MOD_LCTL|MOD_LSFT, KC_TAB),     // FN10 = Ctrl+Shift+Tab
    [11] =  ACTION_MODS_KEY(MOD_LCTL,          KC_TAB),     // FN11 = Ctrl+Tab
    [12] =  ACTION_MODS_KEY(MOD_LCTL|MOD_LSFT, KC_PGUP),    // FN12 = Ctrl+Shift+PgUp
    [13] =  ACTION_MODS_KEY(MOD_LCTL|MOD_LSFT, KC_PGDN),    // FN13 = Ctrl+Shift+PgDn
    [14] =  ACTION_MODS_KEY(MOD_LCTL,          KC_PMNS),    // FN14 = Ctrl+Pad Minus
    [15] =  ACTION_MODS_KEY(MOD_LCTL,          KC_PPLS),    // FN15 = Ctrl+Pad Plus
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    // print("action_function called\n");
    // print("id  = "); phex(id); print("\n");
    // print("opt = "); phex(opt); print("\n");

    if (id == TEENSY_KEY) {
        clear_keyboard();
        print("\n\nJump to bootloader... ");
        _delay_ms(50);
        bootloader_jump(); // should not return
        print("not supported.\n");
    }

    /*
    if (id == L_CTRL_ALT_ENT || id == R_CTRL_ALT_ENT) {
        if (record->tap.count == 0 || record->tap.interrupted) {
            uint8_t weak_mods;
            uint8_t layer;

            if (id == L_CTRL_ALT_ENT) {
                weak_mods = MOD_BIT(KC_LCTL) | MOD_BIT(KC_LALT);
                layer     = 5;
            } else {
                weak_mods = MOD_BIT(KC_RCTL) | MOD_BIT(KC_RALT);
                layer     = 6;
            }

            if (record->event.pressed) {
                layer_on(layer);
                add_weak_mods(weak_mods);
            } else {
                del_weak_mods(weak_mods);
                layer_off(layer);
            }
        } else {
            if (record->event.pressed) {
                add_key(KC_ENT);
                send_keyboard_report();
            } else {
                del_key(KC_ENT);
                send_keyboard_report();
            }
        }
    }
    */


/*
 * just an example of custom key implementation
 * not really needed with custom keymap_fn_to_action(),
 * because it will allow you to have 32 FN** keys on EACH layer
 */

/*
    keyevent_t event = record->event;

    if (id == CUSTOM_KEY) {
        uint8_t layer = biton32(layer_state);
        uint8_t col = event.key.col;
        uint8_t row = event.key.row;
        uint8_t handled = 0;

        if (event.pressed) {
            if (layer == XXX && col == XXX && row == XXX) {
                    action_macro_play(
                        MACRO(
                            ...........
                        END)
                    );
                    handled++;
                }
            }
        }

        if (!handled) {
            print("custom key not handled");
            print(": layer "); pdec(layer);
            print(", col "); pdec(col);
            print(", row "); pdec(row);
            print("\n");
        }
    }
*/

}

// #include "keymap_passwords.h"
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
    if (record->event.pressed) {
        switch (id) {
            case THIS_ARR:       return MACRO_THIS_ARR;
            case ARR:            return MACRO_ARR;
            case FORMAT_METHOD:  return MACRO_FORMAT_METHOD;
            case NOT_EQ:         return MACRO_NOT_EQ;
            case ARR2:           return MACRO_ARR2;
            case PWD1:           return MACRO_PWD1;
            case COPY_HST:       return MACRO_COPY_HST;
        }
    }
    return MACRO_NONE;
}

#define FN_ACTIONS_SIZE     (sizeof(fn_actions)   / sizeof(fn_actions[0]))
#define FN_ACTIONS_3_SIZE   (sizeof(fn_actions_3) / sizeof(fn_actions_3[0]))
#define FN_ACTIONS_4_SIZE   (sizeof(fn_actions_4) / sizeof(fn_actions_4[0]))
#define FN_ACTIONS_7_SIZE   (sizeof(fn_actions_7) / sizeof(fn_actions_7[0]))
#define FN_ACTIONS_9_SIZE   (sizeof(fn_actions_9) / sizeof(fn_actions_9[0]))

/*
 * translates Fn keycode to action
 * for some layers, use different translation table
 */
action_t keymap_fn_to_action(uint8_t keycode)
{
    uint8_t layer = biton32(layer_state);

    action_t action;
    action.code = ACTION_NO;

    if (layer == 3 && FN_INDEX(keycode) < FN_ACTIONS_3_SIZE) {
        action.code = pgm_read_word(&fn_actions_3[FN_INDEX(keycode)]);
    }

    /*
    if (layer == 4 && FN_INDEX(keycode) < FN_ACTIONS_4_SIZE) {
        action.code = pgm_read_word(&fn_actions_4[FN_INDEX(keycode)]);
    }

    if (layer == 7 && FN_INDEX(keycode) < FN_ACTIONS_7_SIZE) {
        action.code = pgm_read_word(&fn_actions_7[FN_INDEX(keycode)]);
    }

    if (layer == 9 && FN_INDEX(keycode) < FN_ACTIONS_9_SIZE) {
        action.code = pgm_read_word(&fn_actions_9[FN_INDEX(keycode)]);
    }
    */

    // by default, use fn_actions from default layer 0
    // this is needed to get mapping for same key, that was used switch to some layer,
    // to have possibility to switch layers back
    if (action.code == ACTION_NO && FN_INDEX(keycode) < FN_ACTIONS_SIZE) {
        action.code = pgm_read_word(&fn_actions[FN_INDEX(keycode)]);
    }

    return action;
}

