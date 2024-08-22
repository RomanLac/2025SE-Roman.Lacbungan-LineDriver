#include "lineDriver.h"

#define LINE_SENSOR_PIN1 A0 // left
#define LINE_SENSOR_PIN2 A1 // right
#define WHEEL_PIN1 9
#define WHEEL_PIN2 5

lineDriver::lineDriver()
: myLineSensorLeft(LINE_SENSOR_PIN1),
  myLineSensorRight(LINE_SENSOR_PIN2),
  myWheel(WHEEL_PIN1, WHEEL_PIN2) {}

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