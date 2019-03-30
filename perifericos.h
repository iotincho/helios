#ifndef PERIFERICOS_H
#define PERIFERICOS_H
#include <Arduino.h>
#include "actuadores.h"

#ifndef SUCESS
#define SUCESS 0
#endif

class Periferico{
  protected:
    int connected_pin;
  public:
    Periferico(int connected_pin);
    virtual void setup()=0;
    virtual int verify_whit_engine_on()=0;
    virtual int verify_whit_engine_off()=0;
};

class Lamp : public Periferico {
  private:
    Buzzer buzzer;
    int is_on();
  public:
    Lamp(int connected_pin, Buzzer buzzer);
    void setup();
    int verify_whit_engine_on();
    int verify_whit_engine_off();
};




















#endif
