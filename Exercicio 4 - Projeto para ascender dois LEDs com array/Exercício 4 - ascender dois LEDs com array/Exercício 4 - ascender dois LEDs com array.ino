int pinLed []= {2,4};

void setup() {
  
  Serial.begin(9600);
  for(int i = 0; i <= 1; i++){
    pinMode(pinLed[i], OUTPUT);
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
