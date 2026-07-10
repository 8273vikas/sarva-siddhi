# SH001 Communication Protocol

Version : 0.1

---

## Device Information

Device ID : SH001

Communication :

- WiFi
- Bluetooth
- Serial
- MQTT (Future)

---

## JSON Format

Sensor Data

```json
{
  "device":"SH001",
  "voltage":48.2,
  "current":3.4,
  "temperature":31.8,
  "relay":false
}
```

Command

```json
{
  "relay":true,
  "led":true
}
```

Status

ONLINE

OFFLINE

ERROR

BOOTING
