int variableOne = 2;
int variableTwo = 4;

void setup() {
  pinMode(variableOne, OUTPUT);
  pinMode(variableTwo, OUTPUT);
}

void loop() {
  digitalWrite(variableOne, HIGH);
  digitalWrite(variableTwo, LOW);
  delay(200);
  digitalWrite(variableTwo, HIGH);
  digitalWrite(variableOne, LOW);
  delay(200);
}