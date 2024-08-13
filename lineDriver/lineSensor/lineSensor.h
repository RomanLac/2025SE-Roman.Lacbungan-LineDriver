#ifndef LINESENSOR_H
#define LINESENSOR_H

#include <Arduino.h>

class lineSensor {
public:
  lineSensor(int sensorPin);

  void init();

  // stores readings
  bool isLineDetected();

private:
  int sensorPin;
  int val;

};

#endif // LINESENSOR_H