// snippet taken from ky-033 line tracking module documentation

#include "lineSensor.h"

lineSensor lineSensorObject(sensorPin);

// int sensorPin = 7;  // line detection sensor interface
// int val;            // variable to store sensor reading

void setup() {
  // pinMode(sensorPin,INPUT);  // define sensor as input 
  lineSensorObject.init() // initialize the sensor
  Serial.begin(9600);     // initialize serial communication with PC
}

void loop() {
  val = digitalRead(sensorPin); // read value from sensor
  
  if (val == HIGH) { 
    Serial.println("Line detected"); 
  } else { 
    Serial.println("Line NOT detected"); 
  }

  delay(500);
}