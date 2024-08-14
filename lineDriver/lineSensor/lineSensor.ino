#include "lineSensor.h"

lineSensor myLineSensor1(1);
lineSensor myLineSensor2(2);

void setup() {
  Serial.begin(9600);
  Serial.println("test");

  myLineSensor1.init();
  myLineSensor2.init();

}

void loop() {
  if (myLineSensor1.isLineDetected()) {
    Serial.println("1 detected");
  } else {
    Serial.println("1 not detected");
  }

  if (myLineSensor2.isLineDetected()) {
    Serial.println("2 detected");
  } else {
    Serial.println("2 not detected");
  }

  delay(500);

}
