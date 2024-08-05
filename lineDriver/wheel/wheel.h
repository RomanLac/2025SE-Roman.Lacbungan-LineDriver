#ifndef WHEEL_H
#define WHEEL_H

#include <Servo.h>

class wheel {
public:
    wheel(byte pin1, byte pin2);

    void init();

    bool setSpeed();
    bool stop();
    bool forward();
    bool backward();
    bool turnLeft();
    bool turnRight();

private:
    Servo _servo1;
    Servo _servo2;
    byte _pin1;
    byte _pin2;
};

#endif // WHEEL_H