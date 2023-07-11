# Arduino Remote Light Switcher
## Introduction
The purpose of this project was to design and implement an Arduino-based light switcher for a lamp using an infrared (IR) receiver and controller. The project aimed to provide a convenient way to turn on and off the lamp remotely, enhancing user experience and enabling automation.

## Components Used
The following components were utilized in this project:

- [Arduino board](https://store.arduino.cc/products/arduino-uno-rev3)
- [IR receiver module](https://store.arduino.cc/products/ir-receiver-sensor?queryID=undefined)
- IR controller
- Lamp (any standard lamp compatible with the Arduino relay)
- [Relay module](https://store.arduino.cc/products/1-relay-module-5-vdc-10a-assembled?queryID=1ed0183eb23056c625b2e9d5c69c52bb)
- Jumper wires
- Power source (e.g., USB cable or external power supply)

## Circuit Diagram
![simulation](https://github.com/dim-tsoukalas/arduino-remote-light-switcher/assets/64429662/5b6b54c5-9e48-47da-b2fb-39b8413fc4aa)

## Testing and Results
After assembling the circuit and uploading the code to the Arduino board, several tests were conducted to verify the system's functionality. The IR controller was used to send commands to the IR receiver module, and the lamp's response was observed. The lamp should turn on when the "power on" command was sent and turn off when the "power off" command was received.

The tests yielded successful results, with the lamp responding appropriately to the IR commands. The system proved reliable and effective in providing remote control over the lamp's power supply.
![IMG_20230710_172206](https://github.com/dim-tsoukalas/arduino-remote-light-switcher/assets/64429662/d58e4c8b-8e35-4095-9eec-bb512cfa6174)
![IMG_20230710_172211](https://github.com/dim-tsoukalas/arduino-remote-light-switcher/assets/64429662/931da2e0-7661-432c-83a5-a1dff92e4b3c)


https://github.com/dim-tsoukalas/arduino-remote-light-switcher/assets/64429662/a1eb99d1-0648-4581-8dcc-3511a7b8eedb
## Conclusion
The Arduino light switcher for a lamp using an IR receiver and controller, successfully achieved its intended goal. By implementing the circuit and programming, we created a practical and user-friendly solution to remotely control the lamp's power state. The project's success highlights the versatility of Arduino in home automation applications and its potential for further enhancements and integrations.
