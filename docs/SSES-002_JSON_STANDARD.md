# SSES-002 : JSON Communication Standard

Version: 1.0

## Device Registration

{
  "type":"register",
  "device":"SH001",
  "firmware":"0.1",
  "status":"boot"
}

---

## Heartbeat

{
  "type":"heartbeat",
  "device":"SH001",
  "uptime":120,
  "wifi":true
}

---

## Sensor Data

{
  "type":"sensor",
  "device":"SH001",
  "voltage":48.2,
  "current":5.4,
  "temperature":31.8
}

---

## Command

{
  "type":"command",
  "relay1":true,
  "relay2":false
}

---

## Response

{
  "type":"ack",
  "status":"ok"
}
