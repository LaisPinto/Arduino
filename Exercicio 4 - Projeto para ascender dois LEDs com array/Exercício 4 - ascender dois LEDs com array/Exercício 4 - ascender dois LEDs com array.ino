int wait = 100;
int pin[] = {2, 3};
int numberPins = 2;

void setup() {
  for (int pinArduino = 0; pinArduino < numberPins; pinArduino++) {
    pinMode(pin[pinArduino], HIGH);
  }
}

void loop() {
  for (int pinArduino = 0; pinArduino < numberPins; pinArduino++) {
    digitalWrite(pin[pinArduino], HIGH);
    delay(wait);
    digitalWrite(pin[pinArduino], LOW);
  }

  for (int pinsArduino = numberPins - 1; pinsArduino >= 0; pinsArduino--) {
    digitalWrite(pin[pinsArduino], HIGH);
    delay(wait);
    digitalWrite(pin[pinsArduino], LOW);
  }
}



