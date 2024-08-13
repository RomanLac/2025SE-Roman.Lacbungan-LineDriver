#include "ledArray.h"

ledArray ledArray;

void setup() {
  ledArray.init();

}

void loop() {
  ledArray.readySymbol();
  delay(500);

  ledArray.tickSymbol();
  delay(500);

  ledArray.crossSymbol();
  delay(500);

  ledArray.progressSymbol();
  delay(500);
  
}