#include "ledArray.h"

const uint32_t readySymbol[4] = {
  0x0000000,
  0x0000040,
  0x0001800,
  0x00fc000
};

const uint32_t tickSymbol[4] = {
  0x0000000,
  0x0000020,
  0x0001840,
  0x00fc080
};

const uint32_t crossSymbol[4] = {
  0x00000c0,
  0x0003030,
  0x00c030c,
  0x300c030
};

const uint32_t progressSymbol[4] = {
  0x0000040,
  0x0003030,
  0x00c0c0c,
  0x0003030
};

// constructor
ledArray::ledArray() {
  Serial.begin(9600);
  matrix.begin();
}

/* initialize the sensor
void ledArray::init() {
  pinMode(_pin, OUTPUT);
}
*/

void ledArray::readySymbol() {
  matrix.loadFrame(readySymbol);
  delay(500);
}

void ledArray::tickSymbol() {
  matrix.loadFrame(tickSymbol);
  delay(500);
}

void ledArray::crossSymbol() {
  matrix.loadFrame(crossSymbol);
  delay(500);
}

void ledArray::progressSymbol() {
  matrix.loadFrame(progressSymbol);
  delay(500);
}