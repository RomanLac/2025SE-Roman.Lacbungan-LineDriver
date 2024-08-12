#include "wheel.h"

wheel wheel;

static unsigned int degreeOfMovement = 180;

void setup() {
  wheel.init();
}

void loop() {
  wheel.forwards();
  delay(500);

  wheel.backwards();
  delay(500);

  wheel.turnLeft();
  delay(500);

  wheel.turnRight();
  delay(500);
}