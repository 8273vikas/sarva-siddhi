/*
 * SH001 Smart Core Controller
 * Firmware Version : 0.1
 * Project : Sarva Siddhi
 */

#define STATUS_LED 2

void setup() {

  Serial.begin(115200);

  pinMode(STATUS_LED, OUTPUT);

  Serial.println();
  Serial.println("================================");
  Serial.println("SH001 Smart Core Controller");
  Serial.println("Firmware Version 0.1");
  Serial.println("Sarva Siddhi Project");
  Serial.println("================================");

}

void loop() {

  digitalWrite(STATUS_LED, HIGH);
  delay(500);

  digitalWrite(STATUS_LED, LOW);
  delay(500);

}
