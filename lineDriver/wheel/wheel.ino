#include <Servo.h>
#include <Arduino.h>
#include "wheel.h"

wheel leftWheel(5); // Replace with your actual pin numbers
wheel rightWheel(7); // Replace with your actual pin numbers

static unsigned int degreeOfMovement = 180; 

void setup() {
  leftWheel.init();
  rightWheel.init();
}

void loop() {
  // Move forward for 5 seconds
  leftWheel.forward();
  rightWheel.forward();
  delay(500); // Move forward for 5 seconds

  // Stop both wheels
  leftWheel.stop();
  rightWheel.stop();
  delay(500);
}