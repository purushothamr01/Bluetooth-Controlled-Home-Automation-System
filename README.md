# Bluetooth-Controlled-Home-Automation-System
Overview

This project enables users to control home appliances via Bluetooth using an Arduino and an HC-05/HC-06 module. It allows remote switching of electrical devices using a smartphone.

Components Required

Arduino Uno

HC-05/HC-06 Bluetooth Module

4-Channel Relay Module

Electrical Appliances (Bulbs, Fans, etc.)

Jumper Wires

Smartphone with a Bluetooth Terminal App

Circuit Diagram

Refer to the circuit diagram to properly wire the Arduino, Bluetooth module, and relays.

Installation & Setup

Connect the components as per the circuit diagram.

Upload the provided Arduino code to your Arduino board.

Pair the HC-05/HC-06 module with your smartphone.

Open a Bluetooth Terminal app and connect to the module.

Commands

A → Turn ON Device 1

a → Turn OFF Device 1

B → Turn ON Device 2

b → Turn OFF Device 2

C → Turn ON Device 3

c → Turn OFF Device 3

D → Turn ON Device 4

d → Turn OFF Device 4

How It Works

The Arduino listens for Bluetooth commands from the smartphone.

Based on received commands, it switches the corresponding relay.

The relay controls the power supply to the connected devices.

Demo

After uploading the code and setting up connections, send commands via a Bluetooth Terminal app.

Observe how appliances switch ON and OFF.

Future Enhancements

Adding voice control via Google Assistant.

Controlling appliances through a mobile app instead of a terminal.

Integrating Wi-Fi control for remote access.
