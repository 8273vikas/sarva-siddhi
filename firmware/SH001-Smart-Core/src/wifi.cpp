#include <WiFi.h>
#include "wifi.h"
#include "config.h"

void initWiFi()
{
    WiFi.mode(WIFI_STA);

    WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

    Serial.print("Connecting");

    while (WiFi.status() != WL_CONNECTED)
    {
        delay(500);
        Serial.print(".");
    }

    Serial.println();
    Serial.println("WiFi Connected");

    Serial.print("IP : ");
    Serial.println(WiFi.localIP());
}

void updateWiFi()
{
    if(WiFi.status()!=WL_CONNECTED)
    {
        WiFi.reconnect();
    }
}

bool isWiFiConnected()
{
    return WiFi.status()==WL_CONNECTED;
}
