#include "lineSensor.h"

lineSensor::lineSensor(int pin) : sensorPin(pin), val(LOW) {
  Serial.begin(9600);
}

void lineSensor::init() {
  pinMode(sensorPin,INPUT);
}

bool lineSensor::isLineDetected() {
  val = digitalRead(sensorPin);
  return val == HIGH;
}
