/* pressing PB will switch one LED on then another LED turning off the previous one */

#include "PBLED.h" //include library

Button button(2, 50); //PB pin and debounce time
LED leds[] = {LED(3), LED(4), LED(5), LED(6)}; //LED pins
int numLeds = sizeof(leds) / sizeof(LED); //number of LEDs
int currentLed = 0; //current LED

void setup() {
Serial.begin(9600); //start serial monitor
}

void loop() {

  int buttonState = button.read(); //read PB state
  if (buttonState == 1) { //PB state
    currentLed = (currentLed + 1) % numLeds; //selected LED
    Serial.print("Current LED: "); //print which LED is on
    Serial.println(currentLed); //read LED
  }
  for (int i = 0; i < numLeds; i++) { 
    if (i == currentLed) { //if i is currentLED then turn on else turn the rest off
      leds[i].on();
    } else {
      leds[i].off(); 
    }
  }
  delay(10); //delay
}