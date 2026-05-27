int potVal;
int delayTime = 100;
int potPin = A3;
int redPin = 8;

void setup() {
  Serial.begin(9600);
  pinMode(potPin, INPUT);
  pinMode(redPin, OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  potVal=analogRead(potPin);
  Serial.println(potVal);
  delay(delayTime);
  
  while (potVal>1000){
    digitalWrite(redPin, HIGH);
    potVal=analogRead(potPin);
    Serial.println(potVal);
    delay(delayTime);
  }
  digitalWrite(redPin, LOW);

  // put your main code here, to run repeatedly:

}
