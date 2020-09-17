#pragma once

#ifdef AUDIO_ENABLE
    #define STARTUP_SONG SONG(PREONIC_SOUND)
    // #define STARTUP_SONG SONG(NO_SOUND)

    #define DEFAULT_LAYER_SONGS { SONG(QWERTY_SOUND), \
                                  SONG(COLEMAK_SOUND), \
                                  SONG(DVORAK_SOUND) \
                                }
#endif

#define MUSIC_MASK (keycode != KC_NO)

/*
 * MIDI options
 */

/* Prevent use of disabled MIDI features in the keymap */
//#define MIDI_ENABLE_STRICT 1

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/

#define MIDI_BASIC

/* enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
//#define MIDI_ADVANCED

/* override number of MIDI tone keycodes (each octave adds 12 keycodes and allocates 12 bytes) */
//#define MIDI_TONE_KEYCODE_OCTAVES 2

/*
 * Mouse options
 *
 * https://docs.qmk.fm/#/feature_mouse_keys
 *
 * Accelerated is default
 *
 * General Notes:
 * Interval of 16 is roughly equivalent to 1/60 of a second, ie. 60Hz
 */

/*
 * Accelerated mode
 *
 * The mouse accelerates to it's max speed
 */
#define MOUSEKEY_DELAY                256	    // Delay between pressing a movement key and cursor movement
#define MOUSEKEY_INTERVAL             8	    // Time between cursor movements
#define MOUSEKEY_MAX_SPEED            4	    // Maximum cursor speed at which acceleration stops
#define MOUSEKEY_TIME_TO_MAX          32	    // Time until maximum cursor speed is reached
//#define MOUSEKEY_WHEEL_DELAY          300	    // Delay between pressing a wheel key and wheel movement
//#define MOUSEKEY_WHEEL_INTERVAL       100	    // Time between wheel movements
//#define MOUSEKEY_WHEEL_MAX_SPEED      8	    // Maximum number of scroll steps per scroll action
//#define MOUSEKEY_WHEEL_TIME_TO_MAX    40	    // Time until maximum scroll speed is reached

/*
 * Constant mode
 *
 * The mouse moves at a constant rate defined by the settings
 * Either define 3 speed or Monetary speed selection to enable Constant mouse rate.
 */
//#define MK_3_SPEED	                // Enable constant cursor speeds
//#define MK_MOMENTARY_ACCEL            // Enable monentary speed selection
//#define MK_C_OFFSET_UNMOD	    16	    // Cursor offset per movement (unmodified)
//#define MK_C_INTERVAL_UNMOD	16	    // Time between cursor movements (unmodified)
#define MK_C_OFFSET_0	        1	    // Cursor offset per movement (KC_ACL0)
#define MK_C_INTERVAL_0	    8	    // Time between cursor movements (KC_ACL0)
#define MK_C_OFFSET_1	        2	    // Cursor offset per movement (KC_ACL1)
#define MK_C_INTERVAL_1	    8	    // Time between cursor movements (KC_ACL1)
#define MK_C_OFFSET_2	        8	    // Cursor offset per movement (KC_ACL2)
#define MK_C_INTERVAL_2	    8	    // Time between cursor movements (KC_ACL2)
//#define MK_W_OFFSET_UNMOD	    1	    // Scroll steps per scroll action (unmodified)
//#define MK_W_INTERVAL_UNMOD	40	    // Time between scroll steps (unmodified)
//#define MK_W_OFFSET_0	        1	    // Scroll steps per scroll action (KC_ACL0)
//#define MK_W_INTERVAL_0	    360	    // Time between scroll steps (KC_ACL0)
//#define MK_W_OFFSET_1	        1	    // Scroll steps per scroll action (KC_ACL1)
//#define MK_W_INTERVAL_1	    120	    // Time between scroll steps (KC_ACL1)
//#define MK_W_OFFSET_2	        1	    // Scroll steps per scroll action (KC_ACL2)
//#define MK_W_INTERVAL_2	    20	    // Time between scroll steps (KC_ACL2)

/*
 * Combined mode
 *
 * Acts like Accelerated mode, but allows you to specify the constant speed while holding the ACL keys
 */
#define MK_COMBINED
