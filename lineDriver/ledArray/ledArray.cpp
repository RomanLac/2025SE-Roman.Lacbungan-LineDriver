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

ledArray::ledArray() {}

void ledArray::init() {
  // copied from example code
  Serial.begin(9600);
   matrix.begin();
   matrix.textFont(Font_5x7);
   matrix.textScrollSpeed(100);
   matrix.stroke(0xFF, 0, 0);
   matrix.beginText(0, 1, 0xFF, 0, 0);
   matrix.print("V00.00.01");
   matrix.endText(SCROLL_LEFT);
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