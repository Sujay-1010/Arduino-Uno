#include <Servo.h>
int servopin = 9;
int servopos = 10;
Servo myservo;
int angle;

void setup() {
  Serial.begin(9600);
  myservo.attach(servopin);
  // put your setup code here, to run once:

}

void loop() {
  Serial.println("What angle for the servo: ");
  while (Serial.available()==0){

  }
  servopos=Serial.parseInt();

  myservo.write(servopos);
  // put your main code here, to run repeatedly:

}
