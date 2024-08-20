#include "wheel.h"

wheel myWheel(9, 10);

void setup() {
  myWheel.init();
  
}

void loop() {
  myWheel.forwards();
  delay(500);

  myWheel.turnRight();
  delay(500);

  myWheel.turnLeft();
  delay(500);

}