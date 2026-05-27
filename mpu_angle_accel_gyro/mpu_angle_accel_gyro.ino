#include <Wire.h>
#include <MPU6050_light.h>

MPU6050 mpu(Wire);

// Zero reference for angles
float rollZero  = 0.0;
float pitchZero = 0.0;

void setup() {
  Serial.begin(9600);
  Wire.begin();

  // Initialize MPU6050
  if (mpu.begin() != 0) {
    Serial.println("MPU6050 not found!");
    while (1);
  }
  mpu.calcGyroOffsets();

  Serial.println("MPU6050 connected");
  Serial.println("Keep sensor STILL and FLAT for calibration...");
  delay(3000);

  // Calibrate gyro + accelerometer (bias removal)
  mpu.calcOffsets(true, true);
  Serial.println("Calibration done");

  // Let filter settle
  delay(500);
  mpu.update();

  // -------- SET ZERO REFERENCE --------
  rollZero  = mpu.getAngleX();
  pitchZero = mpu.getAngleY();

  Serial.println("Zero reference set (Roll=0, Pitch=0)");
  Serial.println("------------------------------------");
}

void loop() {
  mpu.update();   // MUST be called every loop

  // -------- Gyroscope (deg/sec) --------
  float gyroX = mpu.getGyroX();
  float gyroY = mpu.getGyroY();
  float gyroZ = mpu.getGyroZ();

  // -------- Accelerometer (g) --------
  float accX = mpu.getAccX();
  float accY = mpu.getAccY();
  float accZ = mpu.getAccZ();

  // -------- Angles (degrees) --------
  float rollRaw  = mpu.getAngleX();
  float pitchRaw = mpu.getAngleY();
  float yaw      = mpu.getAngleZ();   // yaw drifts (normal)

  // Zero-corrected angles
  float roll  = rollRaw  - rollZero;
  float pitch = pitchRaw - pitchZero;

  // -------- Temperature (°C) --------
  float temp = mpu.getTemp();

  // -------- Print everything --------
  Serial.print("Gyro (°/s)  X: ");
  Serial.print(gyroX);
  Serial.print("  Y: ");
  Serial.print(gyroY);
  Serial.print("  Z: ");
  Serial.println(gyroZ);

  Serial.print("Accel (g)   X: ");
  Serial.print(accX);
  Serial.print("  Y: ");
  Serial.print(accY);
  Serial.print("  Z: ");
  Serial.println(accZ);

  Serial.print("Angles (°)  Roll: ");
  Serial.print(roll);
  Serial.print("  Pitch: ");
  Serial.print(pitch);
  Serial.print("  Yaw: ");
  Serial.println(yaw);

  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.println(" °C");

  Serial.println("------------------------------------");

  delay(1000);
}

