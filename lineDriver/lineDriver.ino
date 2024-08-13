// main ino

// user interface
#include "ledArray/ledArray.h"
#include "ledArray/ledArray.cpp"

ledArray myLedArray;

// line sensor
#include "lineSensor/lineSensor.h"
#include "lineSensor/lineSensor.cpp"

lineSensor myLineSensorLeft(1);
lineSensor myLineSensorRight(2);

// continous servo
#include "wheel/wheel.h"
#include "wheel/wheel.cpp"

wheel myWheel;

// code starts here

void setup() {
  myLedArray.init();
  myLineSensorLeft.init();
  myLineSensorRight.init();

  // ready symbol
  delay(500);
  myLedArray.readySymbol();

  // starts moving
  delay(500);
  myWheel.init();
  myLedArray.progressSymbol();

}

void loop() {
  if (myLineSensorLeft.isLineDetected()||myLineSensorRight.isLineDetected()) {
    
    // left
    if (myLineSensorLeft.isLineDetected()) {
      Serial.println("Left detected");
      myWheel.turnLeft();
      delay(100);
        
      } else {
        Serial.println("Left not detected");
      }

    // right
    if (myLineSensorRight.isLineDetected()) {
      Serial.println("Right detected");
      myWheel.turnRight();
      delay(100);

      } else {
        Serial.println("Right not detected");
      }

    // forwards else
    } else {
      myWheel.forwards();
    }
   

}

