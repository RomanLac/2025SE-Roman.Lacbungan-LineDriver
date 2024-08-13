#ifndef LEDARRAY_H
#define LEDARRAY_H

#include <ArduinoGraphics.h>
#include <Arduino_LED_Matrix.h>
#include <Arduino.h>

class ledArray {
public:
  ledArray();

  void init();

  // display symbols
  void readySymbol();
  void tickSymbol();
  void crossSymbol();
  void progressSymbol();

private:
  ArduinoLEDMatrix matrix;

};

#endif // LEDARRAY_H
