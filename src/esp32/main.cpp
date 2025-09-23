#include <Arduino.h>

void setup()
{
    // open serial port at 76800, it seems the default on this board
    Serial.begin(76800);
}

void loop()
{
  Serial.println("Hello");
  delay(1000);
}