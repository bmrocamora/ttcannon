// the transistor which controls the motor will be attached to digital pin 9
int motorControl = 9;

// the setup routine runs once when you press reset:
void setup() {
  // make the transistor's pin an output:
  pinMode(motorControl, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}
// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  analogWrite(motorControl, 167);
  delay(10000);
  digitalWrite(LED_BUILTIN,LOW);
  delay(100);
  
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  analogWrite(motorControl, 255);
  delay(10000);
  digitalWrite(LED_BUILTIN,LOW);
  delay(100);
}






















