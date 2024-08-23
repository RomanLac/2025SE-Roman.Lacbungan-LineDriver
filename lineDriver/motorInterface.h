#ifndef MOTOR_H
#define MOTOR_H

class motorInterface {
public:
  virtual ~motorInterface() = default;
  virtual void init() = 0;
  virtual void moveForwards() = 0;
  virtual void moveBackwards() = 0;
  virtual void turnLeft() = 0;
  virtual void turnRight() = 0;
  virtual void stop() = 0;
  virtual bool setSpeed() = 0;

protected:
  int speed;

};

#endif // MOTOR_H
