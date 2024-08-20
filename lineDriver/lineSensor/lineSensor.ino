#include "lineSensor.h"

lineSensor myLineSensor1(A5); // left
lineSensor myLineSensor2(A1); // right

void setup() {
  Serial.begin(9600);
  Serial.println("Serial begin");

  myLineSensor1.init();
  myLineSensor2.init();

}

void loop() {
  if (myLineSensor1.isLineDetected()) {
    Serial.println("1+");
  } else {
    Serial.println("1-");
  }

  if (myLineSensor2.isLineDetected()) {
    Serial.println("2+");
  } else {
    Serial.println("2-");
  }

}
