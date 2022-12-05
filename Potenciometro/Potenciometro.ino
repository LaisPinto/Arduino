const int pintPontentiometer = A0;

void setup() {
  Serial.begin(9600);

}

void loop() {
  int readValue = analogRead(pintPontentiometer);
  Serial.println(readValue);

}
