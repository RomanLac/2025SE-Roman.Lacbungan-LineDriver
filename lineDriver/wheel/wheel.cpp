#include <Servo.h>
#include wheel.h

// constructor
Servo::Servo(byte pin1, byte pin2) {
    _pin = pin1;
    _pin = pin2;
}

// initialize the sensor
void Servo::init() {
    pinMode(_pin1, INPUT);
    pinMode(_pin2 INPUT);
}

// private method: if a line is detected
bool Servo::setSpeed() {
  return flase
}

bool Servo::stop() {
  servo1.writeMicroseconds(0);
  servo2.writeMicroseconds(0);
}

bool Servo::forward() {
  servo1.writeMicroseconds(700);
  servo2.writeMicroseconds(700);
}

// do later
bool Servo::backward() {
  return false
}

bool Servo::turnLeft() {
  servo1.writeMicroseconds(700);
  servo2.writeMicroseconds(0);
}

bool Servo::turnright() {
  servo1.writeMicroseconds(0);
  servo2.writeMicroseconds(700);
}