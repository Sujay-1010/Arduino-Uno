int lightPin = A3;
int lightVal;
int dv = 250;
int redpin = 8;
int greenpin = 9;

void setup() {
  pinMode(lightPin, INPUT);
  pinMode(redpin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  lightVal = analogRead(lightPin);
  Serial.println(lightVal);
  delay(dv);
  if (lightVal>27){
    digitalWrite(redpin, HIGH);
    digitalWrite(greenpin, LOW);
  }
  if (lightVal<27){
    digitalWrite(greenpin, HIGH);
    digitalWrite(redpin, LOW);
  }
  // put your main code here, to run repeatedly:

}
