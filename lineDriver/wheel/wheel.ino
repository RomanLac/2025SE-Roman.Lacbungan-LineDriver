/*
  Purpose: Basic example of a 180deg Micro Servo connected via a Seead Screw Terminal
  Notes: 
    1. Connect to a Digital Pin
    2. 180 Degree ROM 0-180 values
  Author: Ben Jones 13/7/23
  Contact: benjmain.jones21@det.nsw.edu.au
  Source: https://wiki.seeedstudio.com/Grove-Servo/
*/

#include <Servo.h>
#include wheel.h

Servo myServo1;  // create servo object to control a 'servo'
Servo myServo2;

static unsigned int degreeOfMovement = 180;    // variable to read the value from the analog pin

void setup() {
  myServo1.attach(9);  // attaches the servo on pin 9 to the servo object
  myServo2.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  myServo1.write(degreeOfMovement);
  myServo2.write(degreeOfMovement);                // sets the servo position according to the set value
  delay(5000);                                    // waits for the servo to get there
  
  myServo1.write(0);
  myServo2.write(0);                               // returns the servo to 0
  delay(5000);                                    // waits for the servo to get there
}