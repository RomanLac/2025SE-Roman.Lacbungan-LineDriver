/*
  Purpose: Basic example using LED matrix as a UI
  Notes: 
    1. Must install ArduinoGraphics from the Library Manager https://github.com/arduino-libraries/ArduinoGraphics
	2. Arduino_LED_Matrix is installed by board manager with R4 package
	2. Use https://ledmatrix-editor.arduino.cc/ to draw shapes
    2. requires Arduino Uno Wifi R4
    3. Documentation here (including scrolling text) https://docs.arduino.cc/tutorials/uno-r4-wifi/led-matrix/
  Author: Ben Jones 20/6/24
  Contact: benjmain.jones21@det.nsw.edu.au
*/

#include "ledArray.h"

void setup() {
  Serial.begin(9600);
   matrix.begin();
   matrix.textFont(Font_5x7);
   matrix.textScrollSpeed(100);
   matrix.stroke(0xFF, 0, 0);
   matrix.beginText(0, 1, 0xFF, 0, 0);
   matrix.print("V00.00.01");
   matrix.endText(SCROLL_LEFT);
   ledArray.readySymbol();

}

/*
void loop() {
  matrix.loadFrame(readySymbol);
  delay(500);

  matrix.loadFrame(tickSymbol);
  delay(500);
  
  matrix.loadFrame(crossSymbol);
  delay(500);

  matrix.loadFrame(progressSymbol);
  delay(500);

}
*/