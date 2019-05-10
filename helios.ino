#include "pins.h"
#include "perifericos.h"
#include "actuadores.h"

Buzzer buzzer = Buzzer(BEEP_PIN);
Lamp  rightLamp = Lamp(RIGHT_LAMP,buzzer);
Lamp  leftLamp = Lamp(LEFT_LAMP,buzzer);

void setup()
{
  buzzer.setup();
  rightLamp.setup();
  leftLamp.setup();
  delay(120000);
}

void loop() {
  // put your main code here, to run repeatedly:
  rightLamp.verify_whit_engine_on();
  leftLamp.verify_whit_engine_on();

}
