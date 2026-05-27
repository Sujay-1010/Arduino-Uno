int PotPin = A3;
int gPin = 6;
int potVal;
float ledVal;
int delayT = 500;

void setup() {
  pinMode(PotPin, INPUT);
  pinMode(gPin, OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  potVal=analogRead(PotPin);
  ledVal=255./1023.*potVal;
  analogWrite(gPin, ledVal);
  Serial.println(ledVal);
  delay(delayT);
  // put your main code here, to run repeatedly:

}
