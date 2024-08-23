#ifndef LINESENSOR_H
#define LINESENSOR_H

#include <Arduino.h>
#include "sensorInterface.h"

class lineSensor : public sensorInterface {
public:
  lineSensor() {}
  lineSensor(int sensorPin);

  void init() override;
  bool isLineDetected() override; 

private:
  int sensorPin;
  int val;
  
};

#endif // LINESENSOR_H