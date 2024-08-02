// main

#include "ledArray/ledArray.h"
#include "lineSensor/lineSensor.h"
#include "Servo/Servo.h"
#include "ArduinoGraphics.h"
#include "Arduino_LED_Matrix.h"

static unsigned int lineFollower = 3;

lineSensor mylineSensor;
ledArray myLedArray;
servo myServo;

void setup() {
  Serial.begin(9600);
  lineSensorObject.init();
}

void loop() {
  int sensorValue = myLineSensor.readSensor();
  Serial.println(sensorValue);
}

