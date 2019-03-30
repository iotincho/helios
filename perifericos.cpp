#include "perifericos.h"
#include "actuadores.h"
/**
* Interfaz para cualquier periferico que sea
* obserbable. Tiene dos estados de obserbacion,
* uno con el motor encendido (estado normal),
* y otro cuando el motor se apaga para bajarse.
**/
Periferico::Periferico(int connected_pin){
  this->connected_pin = connected_pin;
}

/**
* Lamp representa alguna luz que tenga el auto
* y nececite ser verificada continuamente.
**/

Lamp::Lamp(int connected_pin, Buzzer buzzer):Periferico(connected_pin){
  this->buzzer = buzzer;
}

int Lamp::is_on(){
    return !(digitalRead(this->connected_pin));
  }

void Lamp::setup() {
  pinMode(connected_pin, INPUT_PULLUP);
}

int Lamp::verify_whit_engine_on(){
    if(!is_on()){
      buzzer.short_beep();
      return 1;
    }
    return SUCESS;
}

int Lamp::verify_whit_engine_off(){
    if(is_on()){
      buzzer.short_beep();
      return 1;
    }
    return SUCESS;
}
