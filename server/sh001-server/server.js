const fs = require("fs");
const express = require("express");

const app = express();
const PORT = 3000;

app.use(express.json());

// Home
app.get("/", (req, res) => {
    res.send("Sarva Siddhi SH001 Server Running");
});

// Register Device
app.post("/api/register", (req, res) => {

    let devices = [];

    // Read existing devices
    if (fs.existsSync("devices.json")) {
        try {
            devices = JSON.parse(
                fs.readFileSync("devices.json", "utf8")
            );
        } catch (err) {
            devices = [];
        }
    }

    // Device Object
    const device = {
        device: req.body.device,
        firmware: req.body.firmware,
        status: req.body.status,
        lastSeen: new Date().toISOString()
    };

    devices.push(device);

    // Save
    fs.writeFileSync(
        "devices.json",
        JSON.stringify(devices, null, 2)
    );

    console.log("=================================");
    console.log("New Device Registered");
    console.log(device);
    console.log("=================================");

    res.json({
        status: "ok",
        message: "Device Registered",
        device: device
    });

});

// Get Device List
app.get("/api/devices", (req, res) => {

    let devices = [];

    if (fs.existsSync("devices.json")) {
        try {
            devices = JSON.parse(
                fs.readFileSync("devices.json", "utf8")
            );
        } catch (err) {
            devices = [];
        }
    }

    res.json(devices);

});

// Server Start
app.listen(PORT, () => {

    console.log("=================================");
    console.log(" Sarva Siddhi Server Started");
    console.log(" Port :", PORT);
    console.log("=================================");

});
