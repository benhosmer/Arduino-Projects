/* 
 
 Read the value of a photocell, and then
 print that value to the serial display and also
 turn an led on if that value is HIGH
 
 */


const int LED = 13;
const int BUTTON = 7;

int val = 0;

void setup() {
  Serial.begin(9600);	
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
	
}

void loop() {

val = digitalRead(BUTTON);
Serial.print("\n Sensor is: ");
Serial.print(val);
if (val == HIGH) {
  digitalWrite(LED, HIGH);

} else {

  digitalWrite(LED, LOW);
  	
 }

}
