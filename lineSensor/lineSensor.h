#ifndef LINESENSOR_H
#define LINESENSOR_H

class lineSensor {
private:
    int _pin;

public:
    lineSensor(byte pin);

    void init();
    bool isLineDetected();
};

#endif // LINESENSOR_H