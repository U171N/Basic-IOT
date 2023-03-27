#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include "webpage.h"

ESP8266WebServer server(80); //menggunakan port http

void setup() {
  Serial.begin(115200);
  delay(10);

  WiFi.mode(WIFI_AP);
const char* ssid = generateAPName().c_str();
  WiFi.softAP(ssid);

  server.on("/",handleRoot); //function untuk menangani agar code berjalan

  server.begin(); //start web server
  Serial.println("HTTP server started");
}

void loop() {
  server.handleClient();
}

//membuat method untuk implement pada properti handleRoot

void handleRoot(){
  String message = "<html><body>";
  message += "<h1>Welcome to the dynamic access point!</h1>";
  message += "<p>The name of this access point is: ";
  message += WiFi.SSID();
  message += "</p>";
  message += "</body></html>";
  server.send(200,"text/html",message);
}

String generateAPName() {
  String prefix = "AP_";
  int suffix = random(1000,9999);
  return prefix + String(suffix);
}
