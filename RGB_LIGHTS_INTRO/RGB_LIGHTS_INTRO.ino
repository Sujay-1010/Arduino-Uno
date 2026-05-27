int redPin = 8;
int greenPin = 9;
int bluePin = 10;
int delayT = 500;
int delayTT = 1000;
String mycolor;
String color = "What color do you want: ";

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  Serial.println(color);
  while (Serial.available()==0){

  }
  mycolor = Serial.readString();
  if (mycolor=="red"){
    digitalWrite(redPin, HIGH);
    delay(delayT);
    digitalWrite(redPin, LOW);
    delay(delayT);
  }
  if (mycolor=="green"){
    digitalWrite(greenPin, HIGH);
    delay(delayT);
    digitalWrite(greenPin, LOW);
    delay(delayT);
  }
  if (mycolor=="blue"){
    digitalWrite(bluePin, HIGH);
    delay(delayT);
    digitalWrite(bluePin, LOW);
    delay(delayT);
  }
  if (mycolor="aqua"){
    digitalWrite(redPin, LOW);
    analogWrite(greenPin, 255);
    analogWrite(bluePin, 255);
  }
 
}
