
#include "device.h"
#include "config.h"
#include "gpio.h"

void initDevice()
{
    initGPIO();

    Serial.println();
    Serial.println("========================>
    Serial.println("SH001 Smart Core Control>
    Serial.println("Device Initialized");
    Serial.println("========================>
}

void updateDevice()
{
    // Future Logic

    digitalWrite(STATUS_LED, HIGH);
    delay(500);


}
