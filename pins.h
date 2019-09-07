#ifndef PINS_H
#define PINS_H
#include <Arduino.h>

#if defined(__AVR_ATmega328P__)

#define RIGHT_LOW_BEAM  A0
#define LEFT_LOW_BEAM   A1
#define SLEEP           A2
#define ENGINE_ON       A4
#define RIGHT_HIGH_BEAM A5
#define LEFT_HIGH_BEAM  A6
#define BEEP_PIN        A7

/*
static inline void true_setup()
          {
          // put your setup code here, to run once:
          pinMode(BEEP_PIN,OUTPUT);
          pinMode(RIGHT_LAMP, INPUT_PULLUP);  // set pull-up on analog pin 0
          pinMode(LEFT_LAMP, INPUT_PULLUP);  // set pull-up on analog pin 0
          }
*/

#endif

#endif
