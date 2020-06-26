# iBus-Joystick
The iBus Joystick project maps the iBus values to the corresponding joystick signal with a HID supported Arduino device inorder to play games on PC, Android Devices with your Flysky Tx and Rx.

 **Tested with Arduino Pro Micro on Windows 10, macOS 10.15.3 and Android 10 using Flysky FS-i6(Tx) & FS-iA6B(Rx)**

 **Works only with HID supported Arduinos(MEGA32u4)**,
 Refer [ArduinoJoystickLibrary support section ](https://github.com/MHeironimus/ArduinoJoystickLibrary/wiki/Supported-Boards)


## Prerequisites
* [ArduinoJoystickLibrary by Matthew Heironimus](https://github.com/MHeironimus/ArduinoJoystickLibrary)
* [FlySkyIBus by Tim Wilkinson](https://gitlab.com/timwilkinson/FlySkyIBus)


## Instructions
* Add ArduinoJoystickLibrary & FlySkyIBus to your Arduino library directory.
* Open the iBusJoystick.ino in the IDE and upload it to your Arduino.
* Connect the Receiver's +ve pin to any 5V(raw/vcc/5V), -ve to GND and iBus to Rx ports.
* Connect the Arduino to any supported devices and you are ready to go.

## License

This project is licensed under the GNU General Public License v3.0 - see the [LICENSE.md](LICENSE.md) file for details







