#include "PushButton.h" //include PB library

PushButton::PushButton(int p) { 
  pin = p; //pin equals p
  state = LOW; //state of PB when not pressed
  lastReading = LOW; //last reading of PB state
  lastDebounceTime = 0; //previous debounce
  debounceDelay = 50; //debounce delay
  pinMode(pin, INPUT); //set pin as input
}

int PushButton::getState() { //get state of PB
  int reading = digitalRead(pin); //read state of pin

  if (reading != lastReading) { //check if state changed
    lastDebounceTime = millis(); //set millis as debounce time
  }

  if ((millis() - lastDebounceTime) > debounceDelay) { //check if previous debounce is greater than debounce value
    if (reading != state) { //read if buttonstate changed
      state = reading; //buttonstate
    }
  }

  lastReading = reading; //save the reading state of pb
  return state; //reset
}