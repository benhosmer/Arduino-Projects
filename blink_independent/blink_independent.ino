const int ledPin10 = 10;
const int ledPin9 = 9;

int ledState10 = LOW;
int ledState9 = LOW;

long previousMillis9 = 0;
long previousMillis10 = 0;


long interval10 = 1000;
long interval9 = 500;

void setup() {
  pinMode(ledPin10, OUTPUT);
  pinMode(ledPin9, OUTPUT);
  
  
}

void loop() {
  unsigned long currentMillis = millis();
  
  if (currentMillis - previousMillis10 > interval10) {
    previousMillis10 = currentMillis;
    
    if (ledState10 == LOW)
      ledState10 = HIGH;
    else
      ledState10 = LOW;
    digitalWrite(ledPin10, ledState10);
  }
  
   if (currentMillis - previousMillis9 > interval9) {
    previousMillis9 = currentMillis; 
    
    if (ledState9 == LOW)
      ledState9 = HIGH;
    else
      ledState9 = LOW; 

    
    digitalWrite(ledPin9, ledState9);
    
  }
 }
