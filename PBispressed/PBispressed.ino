/* PB class with isPressed method (with built-in debounce) */

#include <Arduino.h> //include libraries
#include "PBispressed.h" 

PushButton button(2); //PB connected to pin 2

void setup() {

Serial.begin(9600); // start serial monitor
}

void loop() {

  int buttonState = button.getState(); //get button state

  if (buttonState == HIGH) { //state of button
    Serial.println("Button is pressed"); //print "Button is pressed" on serial monitor
  }
}