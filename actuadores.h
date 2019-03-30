#ifndef ACTUADORES_H
#define ACTUADORES_H

#include <Arduino.h>

class Actuador{
  protected:
    int connected_pin;
  public:
    Actuador(){}
    Actuador(int connected_pin);
    virtual void setup()=0;
};

class Led : public Actuador{
  public:
    Led(int connected_pin);
    void setup();
    void on();
    void off();
};

class BuiltInLed : Led{
  public:
    BuiltInLed();
};

class Buzzer : Actuador{
#define SHORT_BEEP_DURATION 100
  public:
    Buzzer(){}
    Buzzer(int connected_pin);
    void setup();
    void on();
    void off();
    void beep(int beep_ms);
    void short_beep();
};




#endif
