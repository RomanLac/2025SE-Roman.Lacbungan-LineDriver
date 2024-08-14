#include "lineSensor.h"

lineSensor::lineSensor(int pin) : sensorPin(pin) {
  this->sensorPin = sensorPin;
}

void lineSensor::init() {
  pinMode(sensorPin,INPUT);
}

// val should be an int
bool lineSensor::isLineDetected() {
  int val = digitalRead(sensorPin);
  return val == HIGH;
}
