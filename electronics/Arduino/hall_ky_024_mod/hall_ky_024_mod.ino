int led = 13 ; // LED on arduino
int digitalPin = 3; // linear Hall magnetic sensor digital interface
int analogPin = A0; // linear Hall magnetic sensor analog interface
int digitalVal ; // digital readings
int analogVal; // analog readings

void setup ()
{
  pinMode (led, OUTPUT); 
  pinMode (digitalPin, INPUT); 
  //pinMode(analogPin, INPUT); 
  Serial.begin(9600);
}

void loop ()
{
  // Read the digital interface
  digitalVal = digitalRead(digitalPin) ; 
  if (digitalVal == HIGH) // When magnetic field is present, Arduino LED is on
  {
    digitalWrite (led, HIGH);
  }
  else
  {
    digitalWrite (led, LOW);
  }
  

  Serial.println(digitalVal); // print analog value

  delay(100);
}
  
