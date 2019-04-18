#define BLYNK_PRINT Serial

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
#include <Servo.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "06e9e7797fd24930b9132829fa2e2ba9";

BlynkTimer timer;

//********************* WIFI CREDENTIALS ******************************************
char ssid[] = "It burns when IP";                   // Your WiFi credentials.
char pass[] = "torre3101";                     // Set password to "" for open networks.
//*********************************************************************************

//********************* SERVO DETAILS *********************************************
uint8_t servoElevationPin = 12;
uint8_t servoLateralPin = 13;
Servo servoElevation;
Servo servoLateral;
//****************************** PWM PROPERTIES ******************************

uint32_t frequency = 1000;
uint8_t resolution = 10;

uint8_t channel1 = 0;
uint8_t channel2 = 1;
uint8_t channel3 = 2;
uint8_t channel4 = 3;

//*********************************************************************************

//********************* LED DETAILS *********************************************
uint8_t motorFeedPin = 14;
uint8_t motor1Pin = 25;
uint8_t motor2Pin = 26;
uint8_t motor3Pin = 27;
int PWM_LED1;
int PWM_LED2;
int PWM_LED3;
int PWM_LED4;
//*********************************************************************************

void setup()
{
  ledcAttachPin(motorFeedPin, channel1); // assign RGB led pins to channels
  ledcAttachPin(motor1Pin, channel2); // assign RGB led pins to channels
  ledcAttachPin(motor2Pin, channel3); // assign RGB led pins to channels  
  ledcAttachPin(motor3Pin, channel4); // assign RGB led pins to channels

  // Initialize channels channels 0-15, resolution 1-16 bits, freq limits depend on resolution ledcSetup(uint8_t channel, uint32_t freq, uint8_t resolution_bits);
  ledcSetup(channel1, frequency, resolution); // 1 kHz PWM, 10-bit resolution
  ledcSetup(channel2, frequency, resolution); // 1 kHz PWM, 10-bit resolution
  ledcSetup(channel3, frequency, resolution); // 1 kHz PWM, 10-bit resolution
  ledcSetup(channel4, frequency, resolution); // 1 kHz PWM, 10-bit resolution

  // Initialize Servo Attachments
  servoElevation.attach(servoElevationPin);
  servoLateral.attach(servoLateralPin);
  
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
  
  timer.setInterval(5000L, sendWifi);    // Wi-Fi singal

}

void sendWifi() {
  
 int wifisignal = map(WiFi.RSSI(), -105, -40, 0, 100);
  Blynk.virtualWrite(V10, wifisignal);  
  
}

BLYNK_WRITE(V0)
{
  servoElevation.write(param.asInt());
}

BLYNK_WRITE(V1)
{
  servoLateral.write(param.asInt());
}

BLYNK_WRITE(V2) //slider in Virtual Pin 0 (0...4095)
{
 PWM_LED1 = param.asInt();
 ledcWrite(channel1, PWM_LED1); // write red component to channel 1, etc. 0-4095
// float voltage1 = map(PWM_LED1, 0, 4095, 0, 330);
// Blynk.virtualWrite(V3, voltage1/100);  
}

BLYNK_WRITE(V3) //slider in Virtual Pin 0 (0...4095)
{
 PWM_LED2 = param.asInt();
 ledcWrite(channel2, PWM_LED2); // write red component to channel 1, etc. 0-4095
// float voltage2 = map(PWM_LED2, 0, 4095, 0, 330);
// Blynk.virtualWrite(V3, voltage2/100);  
}

BLYNK_WRITE(V4) //slider in Virtual Pin 1 (0...4095)
{
 PWM_LED3 = param.asInt();
 ledcWrite(channel3, PWM_LED3); // write red component to channel 1, etc. 0-4095
// float voltage3 = map(PWM_LED3, 0, 4095, 0, 330);
// Blynk.virtualWrite(V4, voltage3/100); 
}

BLYNK_WRITE(V5) //slider in Virtual Pin 2 (0...4095)
{
 PWM_LED4 = param.asInt();
 ledcWrite(channel4, PWM_LED4); // write red component to channel 1, etc. 0-4095
// float voltage4 = map(PWM_LED4, 0, 4095, 0, 330);
// Blynk.virtualWrite(V5, voltage4/100); 
}


void loop()
{
  Blynk.run();
  timer.run();
}

