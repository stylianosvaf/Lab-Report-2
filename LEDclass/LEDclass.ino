/* Turning an LED on, off and with toggle using class */

#include "LEDclass.h" //include library

LED led(2); //set LED to pin 2

void setup() {
}

void loop() {
  
  led.on(); //on
  delay(1000); //delay
  led.off(); //off
  delay(1000); //delay
}