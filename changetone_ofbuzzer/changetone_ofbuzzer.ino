int pin = 8;
int dt1 = 1;
int dt2 = 2;
int j;

void setup() {
  pinMode(pin, OUTPUT);

}

void loop() {
  for (j=1;j<=100;j=j+1){
    digitalWrite(pin, HIGH);
    delay(dt1);
    digitalWrite(pin ,LOW);
    delay(dt1);

  }
  for (j=1;j<=100;j=j+1){
    digitalWrite(pin, HIGH);
    delay(dt2);
    digitalWrite(pin ,LOW);
    delay(dt2);
  }

}
