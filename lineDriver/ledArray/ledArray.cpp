#include "ledArray.h"

// constructor
ledArray::ledArray(byte pin) {
    _pin = pin;
}

// initialize the sensor
void ledArray::ledArray() {
    pinMode(_pin, INPUT);
}

// private method:
bool ledArray::readySymbol() {
  
}

bool ledArray::tickSymbol() {

}

bool ledArray::crossSymbol() {

}

bool ledArray::progressSymbol() {

}