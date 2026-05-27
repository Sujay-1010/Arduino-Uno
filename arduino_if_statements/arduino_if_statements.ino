int myVoltpin = A3;
int readVal;
float V2;
int delayT = 250;
int redpin = 9;


void setup() {
  Serial.begin(9600);
  pinMode(myVoltpin,INPUT);
  pinMode(redpin,OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  readVal = analogRead(myVoltpin);
  V2 = (5./1023.)*readVal;
  Serial.println(V2);
  if (V2>2.0 && V2<3.0){
    digitalWrite(redpin,HIGH);
  }
  if (V2<2.0 || V2>3.0){
    digitalWrite(redpin,LOW);
  }
  delay(delayT);
  // put your main code here, to run repeatedly:

}
