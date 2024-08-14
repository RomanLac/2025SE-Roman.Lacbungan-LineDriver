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
  void forwards();
  void backwards();
  void stop();

  //turns in place
  void turnLeft();
  void turnRight(); 

  // set in public for config
  bool setSpeed();

private:
  // both wheels are taken into account
  Servo servo1;
  Servo servo2;
  int servoPin1;
  int servoPin2;

};

#endif // WHEEL_H