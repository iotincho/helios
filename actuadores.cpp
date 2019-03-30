#include "actuadores.h"

/** La clase actuador actua comom interfaz
* para los perifericos que pueden realizar acciones.
**/
Actuador::Actuador(int connected_pin){
      this->connected_pin = connected_pin;
    }


/** clase Led: Un simple led para indicar cosas.
*no tiene pin asignado para poder usarlo con cualquier
*led que se ponga.
**/
Led::Led(int connected_pin):Actuador(connected_pin){}
void Led::setup(){
      pinMode(connected_pin,OUTPUT);
}
void Led::on(){
  digitalWrite(connected_pin,HIGH);
}
void Led::off(){
  digitalWrite(connected_pin,LOW);
}

/** Una deficion Harcoded para el
* led que trae la placa.
**/
BuiltInLed::BuiltInLed():Led(LED_BUILTIN){}



/**
*  Un buzzer que se conecta a cualquier pin
**/

Buzzer::Buzzer(int connected_pin):Actuador(connected_pin){}
void Buzzer::setup(){
  pinMode(connected_pin,OUTPUT);
}

void Buzzer::on(){
  digitalWrite(connected_pin,HIGH);
}

void Buzzer::off(){
  digitalWrite(connected_pin,LOW);
}

void Buzzer::beep(int beep_ms){
    digitalWrite(connected_pin,HIGH);
    delay(beep_ms);
    digitalWrite(connected_pin,LOW);
    delay(beep_ms);
}

void Buzzer::short_beep(){
  beep(SHORT_BEEP_DURATION);
}
