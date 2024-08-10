# Automated Garden Door Opener via SMS

This project is an automated garden door opener system, designed to be controlled via SMS messages using an Arduino microcontroller. The system includes a motor mechanism, various electronic components, and a GSM module for receiving SMS commands.

## Overview

The automated garden door opener system allows for remote control of a garden door using SMS commands sent to a GSM module connected to an Arduino board. The system is designed for convenience, security, and ease of use.

### Key Features
- **SMS Control**: Operate the garden door by sending SMS commands.
- **Manual Override**: Manual control is available as a fallback option.
- **Secure and Efficient**: Only pre-authorized numbers can control the door, ensuring security and efficient use of resources.
- **Customizable Settings**: Users can adjust door movement settings through the system.

## Components

1. **Arduino Board**: The core controller that processes SMS commands and controls the door mechanism.
2. **GSM Module**: Receives SMS commands and communicates with the Arduino board.
3. **Motor Driver**: Controls the motor's speed and direction for opening and closing the door.
4. **Power Supply**: Provides necessary power to the system components.
5. **Sensors**: Monitor the position of the door.
6. **Relay Module**: Controls the activation of the motor.

## Getting Started

### Prerequisites

- Basic knowledge of Arduino, GSM modules, and electronic components.
- Necessary hardware components (listed above).
- Arduino IDE installed on your computer.

### Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/reza9234/automated_door.git

2. Open the `bagh1.ino` file in the Arduino IDE.
3. Upload the code to the Arduino board.

### Usage

1. Set up all hardware components as per the circuit diagram provided in the repository.
2. Power on the system and ensure the GSM module is operational.
3. Send an SMS command from a pre-authorized number to control the garden door.

## How It Works

The system employs an Arduino microcontroller to manage a motor connected to the garden door. the motor driver regulates the door's movement. The user can control the system remotely or manually via a switch.

### Images

![Circuit Board Setup](https://github.com/user-attachments/assets/1eb3dd25-ac56-4380-9751-ca0a81b5957b)


_Figure 1: Circuit board setup with Arduino and components._

![second picture](https://github.com/user-attachments/assets/82d07b9c-9567-483f-ab8d-eba2884ed426)

_Figure 2: Motor mechanism attached to the garden door._

### Video Demonstration

![Click here to watch the system in action](https://github.com/user-attachments/assets/404ec65a-940f-45e1-a6a3-a33356dc0076)




