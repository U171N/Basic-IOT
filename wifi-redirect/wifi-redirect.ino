#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include "webpage.h"

const char* ssid = "your_wifi_ssid";
const char* password = "your_wifi_password";

ESP8266WebServer server(80);

void setup() {
  Serial.begin(115200);
  delay(10);

  WiFi.mode(WIFI_AP_STA); // Set mode to access point and station
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) { // Wait for connection to WiFi network
    delay(1000);
    Serial.println("Connecting to WiFi network...");
  }

  Serial.println("Connected to WiFi network.");

  IPAddress localIP = WiFi.softAPIP(); // Get the IP address of the access point
  Serial.print("AP IP address: ");
  Serial.println(localIP);

  WiFi.softAPConfig(localIP, localIP, IPAddress(255, 255, 255, 0)); // Configure access point as router
  WiFi.softAP("Access Point", "12345678", 1); // Set SSID and password for the access point

  Serial.println("Access point started");

  server.on("/", handleRoot);

  server.begin();
  Serial.println("HTTP server started");
}

void loop() {
  server.handleClient();
}

void handleRoot() {
  String message = "<html><body>";
  message += "<h1>Welcome to the dynamic access point!</h1>";
  message += "<p>The name of this access point is: ";
  message += WiFi.SSID();
  message += "</p>";
  message += "</body></html>";
  server.send(200, "text/html", message);
}
