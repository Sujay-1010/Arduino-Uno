int buttonPin1 = 13;
int buttonPin2 = 12;
int buttonVal1;
int buttonVal2;
int dt = 500;
int ledbright = 0;
int ledpin = 6;
int buzzpin = 8;



void setup() {
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);
  pinMode(buzzpin, OUTPUT);

}

void loop() {
  buttonVal1 = digitalRead(buttonPin1);
  buttonVal2 = digitalRead(buttonPin2);
  Serial.print("Button 1: ");
  Serial.print(buttonVal1);
  Serial.print(", ");
  Serial.print("Button 2: ");
  Serial.print(buttonVal2);
  delay(dt);
  if (buttonVal1==0){
    ledbright=ledbright+5;
  }
  if (buttonVal2==0){
    ledbright=ledbright-5;
  }
  if (ledbright>255){
    ledbright=255;
    digitalWrite(buzzpin, HIGH);
    delay(dt);
    digitalWrite(buzzpin, LOW);

  }
  if (ledbright<0){
    ledbright=0;
    digitalWrite(buzzpin, HIGH);
    delay(dt);
    digitalWrite(buzzpin, LOW);
  }

  analogWrite(ledpin, ledbright);
}



