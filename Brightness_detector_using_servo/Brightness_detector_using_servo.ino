#include <Servo.h>

int lightVal;
int lightpin = A4;
int dt = 250;
int angle;
int servopin = 9;
Servo myServo;

void setup() {
  Serial.begin(9600);
  pinMode(lightpin, INPUT);
  pinMode(servopin, INPUT);
  myServo.attach(servopin);

}

void loop() {
  lightVal=analogRead(lightpin);
  Serial.println(lightVal);
  delay(dt);
  angle=(-16./30.)*lightVal + 16.*780./30.;
  myServo.write(angle);

}
