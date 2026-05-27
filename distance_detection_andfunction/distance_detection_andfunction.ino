#include <Servo.h>

// --- Pin Definitions ---
const int trigPin = 10;
const int echoPin = 11;
const int servoPin = 9;
const int in1Pin = 7;
const int in2Pin = 8;
const int enaPin = 5; // Speed control pin is connected!

// --- Variables & Constants ---
Servo radarServo;
const int THREAT_DISTANCE = 15; // Threat radius in Centimeters

void setup() {
  Serial.begin(9600); // Start Serial Monitor
  
  // Setup Pins
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(in1Pin, OUTPUT);
  pinMode(in2Pin, OUTPUT);
  pinMode(enaPin, OUTPUT);
  
  radarServo.attach(servoPin);
  
  // Ensure the action-response motor is completely off at start
  digitalWrite(in1Pin, LOW);
  digitalWrite(in2Pin, LOW);
  analogWrite(enaPin, 0); 

  Serial.println("System Initialized. Starting Radar Sweep...");
  delay(2000); // Quick pause to let power stabilize
}

void loop() {
  // Sweep from 0 to 180 degrees
  for (int pos = 0; pos <= 180; pos += 5) { // 5-degree increments
    radarServo.write(pos);
    delay(40); // Wait for servo mechanics to physically reach position
    
    int currentDistance = getDistance();
    printData(pos, currentDistance);
    checkThreat(currentDistance);
  }

  // Sweep from 180 back to 0 degrees
  for (int pos = 180; pos >= 0; pos -= 5) {
    radarServo.write(pos);
    delay(40);
    
    int currentDistance = getDistance();
    printData(pos, currentDistance);
    checkThreat(currentDistance);
  }
}

// --- Helper Functions ---

// 1. Trigger ultrasonic pulse and calculate distance
int getDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // 30,000 microsecond timeout prevents freezing
  long duration = pulseIn(echoPin, HIGH, 30000); 
  
  // Calculate distance in cm (Speed of sound = 343m/s)
  int distance = duration * 0.034 / 2;
  
  if (distance == 0) return 999; // Error code if out of range
  return distance;
}

// 2. Handle the DC Motor response logic (Soft Start + 5 Second Delay)
void checkThreat(int distance) {
  if (distance <= THREAT_DISTANCE) {
    Serial.println("==================================================");
    Serial.println(">>> THREAT DETECTED! TARGET LOCKED. <<<");
    Serial.println("RAMPING UP MOTOR FOR 5 SECOND ACTION RESPONSE...");
    Serial.println("==================================================");
    
    // Set motor direction (Forward)
    digitalWrite(in1Pin, HIGH);
    digitalWrite(in2Pin, LOW);
    
    // "Soft Start" ramp-up to prevent current spikes
    for (int speed = 0; speed <= 255; speed += 15) {
      analogWrite(enaPin, speed);
      delay(10); // Very short delay just for the ramp-up
    }
    
    // Wait for exactly 5 seconds while the motor runs at full speed
    delay(5000); 
    
    // Turn motor off instantly when time is up
    digitalWrite(in1Pin, LOW);
    digitalWrite(in2Pin, LOW);
    analogWrite(enaPin, 0);
    
    Serial.println("Action complete. Resuming radar sweep...");
  }
}

// 3. Format and print clean data columns to the Serial Monitor
void printData(int angle, int distance) {
  Serial.print("Angle: ");
  if (angle < 10) Serial.print("  "); 
  else if (angle < 100) Serial.print(" "); 
  Serial.print(angle);
  Serial.print(" deg  |  Distance: ");
  
  if (distance == 999) {
    Serial.println("Out of Range");
  } else {
    Serial.print(distance);
    Serial.println(" cm");
  }
}