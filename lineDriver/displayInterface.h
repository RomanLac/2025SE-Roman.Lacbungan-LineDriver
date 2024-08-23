#ifndef DISPLAYINTERFACE_H
#define DISPLAYINTERFACE_H

class displayInterface {
public:
  virtual ~displayInterface() = default;
  virtual void init() = 0;
  virtual void readySymbol() = 0;
  virtual void tickSymbol() = 0;
  virtual void crossSymbol() = 0;
  virtual void progressSymbol() = 0;
  virtual void leftSymbol() = 0;
  virtual void rightSymbol() = 0;

};

#endif // DISPLAYINTERFACE_H
