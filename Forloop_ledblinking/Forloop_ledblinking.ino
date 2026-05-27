int redPin = 8;
int greenPin = 6;
int delayT1= 500;
int delayT2 = 1000;
int greenBlink = 3;
int redBlink = 5;
int j;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  for (j=1;j<=greenBlink;j=j+1){
    digitalWrite(greenPin, HIGH);
    delay(delayT1);
    digitalWrite(greenPin, LOW);
    delay(delayT1);
  }
   for (j=1;j<=redBlink;j=j+1){
    digitalWrite(redPin, HIGH);
    delay(delayT1);
    digitalWrite(redPin, LOW);
    delay(delayT1);
   }
   delay(delayT2);
}

