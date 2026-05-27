int redPin = 8;
int dit = 50;
int dah = 100;
int longW = 1000;

void setup(){
  pinMode(redPin,OUTPUT);
}


void loop(){
  digitalWrite(redPin,HIGH);
  delay(dit);
  digitalWrite(redPin,LOW);
  delay(dit);

  digitalWrite(redPin,HIGH);
  delay(dit);
  digitalWrite(redPin,LOW);
  delay(dit);

  digitalWrite(redPin,HIGH);
  delay(dit);
  digitalWrite(redPin,LOW);
  delay(dit);

  digitalWrite(redPin,HIGH);
  delay(dah);
  digitalWrite(redPin,LOW);
  delay(dah);

  digitalWrite(redPin,HIGH);
  delay(dah);
  digitalWrite(redPin,LOW);
  delay(dah);

  digitalWrite(redPin,HIGH);
  delay(dah);
  digitalWrite(redPin,LOW);
  delay(dah);

  digitalWrite(redPin,HIGH);
  delay(dit);
  digitalWrite(redPin,LOW);
  delay(dit);

  digitalWrite(redPin,HIGH);
  delay(dit);
  digitalWrite(redPin,LOW);
  delay(dit);

  digitalWrite(redPin,HIGH);
  delay(dit);
  digitalWrite(redPin,LOW);
  delay(dit);

  delay(longW);
}
