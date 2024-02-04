#include <Arduino.h>



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println("ESP32 is better than Arduino");
  delay(500); //delays for .5 seconds
}

