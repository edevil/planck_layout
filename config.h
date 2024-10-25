#pragma once

#ifdef AUDIO_ENABLE
#define STARTUP_SONG SONG(PLANCK_SOUND)
#endif

#define MIDI_BASIC

#define ENCODER_RESOLUTION 4

/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/

#define USB_SUSPEND_WAKEUP_DELAY 0
#define NO_AUTO_SHIFT_TAB
#define NO_AUTO_SHIFT_SPECIAL
#define NO_AUTO_SHIFT_NUMERIC
#define SERIAL_NUMBER "ExmDb/b4L5Q"
#define LAYER_STATE_8BIT

#define RGB_MATRIX_STARTUP_SPD 60

