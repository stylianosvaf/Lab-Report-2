#ifndef PBLED_H //if not defined
#define PBLED_H //define library

#include <Arduino.h> //include library

class Button { 
  private: 
    int pin; //PB pin
    unsigned long lastDebounceTime; //previous debounce time
    unsigned long debounceDelay; //debounce delay
    int state; //PB state
    int lastButtonState; //previous PB state

  public: 
    Button(int p, unsigned long delay); //PB delay
    int read(); //read PB
};

class LED { 
  private: 
    int pin; //LED pin

  public:
    LED(int p); //constructor
    void on(); //LED on
    void off(); //LED off
};

#endif