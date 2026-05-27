#include <DHT.h>

// Define pin and sensor type
#define DHTPIN 2        // DATA pin connected to D2
#define DHTTYPE DHT11   // DHT11 sensor

// Create DHT object
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println("DHT11 Temperature and Humidity Monitor");
  dht.begin();
}

void loop() {
  // Wait between readings (DHT11 is slow)
  delay(2000);

  // Read humidity
  float humidity = dht.readHumidity();
  // Read temperature in Celsius
  float temperature = dht.readTemperature();

  // Check if readings failed
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  // Print values
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print(" %\t");

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");
}
