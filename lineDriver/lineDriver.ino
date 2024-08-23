#include "lineDriver.h"

// classes
#include "ledArray.h"
#include "lineSensor.h"
#include "wheel.h"

// assigned pins
#define LEFT_SENSOR_PIN A0 // left
#define RIGHT_SENSOR_PIN A1 // right
#define LEFT_WHEEL_PIN 9
#define RIGHT_WHEEL_PIN 5

ledArray display;
lineSensor leftSensor(LEFT_SENSOR_PIN);
lineSensor rightSensor(RIGHT_SENSOR_PIN);
wheel wheels(LEFT_WHEEL_PIN, RIGHT_WHEEL_PIN);

lineDriver driver(display, leftSensor, rightSensor, wheels);

void setup() {
    driver.init();
}

void loop() {
    driver.run();
}