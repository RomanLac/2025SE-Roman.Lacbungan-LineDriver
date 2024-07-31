#include "lineSensor.h"

// constructor
ledArray::ledArray(byte pin) {
    _pin = pin;
}

// initialize the sensor
void ledArray::init() {
    pinMode(_pin, INPUT);
}

// private method: if a line is detected
bool ledArray::ready() {

}
