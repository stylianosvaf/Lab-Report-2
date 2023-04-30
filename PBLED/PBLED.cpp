#include "PBLED.h" //include library

Button::Button(int p, unsigned long delay) {
  pin = p; //pin equal p
  debounceDelay = delay; //debounce delay equal delay
  lastDebounceTime = 0; //previous debounce time
  state = LOW; //state value
  lastButtonState = LOW; //previous PB state
}

int Button::read() { //read PB
  int reading = digitalRead(pin); //read value of PB
  if (reading != lastButtonState) { //read last button state 
    lastDebounceTime = millis(); //lasty debounce time in millis
  }
  if ((millis() - lastDebounceTime) > debounceDelay) { //check if last debounce time is greater than debounce delay
    if (reading != state) { //read PB state
      state = reading; //reading PB state
      if (state == HIGH) { //if PB is HIGH
        return 1; //return value
      }
    }
  }
  lastButtonState = reading; //read last PB state
  return 0; //return value
}

LED::LED(int p) { 
  pin = p; //pin equal p
  pinMode(pin, OUTPUT); //set pin as output
}

void LED::on() { //led on
  digitalWrite(pin, HIGH); //set pin to HIGH
}

void LED::off() { //led off
  digitalWrite(pin, LOW); //set pin to LOW
}