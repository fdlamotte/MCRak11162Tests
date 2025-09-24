#include <Arduino.h>

#define LED 4

void setup()
{
  pinMode(LED, OUTPUT);

  // open serial port at 76800, it seems the default on this board
  Serial.begin(76800);
  Serial.println("Hello");

  Serial1.begin(115200, 6, 7);
  Serial1.println("Hello Serial1");
}

void loop()
{

  while (Serial1.available()) {
    Serial.print(Serial1.read());
  }
  while (Serial.available()) {
    Serial1.print(Serial.read());
  }
  delay(10);

}