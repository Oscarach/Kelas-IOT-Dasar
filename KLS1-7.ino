//*
#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include "CTBot.h"
CTBot myBot;
String ssid = "xxxxxxxxx";
String pass = "xxxxxxxxxxx";
String token = "xxxxxxxxxxxxxx";
const int id = xxxxxxxx;
void setup() {
 Serial.begin(9600);
 pinMode(D4, OUTPUT);
 Serial.println("Starting TelegramBot...");
 myBot.wifiConnect(ssid, pass);
 myBot.setTelegramToken(token);
 if (myBot.testConnection()) {
 Serial.println("Koneksi Bagus");
 Serial.println("The Led is now ON");
 digitalWrite(D4, HIGH);
 myBot.sendMessage(id, "The Led is now ON");
 } else {
 Serial.println("Koneksi Jelek");
 }
 }
void loop() {
}
