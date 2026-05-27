int pin1 = 8;
int pin2 = 7;
int pin3 = 6;
int pin4 = 5;
int time1 = 500;
int time2 = 2000;
int time3 = 3500;



void setup() {
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);
  pinMode(pin4,OUTPUT);

}

void loop() {
  digitalWrite(pin1,HIGH);
  delay(time1);
  digitalWrite(pin2,LOW);
  delay(time1);
  digitalWrite(pin3,LOW);
  delay(time1);
  digitalWrite(pin4,LOW);
  delay(time1);

  delay(time2);

  digitalWrite(pin1,LOW);
  delay(time1);
  digitalWrite(pin2,LOW);
  delay(time1);
  digitalWrite(pin3,LOW);
  delay(time1);
  digitalWrite(pin4,HIGH);
  delay(time1);
  digitalWrite(pin4,LOW);

  delay(time2);

  digitalWrite(pin1,LOW);
  delay(time1);
  digitalWrite(pin2,LOW);
  delay(time1);
  digitalWrite(pin3,HIGH);
  delay(time1);
  digitalWrite(pin4,LOW);
  delay(time1);
  digitalWrite(pin3,LOW);

  delay(time2);

  digitalWrite(pin1,LOW);
  delay(time1);
  digitalWrite(pin2,LOW);
  delay(time1);
  digitalWrite(pin3,HIGH);
  delay(time1);
  digitalWrite(pin4,HIGH);
  delay(time1);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,LOW);

  delay(time2);

  digitalWrite(pin1,LOW);
  delay(time1);
  digitalWrite(pin2,HIGH);
  delay(time1);
  digitalWrite(pin3,LOW);
  delay(time1);
  digitalWrite(pin4,LOW);
  delay(time1);
  digitalWrite(pin2,LOW);

  delay(time2);

  digitalWrite(pin1,LOW);
  delay(time1);
  digitalWrite(pin2,HIGH);
  delay(time1);
  digitalWrite(pin3,LOW);
  delay(time1);
  digitalWrite(pin4,HIGH);
  delay(time1);
  digitalWrite(pin2,LOW);
  digitalWrite(pin4,LOW);

  delay(time2);

  digitalWrite(pin1,LOW);
  delay(time1);
  digitalWrite(pin2,HIGH);
  delay(time1);
  digitalWrite(pin3,HIGH);
  delay(time1);
  digitalWrite(pin4,LOW);
  delay(time1);
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,LOW);

  delay(time2);

  digitalWrite(pin1,LOW);
  delay(time1);
  digitalWrite(pin2,HIGH);
  delay(time1);
  digitalWrite(pin3,HIGH);
  delay(time1);
  digitalWrite(pin4,HIGH);
  delay(time1);
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,LOW);

  delay(time3);


}
