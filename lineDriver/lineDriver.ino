// main

#include "ledArray/ledArray.h"
#include "lineSensor/lineSensor.h"
#include "wheel/wheel.h"
  
lineSensor lineSensorObject(sensorPin);

wheel leftWheel(5);
wheel leftWheel(7);

void setup() {
  Serial.begin(9600);
  matrix.begin(); // deploys ready animation
    matrix.loadFrame(readySymbol);
    delay(500);

  lineSensorObject.init(); //line starts

}

void loop() {
  int sensorValue = lineSensor.readSensor();
  Serial.println(sensorValue);

}

