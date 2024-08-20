// main ino

// user interface
#include "ledArray/ledArray.h"
#include "ledArray/ledArray.cpp"

ledArray myLedArray;

// line sensor
#include "lineSensor/lineSensor.h"
#include "lineSensor/lineSensor.cpp"

lineSensor myLineSensorLeft(A5); // left
lineSensor myLineSensorRight(A1); // right

// continous servo
#include "wheel/wheel.h"
#include "wheel/wheel.cpp"

wheel myWheel(9,10);

// code starts here

void setup() {
  // initialize
  myLedArray.init();
  myLineSensorLeft.init();
  myLineSensorRight.init();

  // ready symbol
  myLedArray.readySymbol();

  delay(500);
  myWheel.init();
  Serial.println("Wheel");

  // progress symbol
  myLedArray.progressSymbol();

}

void loop() {    

  // move forwards
  if (myLineSensorLeft.isLineDetected() && myLineSensorRight.isLineDetected()) {
    myWheel.forwards();

  // turn left
  } else if (myLineSensorRight.isLineDetected()) {
    myWheel.turnLeft();

  // turn right
  } else if (myLineSensorLeft.isLineDetected()) {
    myWheel.turnRight();

  } else {
    myWheel.stop();
  }

  delay(50);

}

