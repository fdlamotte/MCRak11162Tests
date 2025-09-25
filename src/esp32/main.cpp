#include <Arduino.h>

#define LED 4

void setup()
{
  pinMode(LED, OUTPUT);

  // open serial port at 76800, it seems the default on this board
  Serial.begin(76800);
  Serial.println("Hello");

  Serial1.begin(115200, SERIAL_8N1, 6, 7);
  Serial1.println("Hello Serial1");
}

void loop()
{

  while (Serial1.available()) {
    char c = Serial1.read();
    Serial.printf("%c", c);
  }
  while (Serial.available()) {
    Serial1.printf("%c", Serial.read());
  }
  delay(10);

}