#include <ESP32Servo.h>
const byte servo_pin = 27;
const byte pot_pin=26;
Servo myservo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  myservo.attach(servo_pin);
  myservo.write(0);
  delay(1000);
}

void loop() {
  int pot = analogRead(pot_pin);
  int angle =map(pot,0,4095,0,180);
  myservo.write(angle);
  delay(10);

}
