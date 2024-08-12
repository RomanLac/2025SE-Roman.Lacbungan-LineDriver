#include "lineSensor.h"

const int sensorPin1 = 2;
const int sensorPin2 = 3;

lineSensor sensor1(sensorPin1);
lineSensor sensor2(sensorPin2);

void setup() {
    Serial.begin(9600);
  
    sensor1.init();
    sensor2.init();
}

void loop() {
    if (sensor1.isLineDetected()) {
        Serial.println("1 detected");
    } else {
        Serial.println("1 not detected");
    }

    if (sensor2.isLineDetected()) {
        Serial.println("2 detected");
    } else {
        Serial.println("2 not detected");
    }

    delay(500);
}
