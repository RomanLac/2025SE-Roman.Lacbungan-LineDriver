#include "wheel.h"

wheel myWheel(9, 5);

void setup() {
  myWheel.init();
  
}

void loop() {
  myWheel.moveForwards();
  delay(500);

  myWheel.turnRight();
  delay(500);

  myWheel.turnLeft();
  delay(500);

}