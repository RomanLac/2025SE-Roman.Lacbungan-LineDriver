// main ino

// led user interface
#include "ledArray/ledArray.h"
#include "ledArray/ledArray.cpp"

ledArray myLedArray;

// line sensor
#include "lineSensor/lineSensor.h"
#include "lineSensor/lineSensor.cpp"

#define LINE_SENSOR_PIN1 A0 // left
#define LINE_SENSOR_PIN2 A1 // right

lineSensor myLineSensorLeft(LINE_SENSOR_PIN1);
lineSensor myLineSensorRight(LINE_SENSOR_PIN2);

// continous servo
#include "wheel/wheel.h"
#include "wheel/wheel.cpp"

#define WHEEL_PIN1 9
#define WHEEL_PIN2 5

wheel myWheel(WHEEL_PIN1, WHEEL_PIN2);

// code starts here

void setup() {
  // check
  pinMode(5, OUTPUT); // fixed

  // initialize
  myLedArray.init();
  myLineSensorLeft.init();
  myLineSensorRight.init();

  // ready symbol
  myLedArray.readySymbol();

  delay(500);
  myWheel.init();
  Serial.println("wheel");

  // progress symbol
  myLedArray.progressSymbol();

}

void loop() {    
  // move forwards
  if (myLineSensorLeft.isLineDetected() && myLineSensorRight.isLineDetected()) {
    myWheel.moveForwards();

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

