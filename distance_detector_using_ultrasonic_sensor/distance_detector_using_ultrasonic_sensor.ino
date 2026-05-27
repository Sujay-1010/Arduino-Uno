#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// I2C LCD address (most common is 0x27 or 0x3F)
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Ultrasonic pins
#define TRIG_PIN 7
#define ECHO_PIN 8

long duration;
float distance;

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  lcd.init();          // Initialize I2C LCD
  lcd.backlight();     // Turn on backlight

  lcd.setCursor(0, 0);
  lcd.print("Hand Distance");
  delay(2000);
  lcd.clear();
}

void loop() {
  // Send ultrasonic trigger pulse
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // Measure echo time
  duration = pulseIn(ECHO_PIN, HIGH, 30000);

  // Convert time to distance (cm)
  distance = duration * 0.034 / 4;

  // Display distance
  lcd.setCursor(0, 0);
  lcd.print("Dist: ");
  lcd.print(distance);
  lcd.print(" cm   ");

  // Display game message
  lcd.setCursor(0, 1);

  if (distance < 7 && distance > 0) {
    lcd.print("TOO CLOSE     ");
  }
  else if (distance > 50) {
    lcd.print("TOO FAR       ");
  }
  else {
    lcd.print("GOOD RANGE    ");
  }

  delay(300);
}

