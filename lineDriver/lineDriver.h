#ifndef LINEDRIVER_H
#define LINEDRIVER_H

#include "ledArray/ledArray.h"
#include "lineSensor/lineSensor.h"
#include "wheel/wheel.h"

class lineDriver {
private:
  ledArray myLedArray;
  lineSensor myLineSensorLeft;
  lineSensor myLineSensorRight;
  wheel myWheel;

public:
  lineDriver();
  void init();
  void run();
};

#endif // LINEDRIVER_H