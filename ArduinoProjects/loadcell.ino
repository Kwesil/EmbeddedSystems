// Smart Scale with ESP32, HX711, and Web Notification (No Display)
// Assumes you have WiFi and web API set up to receive JSON data

#include <HX711.h>
// ?#inlude <WiFi.h>
#include <HTTPClient.h>

// HX711 pins
#define DOUT  4
#define CLK   5

// WiFi credentials
const char* ssid = "YOUR_WIFI_SSID";
const char* password = "YOUR_WIFI_PASSWORD";

// Webhook or API endpoint
const char* serverURL = "http://your-web-server.com/api/scale";

HX711 scale;

// Calibration and threshold values
float calibrationFactor = 22500.0; // Set after calibration
float maxWeight = 500.0;
float warningThreshold = 0.9 * maxWeight; // 90% of max
String statusMessage = "NORMAL";

void setup() {
  Serial.begin(115200);

  // Connect WiFi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nWiFi connected");

  // Init HX711
  scale.begin(DOUT, CLK);
  scale.set_scale(calibrationFactor);
  scale.tare(); // Zero the scale
}

void loop() {
  float weight = scale.get_units(5); // Average of 5 readings
  if (weight < 0) weight = 0;

  // Determine status
  if (weight >= maxWeight) {
    statusMessage = "MAX_REACHED";
  } else if (weight >= warningThreshold) {
    statusMessage = "NEAR_CAPACITY";
  } else {
    statusMessage = "NORMAL";
  }

  // Debug output
  Serial.print("Weight: ");
  Serial.print(weight);
  Serial.print(" kg\tStatus: ");
  Serial.println(statusMessage);

  // Send data to web server
  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;
    http.begin(serverURL);
    http.addHeader("Content-Type", "application/json");

    String payload = "{";
    payload += "\"weight\":" + String(weight, 2) + ",";
    payload += "\"status\":\"" + statusMessage + "\"";
    payload += "}";

    int httpResponseCode = http.POST(payload);
    Serial.print("POST Status: ");
    Serial.println(httpResponseCode);
    http.end();
  }

  delay(500); // Update rate ~2 times per second
}
