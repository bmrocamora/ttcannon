// Setting Motor Pins
const int motor1Pin = 25;
const int motor2Pin = 26;
const int motor3Pin = 27;

// Setting PWM properties
const int freq = 1000;

const int channel1 = 0;
const int channel2 = 1;
const int channel3 = 2;

const int resolution = 10;

void setup()
{
    // Setting Motor Pins as OUTPUTS
    pinMode(motor1Pin, OUTPUT);
    pinMode(motor2Pin, OUTPUT);
    pinMode(motor3Pin, OUTPUT);
    
    // Setting LED PWM functionalities
    ledcSetup(channel1, freq, resolution);
    ledcSetup(channel2, freq, resolution);
    ledcSetup(channel2, freq, resolution);
    
    // attach the channel to the GPIO to be controlled
    ledcAttachPin(motor1Pin, channel1);
    ledcAttachPin(motor2Pin, channel2);
    ledcAttachPin(motor3Pin, channel3);
  
    // Opens serial channel
    Serial.begin(115200);
    // Testing
    Serial.print("Testing DC Motors...");
}

void loop()
{
    Serial.println("Moving Motor 1 at 25%");
    ledcWrite(channel1, 256);
    delay(10000);
    
    Serial.println("Moving Motor 1 at 50%");
    ledcWrite(channel1, 512);
    delay(10000);
    
    Serial.println("Moving Motor 1 at 75%");
    ledcWrite(channel1, 768);
    delay(10000);
    
    Serial.println("Moving Motor 1 at 100%");
    ledcWrite(channel1, 1023);
    delay(10000);
    
    Serial.println("Stopping Motor");
    ledcWrite(channel1, 0);
    delay(20000);

}
