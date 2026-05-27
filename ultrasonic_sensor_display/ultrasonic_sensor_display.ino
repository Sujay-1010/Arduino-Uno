#define TRIG_PIN 7
#define ECHO_PIN 8

long duration;
float distance;

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  // Make sure trigger pin is LOW
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  // Send 10 microsecond pulse to trigger
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // Read the echo pin (time for sound to go and come back)
  duration = pulseIn(ECHO_PIN, HIGH);

  // Convert time to distance (cm)
  distance = duration * 0.034 / 2;
  if (distance > 40){
    Serial.println("Too far");
  }
  else if(distance < 10){
    Serial.println("Too close");
  }
  else{
    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");
  }


  delay(300);
}
