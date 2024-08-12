// main

// user interface
#include "ledArray/ledArray.h"
#include "ledArray/ledArray.cpp"

ledArray myLedArray;

// line sensor
#include "lineSensor/lineSensor.h"
#include "lineSensor/lineSensor.cpp"

lineSensor myLineSensor1(1);
lineSensor myLineSensor2(2);

// servo
#include "wheel/wheel.h"
#include "wheel/wheel.cpp"

wheel myWheel;

// code starts here

void setup() {
  myLedArray.init();
}

void loop() {

}

