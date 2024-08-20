#include "ledArray.h"

ledArray myLedArray;

void setup() {  
  myLedArray.init();

}

void loop() {
  myLedArray.readySymbol();
  delay(500);

  myLedArray.tickSymbol();
  delay(500);

  myLedArray.crossSymbol();
  delay(500);

  myLedArray.progressSymbol();
  delay(500);
  
  myLedArray.leftSymbol();
  delay(500);

  myLedArray.rightSymbol();
  delay(500);
  
}