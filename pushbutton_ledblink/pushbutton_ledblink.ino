int LEDpin = 9;
int buttonpin = 8;
int buttonRead;
int dt = 250;

void setup() {
  Serial.begin(9600);
  pinMode(LEDpin, OUTPUT);
  pinMode(buttonpin, INPUT);
  // put your setup code here, to run once:

}

void loop() {
  buttonRead = digitalRead(buttonpin);
  Serial.println(buttonRead);
  delay(dt);
  if (buttonRead==1){
    digitalWrite(LEDpin, HIGH);
  }
  if (buttonRead==0){
    digitalWrite(LEDpin, LOW);
  }
  // put your main code here, to run repeatedly:

}
