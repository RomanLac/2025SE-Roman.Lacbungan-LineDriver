#include "wheel.h"

wheel myWheel;


void setup() {
  myWheel.init();
  
}

void loop() {
  myWheel.forwards();
  delay(500);

  myWheel.backwards();
  delay(500);

  myWheel.turnLeft();
  delay(500);

  myWheel.turnRight();
  delay(500);

}