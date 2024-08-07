#include "lineSensor.h"

// constructor
lineSensor::lineSensor(byte pin) {
    Serial.begin(9600);
    _pin = pin;
}

// initialize the sensor
void lineSensor::init() {
    pinMode(_pin, INPUT);
}

// public methods
bool lineSensor::isLineDetected() {
    const int threshold = 500;
    return digitalRead(_pin) == HIGH;
}
