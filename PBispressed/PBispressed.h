#ifndef PBISPRESSED_H //if not defined
#define PBISPRESSED_H //define library

#include <Arduino.h> //include library

class PushButton { 
  private: 
    int pin; //PB pin
    int state; //state of PB
    int lastReading; //last reading of PB
    unsigned long lastDebounceTime; //previous debounce time
    unsigned long debounceDelay; //debounce delay

  public: //public
    PushButton(int p); //constructor
    int getState(); //get state of PB
};

#endif