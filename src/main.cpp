#include <Arduino.h>
#include <WiFi.h>

const char* ssid = "iPhone van Juul";
const char* password = "abcd1234efg";

WiFiServer server(80);

void setup() {
    Serial.begin(115200);
    Serial.write("Working");
    delay(10);

    Serial.println();
    Serial.println();
    Serial.print("Connecting to ");
    Serial.println(ssid);

    WiFi.begin(ssid, password);

    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }

    Serial.println("");
    Serial.println("WiFi connected.");
    Serial.println("IP address: ");
    IPAddress local_ip = WiFi.localIP();
    Serial.println(local_ip);

    server.begin();
}

void loop() {

}