# Controlling DC Motors and Servo Motors via PWM

There are several ways to control DC Motors speed. Here two different modules are explored:

1. IRF520 MOSFET Driver Module (see https://hobbycomponents.com/motor-drivers/661-irf520-mosfet-driver-module)

2. L298 Dual H-Bridge Motor Driver (see https://www.instructables.com/id/How-to-use-the-L298-Motor-Driver-Module-Arduino-Tu/)

Both modules require PWM signal from a microcontroller. PWM signals can easily be generated with an Arduino using `analogWrite` function (see documentation at https://www.arduino.cc/reference/en/language/functions/analog-io/analogwrite/). But, when using ESP32, it is necessary to use `ledcWrite` function instead (see https://randomnerdtutorials.com/esp32-pwm-arduino-ide/). 
