#ifndef LEDARRAY_H
#define LEDARRAY_H

#include "ArduinoGraphics.h"
#include "Arduino_LED_Matrix.h"
#include <Arduino.h>

ArduinoLEDMatrix matrix;

class ledArray {
public:
  // constructor
  ledArray();

  void init();

  // public methods
  void begin();
  void clear();
  void show();

  void readySymbol();
  void tickSymbol();
  void crossSymbol();
  void progressSymbol();

private:

};

#endif // LEDARRAY_H
