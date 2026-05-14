int redPin = 8;
int bluePin = 7;
int greenPin = 6;
int timeRed = 500;
int timeBlue= 250;
int timeGreen = 100;
int number = 5;
int i = 0;

void setup(){
  pinMode(redPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  
}

void loop(){
  digitalWrite(redPin,HIGH);
  delay(timeRed);
  digitalWrite(redPin,LOW);
  delay(timeRed);

  digitalWrite(redPin,HIGH);
  delay(timeRed);
  digitalWrite(redPin,LOW);
  delay(timeRed);

  digitalWrite(redPin,HIGH);
  delay(timeRed);
  digitalWrite(redPin,LOW);
  delay(timeRed);

  digitalWrite(redPin,HIGH);
  delay(timeRed);
  digitalWrite(redPin,LOW);
  delay(timeRed);

  digitalWrite(redPin,HIGH);
  delay(timeRed);
  digitalWrite(redPin,LOW);
  delay(timeRed);


  digitalWrite(bluePin,HIGH);
  delay(timeBlue);
  digitalWrite(bluePin,LOW);
  delay(timeBlue);

  digitalWrite(bluePin,HIGH);
  delay(timeBlue);
  digitalWrite(bluePin,LOW);
  delay(timeBlue);

  digitalWrite(bluePin,HIGH);
  delay(timeBlue);
  digitalWrite(bluePin,LOW);
  delay(timeBlue);

  digitalWrite(bluePin,HIGH);
  delay(timeBlue);
  digitalWrite(bluePin,LOW);
  delay(timeBlue);

  digitalWrite(bluePin,HIGH);
  delay(timeBlue);
  digitalWrite(bluePin,LOW);
  delay(timeBlue);


  digitalWrite(greenPin,HIGH);
  delay(timeGreen);
  digitalWrite(greenPin,LOW);
  delay(timeGreen);

  digitalWrite(greenPin,HIGH);
  delay(timeGreen);
  digitalWrite(greenPin,LOW);
  delay(timeGreen);

  digitalWrite(greenPin,HIGH);
  delay(timeGreen);
  digitalWrite(greenPin,LOW);
  delay(timeGreen);

  digitalWrite(greenPin,HIGH);
  delay(timeGreen);
  digitalWrite(greenPin,LOW);
  delay(timeGreen);

  digitalWrite(greenPin,HIGH);
  delay(timeGreen);
  digitalWrite(greenPin,LOW);
  delay(timeGreen);

  delay(1000);

}
