#ifndef LEDARRAY_H
#define LEDARRAY_H

#include <ArduinoGraphics.h>
#include <Arduino_LED_Matrix.h>
#include <Arduino.h>
#include "displayInterface.h"

class ledArray : public displayInterface {
public:
  ledArray();

  void init() override;
  
  // symbols
  void readySymbol() override;
  void tickSymbol() override;
  void crossSymbol() override;
  void progressSymbol() override;
  void leftSymbol() override;
  void rightSymbol() override;

private:
  ArduinoLEDMatrix matrix;
  
};

#endif // LEDARRAY_H