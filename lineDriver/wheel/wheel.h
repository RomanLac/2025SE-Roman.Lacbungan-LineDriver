#ifndef WHEEL_H
#define WHEEL_H

#include <Servo.h>
#include <Arduino.h>

class wheel {
public:
    wheel(byte pin);
    
    void init();
    void stop();
    void forward();
    void turnLeft();
    void turnRight();
    void backward();

    bool setSpeed();

private:
    Servo servo1;
    byte _pin;

};

#endif // WHEEL_H