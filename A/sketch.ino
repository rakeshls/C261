#include <ESP32Servo.h>
Servo myservo;
int pos = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  myservo.attach(27);
}

void loop() {
  for(pos=0;pos<=180;pos+=1){
    myservo.write(pos);
    delay(15);
  }
  for(pos=180;pos>=0;pos-=1){
    myservo.write(pos);
    delay(15);
  }
}
