int buzzpin = 8;
int buzztime = 1;
int buzztime2 = 1;
int potVal;
int potpin = A3;
int toneVal;

void setup() {
  pinMode(buzzpin, OUTPUT);
  pinMode(potpin, INPUT);
  // put your setup code here, to run once:

}

void loop() {
  potVal = analogRead(potpin);
  toneVal = (9940./1023.)*potVal + 60.;
  digitalWrite(buzzpin, HIGH);
  delayMicroseconds(toneVal);
  digitalWrite(buzzpin, LOW);
  delayMicroseconds(toneVal);
  // put your main code here, to run repeatedly:

}
