int j = 1;
int waitT = 750;
String mess1 = "has an area  ";
float pi = 3.14;
float r = 2;
float area;
String mess2 = "A circle with radius ";
String mess3 = "r ";
String mess4 = ".";



void setup() {
  Serial.begin(9600);

  // put your setup code here, to run once:
}

void loop() {
  area = pi*r*r;
  Serial.print(mess2);
  Serial.print(mess3);
  Serial.print(mess1);
  Serial.print(area);
  Serial.println(mess4);
  delay(waitT);// put your main code here, to run repeatedly:
}
