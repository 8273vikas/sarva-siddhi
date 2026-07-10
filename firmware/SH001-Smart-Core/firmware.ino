#include "src/config.h"
#include "src/device.h"
#include "src/wifi.h"

void setup()
{
    Serial.begin(SERIAL_BAUDRATE);

    initDevice();

    initWiFi();
}

void loop()
{
    updateDevice();

    updateWiFi();
}
