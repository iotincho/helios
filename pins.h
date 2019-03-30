#ifndef PINS_H
#define PINS_H
#include <Arduino.h>

#if defined(__AVR_ATmega328P__)

#define RIGHT_LAMP A0
#define LEFT_LAMP A1
#define BEEP_PIN 12

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
