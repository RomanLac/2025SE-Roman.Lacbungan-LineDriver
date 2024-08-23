#ifndef DRIVER_H
#define DRIVER_H

class driver {
public:
  virtual ~driver() = default;
  virtual void init() = 0;
  virtual void run() = 0;
  
};

#endif // DRIVER_H