#ifndef LINESENSOR_H
#define LINESENSOR_H

#include <Arduino.h>

class lineSensor {
public:
    // constructor
    lineSensor(byte pin);

    void init();

    // public methods
    bool isLineDetected();

private:
    int _pin;
};

#endif // LINESENSOR_H