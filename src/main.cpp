#include <Arduino.h>

#include <Stepper.h>

#define PIN_1 25
#define PIN_2 26
#define PIN_3 27
#define PIN_4 13

const int stepsPerRevolution = 2048; // 28BYJ-48

Stepper myStepper(stepsPerRevolution, PIN_1, PIN_2, PIN_3, PIN_4);

void setup() {
    myStepper.setSpeed(15);
    Serial.begin(115200);
}

void loop() {
    // step one revolution in one direction:
    Serial.println("clockwise");
    myStepper.step(stepsPerRevolution);
    delay(3000);

    // step one revolution in the other direction:
    Serial.println("counterclockwise");
    myStepper.step(-stepsPerRevolution);
    delay(3000);
}
