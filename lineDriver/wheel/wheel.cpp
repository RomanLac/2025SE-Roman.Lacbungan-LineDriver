#include "wheel.h"

// may change it so both wheels are controlled for less lines in main

// constructor
wheel::wheel(byte pin) {
    Serial.begin(9600);
    _pin = pin;
    servo1.attach(_pin);
}

// initialize the sensor
void wheel::init() {
// no init needed
}

void wheel::stop() {
  Serial.println("back");
  servo1.writeMicroseconds(0);
//  servo2.writeMicroseconds(0);
}

void wheel::forward() {
  Serial.println("forward");
  servo1.writeMicroseconds(1500);
//  servo2.writeMicroseconds(1500);
}

void wheel::backward() {
  Serial.println("backwards");
  servo1.writeMicroseconds(700);
//  servo2.writeMicroseconds(700);
}

void wheel::turnLeft() {
  Serial.println("left");
  servo1.writeMicroseconds(1500);
//  servo2.writeMicroseconds(0);
}

void wheel::turnRight() {
  Serial.println("right");
  servo1.writeMicroseconds(0);
//  servo2.writeMicroseconds(1500);
}

bool wheel::setSpeed() {
  return true;
}