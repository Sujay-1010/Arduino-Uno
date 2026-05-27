int lightpin = A5;
float lightVal;
int dv = 250;
float toneVal;
int buzzpin = 8;

void setup() {
  pinMode(lightpin, INPUT);
  pinMode(buzzpin, OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  lightVal = analogRead(lightpin);

  toneVal = (9./160.)*lightVal + 1.;
  Serial.println(toneVal);
  delay(dv);
  digitalWrite(buzzpin, HIGH);
  delay(toneVal);
  digitalWrite(buzzpin, LOW);
  delay(toneVal);

}
