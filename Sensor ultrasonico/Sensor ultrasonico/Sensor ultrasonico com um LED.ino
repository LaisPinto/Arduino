#include "Ultrasonic.h"

const int pinEcho = 7; //HC-SR04 echo (receber)
const int pintTrigger = 6; //HC-SR04 trigger (enviar)

Ultrasonic ultrasonic(pintTrigger, pinEcho);

int distance;
String response;

void setup() {
  pinMode(pinEcho, INPUT);
  pinMode(pintTrigger, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  hcs04();
  Serial.print("distancia ");
  Serial.print(response);
  Serial.print("cm/n");
}

void hcs04() {
  digitalWrite(pintTrigger, LOW);
  delayMicroseconds(2);
  digitalWrite(pintTrigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(pintTrigger, LOW);

  distance = (ultrasonic.Ranging(CM));
  response = String(distance);
  delay(distance);  
}