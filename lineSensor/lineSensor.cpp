#include "lineSensor.h"

// constructor
lineSensor::lineSensor(byte pin) {
    _pin = pin;
}

// initialize the sensor
void lineSensor::init() {
    pinMode(_pin, INPUT);
}

// private method: if a line is detected
bool lineSensor::isLineDetected() {
    const int threshold = 500;
    return digitalRead(_pin) == HIGH;
}
