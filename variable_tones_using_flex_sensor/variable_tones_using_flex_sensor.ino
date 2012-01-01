int note = 0;
const int wand = A0;




void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(wand);
  tone(8, value);
  Serial.print(value);
  
  
}

