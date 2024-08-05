#ifndef LINESENSOR_H
#define LINESENSOR_H

class lineSensor {
public:
    // constructor
    lineSensor(byte pin);

    void init();
    bool isLineDetected();

private:
    int _pin;
};

#endif // LINESENSOR_H