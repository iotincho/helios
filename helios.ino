#include "pins.h"
#include "perifericos.h"
#include "actuadores.h"

Buzzer buzzer       = Buzzer(BEEP_PIN);
Lamp  rightLowBeam  = Lamp(RIGHT_LOW_BEAM,buzzer);
Lamp  leftLowBeam   = Lamp(LEFT_LOW_BEAM,buzzer);
Lamp  rightHighBeam = Lamp(RIGH_HIGH_BEAM,null);
Lamp  leftHighBeam  = Lamp(LEFT_HIGH_BEAM,null);

void setup()
{
  buzzer.setup();
  rightLowBeam.setup();
  leftLowBeam.setup();
  leftHighBeam.setup();
  rightHighBeam.setup();
  delay(40000);
}

void loop() {
  // put your main code here, to run repeatedly:
  rightLamp.verify_whit_engine_on();
  leftLamp.verify_whit_engine_on();

}
