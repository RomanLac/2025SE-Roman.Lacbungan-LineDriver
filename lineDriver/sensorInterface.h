#ifndef SENSORINTERFACE_H
#define SENSORINTERFACE_H

class sensorInterface {
public:
  virtual ~sensorInterface() = default;
  virtual void init() = 0;
  virtual bool isLineDetected() = 0;

};

#endif // SENSORINTERFACE_H