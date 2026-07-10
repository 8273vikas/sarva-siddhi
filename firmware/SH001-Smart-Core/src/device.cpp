#include "device.h"
#include "config.h"
#include "gpio.h"

void initDevice()
{
    initGPIO();

    Serial.println();
    Serial.println("================================");
    Serial.println("SH001 Smart Core Controller");
    Serial.print("Firmware : ");
    Serial.println(FIRMWARE_VERSION);
    Serial.println("================================");
}

void updateDevice()
{
    // Main Device Logic
}
