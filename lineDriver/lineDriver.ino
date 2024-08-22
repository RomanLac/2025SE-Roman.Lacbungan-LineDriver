#include "ledArray/ledArray.cpp"
#include "lineSensor/lineSensor.cpp"
#include "wheel/wheel.cpp"

#include "lineDriver.h"

lineDriver myLineDriver;

void setup() {
  Serial.begin(9600);
  myLineDriver.init();
}

void loop() {
  myLineDriver.run();
}