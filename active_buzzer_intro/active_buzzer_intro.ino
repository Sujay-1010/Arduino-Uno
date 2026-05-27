int potVal;
int Pin = 8;
int time = 500;
int potPin = A3;


void setup() {
  pinMode(Pin, OUTPUT);
  pinMode(potPin, INPUT);
  Serial.begin(9600);

}

void loop() {
  potVal = analogRead(potPin);
  if (potVal>1000){
    digitalWrite(Pin, HIGH);
    delay(time);
    digitalWrite(Pin, LOW);
    delay(time);

  }
  
  Serial.println(potVal);

}
