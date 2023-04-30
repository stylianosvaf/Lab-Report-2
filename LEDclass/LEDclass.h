#ifndef LEDCLASS_H //if not defined
#define LEDCLASS_H //define library

class LED { 
  private: 
    int pin; //LED pin
    bool state; //state of LED

  public:
    LED(int pin); //constructor
    void on(); //LED on
    void off(); //LED off
    void toggle(); //toggle LED
};

#endif