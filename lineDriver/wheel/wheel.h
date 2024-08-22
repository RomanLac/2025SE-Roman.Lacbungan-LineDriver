#ifndef WHEEL_H
#define WHEEL_H

#include <Servo.h>
#include <Arduino.h>

class wheel {
public:
  wheel() {}
  wheel(int servoPin1, int servoPin2);
    
  void init();

  // wheel controllers
  void moveForwards();
  void moveBackwards();
  void stop();

  // turns in place
  void turnLeft();
  void turnRight(); 

  // not setup yet
  bool setSpeed();

private:
  // both wheels are taken into account
  Servo servo1;
  Servo servo2;
  int servoPin1;
  int servoPin2;

};

#endif // WHEEL_H