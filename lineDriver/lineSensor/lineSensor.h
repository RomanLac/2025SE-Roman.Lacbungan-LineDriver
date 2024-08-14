#ifndef LINESENSOR_H
#define LINESENSOR_H

#include <Arduino.h>

class lineSensor {
public:
  lineSensor() {}
  lineSensor(int sensorPin);

  void init();

  // line detection
  bool isLineDetected();

private:
  int sensorPin;
  int val;

};

#endif // LINESENSOR_H