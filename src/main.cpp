#include <Arduino.h>

int redLed = D0; 
int blueLed = D4; 
int greenLedRed = D5; 
int greenLedGreen = D6; 
int greenLedBlue = D7; 

void setup() {
  pinMode(redLed, OUTPUT); 
  pinMode(blueLed, OUTPUT); 
  pinMode(greenLedRed, OUTPUT); 
  pinMode(greenLedGreen, OUTPUT); 
  pinMode(greenLedBlue, OUTPUT); 
}

void loop() {
  analogWrite(greenLedRed, 0);
  analogWrite(greenLedGreen, 255);
  analogWrite(greenLedBlue, 0);
  
  delay(5000);

  analogWrite(greenLedRed, 0);
  analogWrite(greenLedGreen, 0);
  analogWrite(greenLedBlue, 0);
  
  digitalWrite(redLed, HIGH);
  
  delay(500);

  digitalWrite(redLed, LOW);
  
  digitalWrite(blueLed, HIGH);
  
  delay(500);

  digitalWrite(blueLed, LOW);
}