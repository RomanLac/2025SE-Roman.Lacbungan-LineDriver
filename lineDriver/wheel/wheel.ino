#include "wheel.h"

wheel myWheel(5, 7);

void setup() {
  myWheel.init();
  
}

void loop() {
  myWheel.forwards();
  delay(500);

  myWheel.turnLeft();
  delay(500);

  myWheel.turnRight();
  delay(500);

}