# iBus-Joystick
The iBus Joystick project maps the iBus values to the corresponding joystick signal for HID Arduino devices. Which can be used to play games on PC, Android Devices with your Flysky Tx and Rx

 **Tested with Arduino Pro Micro on Windows 10, macOS 10.15.3 and Android 10**

 **Works only with HID supported Arduinos(MEGA32u4)**,
 Refer [ArduinoJoystickLibrary support section ](https://github.com/MHeironimus/ArduinoJoystickLibrary/wiki/Supported-Boards)


## Prerequisites
* [ArduinoJoystickLibrary by Matthew Heironimus](https://github.com/MHeironimus/ArduinoJoystickLibrary)
* [FlySkyIBus by Tim Wilkinson](https://github.com/aanon4/FlySkyIBus)


## Instructions
* Add ArduinoJoystickLibrary to your Arduino library directory
* Open the iBusJoystick.ino and upload it to your Arduino.
* Connect the Receivers +ve pin to any 5v(raw/vcc/5v), -ve to GND and iBus to Rx ports.
* Connect the arduino to any supported devices.

## License

This project is licensed under the GNU General Public License v3.0 - see the [LICENSE.md](LICENSE.md) file for details







