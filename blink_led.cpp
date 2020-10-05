/*********
  Rui Santos
  Complete project details at https://RandomNerdTutorials.com/vs-code-platformio-ide-esp32-esp8266-arduino/
*********/

#include <Arduino.h>

#define LED_INT 5
#define LED     2

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LED_INT, OUTPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_INT, HIGH);
  digitalWrite(LED, HIGH);
  Serial.println("Onboard LED is on");
  delay(1000);
  digitalWrite(LED_INT, LOW);
  digitalWrite(LED, LOW);
  Serial.println("Onboard LED is off");
  delay(1000);
}
