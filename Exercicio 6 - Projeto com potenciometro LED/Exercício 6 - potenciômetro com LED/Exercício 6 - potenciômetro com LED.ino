const int pinPotetiometerner = A0;
const int led = 3;



void setup() { 
  
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  
  int readValue = analogRead(pinPotetiometerner);
  Serial.println(readValue);
  int newValue = map(readValue, 0, 1023, 0, 255);
  analogWrite(led, newValue);  
}
