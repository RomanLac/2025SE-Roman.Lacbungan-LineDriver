#include "ledArray.h"

// constructor
ledArray::ledArray(byte pin) {
    _pin = pin;
    pinMode(_pin, OUTPUT)
}

// initialize the sensor
void ledArray::ledArray() {
    pinMode(_pin, INPUT);
}

// private method:
bool ledArray::readySymbol() {
    const uint32_t readySymbol[] = {
        0x0000000,
        0x0000040,
        0x0001800,
        0x00fc000
};

return true
}

bool ledArray::tickSymbol() {
    const uint32_t tickSymbol[] = {
        0x0000000,
        0x0000020,
        0x0001840,
        0x00fc080
}:

return true
}

bool ledArray::crossSymbol() {
    const uint32_t crossSymbol[] = {
        0x00000c0,
        0x0003030,
        0x00c030c,
        0x300c030
};

return true
}

bool ledArray::progressSymbol() {
    const uint32_t hourglassSymbol[] = {
        0x0000040,
        0x0003030,
        0x00c0c0c,
        0x0003030
};

return true
}