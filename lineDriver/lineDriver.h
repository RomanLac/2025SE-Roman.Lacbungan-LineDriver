#ifndef LINEDRIVER_H
#define LINEDRIVER_H

#include "driver.h"
#include "ledArray.h"
#include "lineSensor.h"
#include "wheel.h"

class lineDriver : public driver {
private:
  ledArray& myLedArray;
  lineSensor& myLineSensorLeft;
  lineSensor& myLineSensorRight;
  wheel& myWheel;

public:
  lineDriver(ledArray& ledArray, lineSensor& leftSensor, lineSensor& rightSensor, wheel& wheel);
  void init() override;
  void run() override;

};

#endif // LINEDRIVER_H