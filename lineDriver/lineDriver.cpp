#include "lineDriver.h"

lineDriver::lineDriver(ledArray& ledArray, lineSensor& leftSensor, lineSensor& rightSensor, wheel& wheel)
  : myLedArray(ledArray),
    myLineSensorLeft(leftSensor),
    myLineSensorRight(rightSensor),
    myWheel(wheel) {}

void lineDriver::init() {
  pinMode(5, OUTPUT); // fixed

  // init
  myLedArray.init();
  myLineSensorLeft.init();
  myLineSensorRight.init();

  myLedArray.readySymbol();

  // movement
  delay(500);
  myWheel.init();
  Serial.println("wheel");

  myLedArray.progressSymbol();
}

void lineDriver::run() {
  // forwards
  if (myLineSensorLeft.isLineDetected() && myLineSensorRight.isLineDetected()) {
    myWheel.moveForwards();

  // left
  } else if (myLineSensorRight.isLineDetected()) {
    myWheel.turnLeft();

  // right
  } else if (myLineSensorLeft.isLineDetected()) {
    myWheel.turnRight();
  
  // stop
  } else {
    myWheel.stop();
  }

  delay(50);
}