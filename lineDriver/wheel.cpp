#include "wheel.h"  

// constructor
wheel::wheel(int servoPin1, int servoPin2) {
  this->servoPin1 = servoPin1; // left
  this->servoPin2 = servoPin2; // right
}

// initialize the sensor
void wheel::init() {
  servo1.attach(servoPin1, 700, 2300);
  servo2.attach(servoPin2, 700, 2300);
}

void wheel::moveForwards() {
  servo1.writeMicroseconds(1600);
  servo2.writeMicroseconds(1400);
}

// unnecessary
void wheel::moveBackwards() {
  servo1.writeMicroseconds(1500);
  servo2.writeMicroseconds(1500); 
}

void wheel::turnLeft() {
  servo1.writeMicroseconds(1600);
  servo2.writeMicroseconds(1500);
}

void wheel::turnRight() {
  servo1.writeMicroseconds(1500);
  servo2.writeMicroseconds(1400);
}

void wheel::stop() {
  servo1.writeMicroseconds(1500);
  servo2.writeMicroseconds(1500);
}

// not setup yet
bool wheel::setSpeed() {
  return true;
}