#include "LED.h" //include libraries
#include <Arduino.h> 

LED::LED(int pin) { 
  this->pin = pin; //pin equal pin
  pinMode(pin, OUTPUT); //set pin as output
  state = LOW; //set state to low
}

void LED::on() { //LED on
  state = HIGH; //when state is high, LED on
  digitalWrite(pin, state); //set pin to state
}

void LED::off() { //LED off
  state = LOW; //when state is low, LED off
  digitalWrite(pin, state); //set pin to state
}

void LED::toggle() { //toggle LED
  state = !state; //state equals not state
  digitalWrite(pin, state); //state of LED
}