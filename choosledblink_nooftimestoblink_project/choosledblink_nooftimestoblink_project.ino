String msg1 = "Enter the name of led to blink: ";
String msg2 = "Enter no of times that led is blinking: ";
String myname;
int no;
int redPin = 8;
int bluePin = 9;
int greenPin = 10;
int delayT = 500;
int j;
int k;
int m;

void setup() {
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  Serial.println(msg1);
  while (Serial.available()==0){

  }
  myname = Serial.readString();
  Serial.println(msg2);
  while (Serial.available()==0){

  }
  no = Serial.parseInt();
  while (myname=="red"){
    for (j=1;j<=no;j=j+1){
      digitalWrite(redPin, HIGH);
      delay(delayT);
      digitalWrite(redPin, LOW);
      delay(delayT);
    }
  break;
break;
  }
  while (myname=="blue"){
    for (k=1;k<=no;k=k+1){
      digitalWrite(bluePin, HIGH);
      delay(delayT);
      digitalWrite(bluePin, LOW);
      delay(delayT);
    }
  break;
break;
  }
  while (myname=="green"){
    for (m=1;m<=no;m=m+1){
      digitalWrite(greenPin, HIGH);
      delay(delayT);
      digitalWrite(greenPin, LOW);
      delay(delayT);
    }
  break;
  }
}
