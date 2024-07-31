#include "lineSensor.h"

// constructor
lineSensor::lineSensor(byte pin) {
    _pin = pin;
}

// initialize the sensor
void lineSensor::init() {
    pinMode(_pin, INPUT);
}

// private method:
bool lineSensor::ready() {
  
}

bool lineSensor::tick() {

}

bool lineSensor::cross() {

}

bool lineSensor::progress() {

}