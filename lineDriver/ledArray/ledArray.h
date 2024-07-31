#ifndef LEDARRAY_H
#define LEDARRAY_H

class ledArray {
public:
  // constructor (example)
  ledArray(int numLEDs, int dataPin);

  // public methods
  void begin();
  void setLed(int ledIndex, bool state);
  void clear();
  void show();

  bool ready();
  bool tick();
  bool cross();
  bool progress();

private:
  int _numLEDs;
  int _dataPin;
  // other private members as needed

};

#endif // LEDARRAY_H
