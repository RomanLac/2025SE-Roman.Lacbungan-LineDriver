#include "ledArray.h"

const uint32_t readySymbolData[4] = {
	0x0,
	0x420845,
	0x28210000,
	66
};

const uint32_t tickSymbolData[4] = {
	0x0,
	0x100201,
	0x40080000,
	66
};

const uint32_t crossSymbolData[4] = {
	0x10809,
	0x600600,
	0x90108000,
	66
};

const uint32_t progressSymbolData[4] = {
	0x30c29,
	0x42642642,
	0x9430c000,
	66
};

const uint32_t leftSymbolData[4] = {
	0x8018,
	0x3fc3fc1,
	0x80080000,
	66
};

const uint32_t rightSymbolData[4] = {
	0x1001,
	0x83fc3fc0,
	0x18010000,
	66
};

ledArray::ledArray() {}

void ledArray::init() {
  // copied from example code
  Serial.begin(9600);
   matrix.begin();
}

void ledArray::readySymbol() {
  matrix.loadFrame(readySymbolData);
  delay(500);
}

void ledArray::tickSymbol() {
  matrix.loadFrame(tickSymbolData);
  delay(500);
}

void ledArray::crossSymbol() {
  matrix.loadFrame(crossSymbolData);
  delay(500);
}

void ledArray::progressSymbol() {
  matrix.loadFrame(progressSymbolData);
  delay(500);
}

void ledArray::leftSymbol() {
  matrix.loadFrame(leftSymbolData);
  delay(500);
}

void ledArray::rightSymbol() {
  matrix.loadFrame(rightSymbolData);
  delay(500);
}