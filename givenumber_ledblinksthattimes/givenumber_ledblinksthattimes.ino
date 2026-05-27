int mynumber;
String msg = "How many blinks do u want?:  ";
int numblinks;
int j;
int blinktime = 500;
int redPin = 8;
void setup() {
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  Serial.println(msg);
  while (Serial.available()==0){
    
  }
  numblinks = Serial.parseInt();
  for (j=1;j<=numblinks;j=j+1){
    digitalWrite(redPin,HIGH);
    delay(blinktime);
    digitalWrite(redPin,LOW);
    delay(blinktime);

  }
  // put your main code here, to run repeatedly:
}
