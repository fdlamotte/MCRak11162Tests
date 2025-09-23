#include <Arduino.h>

// Set LED_BUILTIN if it is not defined by Arduino framework
// #define LED_BUILTIN 2

void setup()
{
  // initialize LED digital pin as an output.
//  pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(115200);
}

void loop()
{
  Serial.println("Hello");
  delay(1000);
}