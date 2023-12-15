# TINA2 Firmware

![image](http://www.weedo.ltd/wp-content/uploads/2019/11/TINA2.jpg)

## Summary

This is a forked repository that contains the firmware for the TINA2 3D Printer.

You can find the original repository at https://github.com/weedo3d/TINA2firmware

The framework of the firmware is based on the Marlin 1.1.x version.

## MODIFICATIONS

In this fork, I did following changes:

- remove the power loss recovery feature to prevent stutter during the print and increase the sd card life time
- enable the heat bed and temperature sensor. You can use the heat bed from TINA2S as example (https://www.weedo3d.com/products/weedo-3d-printer-accessory-hot-bed-for-tina2s). Only little soldering for the sensor is required
- replace the custom status screen with an heat bed alternative one
- increase the lcd contrast value
- remap unused pin 3 ```X_MIN_PIN``` into ```FAN1_PIN``` to enable part cooling feature. You can use the pin as data signal and add an MOSFET trigger module to drive the fan with higher power (e.g. 12V)

## Product Version

- TINA2 WIFI: TINA2 standard version with ESP32 WIFI module installed. Support remote control, send files via wifi, and online 3d model library.
- TINA2 BASIC: TINA2 lite version, without WIFI module and protective shell.

## Hardware Version

- V2: The motherboard version is 62AS. The endstop type is lever limit switch.
- V3: The motherboard version is 62AS. The endstop type is mushroom head limit switch.

## Compile requirements

- Download and install [VSCode](https://code.visualstudio.com/)
- Search and install PlatformIO IDE from store marketplace
- For Windows (Install the USB driver from /buildroot/driver/CH341SER.ZIP)
- Read this article to understand how to compile and upload your firmware to your printer (https://docs.platformio.org/en/latest/integration/ide/vscode.html)
