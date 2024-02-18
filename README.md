
# Arduino UNO R3 Firmware

This Arduino firmware is designed to measure temperature and humidity using a DHT sensor and display the readings on an LCD screen. The project includes a modular structure with a class for handling temperature and humidity measurements.

## Table of Contents

- [Arduino UNO R3 Firmware](#arduino-uno-r3-firmware)
  - [Table of Contents](#table-of-contents)
  - [Introduction](#introduction)
  - [Components](#components)
  - [Installation](#installation)
  - [Usage](#usage)
  - [Contributing](#contributing)

## Introduction

The TAndHMeasurement Arduino Firmware provides a simple and modular solution for measuring temperature and humidity and displaying the results on an LCD screen. The firmware is organized into classes, promoting code readability and maintainability.

## Components

- Arduino UNO board (compatible with LiquidCrystal and DHT libraries)
- DHT sensor (Type 11 recommended)
- 16x2 LCD screen
- Jumper wires

## Installation

1. Clone this repository to your local machine:

   ```bash
   git clone https://github.com/etherphis/Arduino-UNO-R3-Temperature-Humidity-Measurement-Firmware.git
   ```

2. Open the `Firmware.ino` file in the Arduino IDE.

3. Connect your Arduino board, DHT sensor, and LCD screen according to the specified pin configurations in the code.

4. Upload the firmware to your Arduino board.

## Usage

1. **Connect Hardware:**
   - Ensure that the DHT sensor and LCD screen are correctly connected to the Arduino board.

2. **Upload Firmware:**
   - Upload the `Firmware.ino` file to your Arduino board using the Arduino IDE.

3. **Monitor Serial Output:**
   - Open the Serial Monitor (baud rate: 9600) to view temperature and humidity readings.

4. **LCD Display:**
   - The LCD screen will display real-time temperature and humidity information.

## Contributing

Contributions are welcome! If you find any issues or have improvements to suggest, please open an issue or create a pull request.

1. Fork the repository.
2. Create a new branch: `git checkout -b feature-name`.
3. Make your changes and commit: `git commit -m 'feat: cool feature'`.
4. Push to the branch: `git push origin feature-name`.
5. Open a pull request.