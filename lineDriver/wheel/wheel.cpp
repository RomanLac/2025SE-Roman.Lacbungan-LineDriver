#include "wheel.h"

// constructor
wheel::wheel() {
  Serial.begin(9600);
}

// initialize the sensor
void wheel::init() {
  Serial.println("debug");

  // stop 700 // forward 1500 // backwards 2700

  servo1.attach(5, 700, 2300);
  Serial.println("first servo");

  servo2.attach(7, 700, 2300);
  Serial.println("second servo");
}

void wheel::stop() {
  Serial.println("stop");

  servo1.writeMicroseconds(0);
  servo2.writeMicroseconds(0);
}

void wheel::forwards() {
  Serial.println("forward");

  servo1.writeMicroseconds(1500);
  servo2.writeMicroseconds(1500);
}

void wheel::backwards() {
  Serial.println("backwards");

  servo1.writeMicroseconds(2700);
  servo2.writeMicroseconds(2700);
}

void wheel::turnLeft() {
  Serial.println("left");

  servo1.writeMicroseconds(1500);
}

void wheel::turnRight() {
  Serial.println("right");

  servo2.writeMicroseconds(1500);
}

// not setup yet
bool wheel::setSpeed() {
  return true;
}