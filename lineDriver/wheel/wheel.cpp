#include "wheel.h"

// constructor
wheel::wheel(int servoPin1, int servoPin2) {
  this->servoPin1 = servoPin1;
  this->servoPin2 = servoPin2;
}

// initialize the sensor
void wheel::init() {
  servo1.attach(servoPin1, 700, 2300);
  servo2.attach(servoPin2, 700, 2300);
}

void wheel::forwards() {
  servo1.writeMicroseconds(1500);
  servo2.writeMicroseconds(1500);
}

void wheel::backwards() {
  servo1.writeMicroseconds(2300);
  servo2.writeMicroseconds(2300);
}

void wheel::turnLeft() {
  servo1.writeMicroseconds(700);
  servo2.writeMicroseconds(2300);
}

void wheel::turnRight() {
  servo2.writeMicroseconds(2300);
  servo2.writeMicroseconds(700);
}

void wheel::stop() {
  servo1.writeMicroseconds(0);
  servo2.writeMicroseconds(0);
}

// not setup yet
bool wheel::setSpeed() {
  return true;
}