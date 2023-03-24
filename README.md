# Collision-Detector-Arduino-UNO

This is a collision detector for the front end bumper of a car. We start by using a sensor to detect an object present in front of the car while driving or parking. The sensor used to carry out the detection is an ultrasonic sensor.

## To Build The Circuit

To build the circuit, we take a HC SR-04 Ultrasonic Sensor and connect it to a micro controller to read its readings. The micro controller used here is an Arduino UNO. The Trig and Echo Pins are connected to the Header Pins 9 and 10 of the Arduino, the Vcc pin to the 5V input and the Ground to Ground pin of Arduino. Then, we connect a DHT11 Temperature and Humidity sensor to the breadboard and connect the Data pin to the 7 Header pin of the Arduino to send data, and the Vcc and Ground to its respective pins on the breadboard along the pin line of the ultrasonic sensor. The readings from both the sensors are used to calculate the time delay and environmental factors that affect the time and speed. 
We also connect a Buzzer and an LED bulb that gets programmatically triggered when the object crosses the safety distance from the sensor. The positive end of the buzzer is connected to the 11 Header pin of the Arduino and the negative to the ground of Arduino. The long of the LED is connected to a 220 ohm resistor and the short end of the LED to the Arduino ground. The other end of the resistor is connected to the 13 Header Pin of the Arduino. The ballast resistor is used to limit the current through the LED and to prevent excess current that can burn out the LED. 
Refer to the Simulation Diagram attached.

## To Run The Code

1. Download the .ino file
2. Load the Sketch to to Arduino IDE
3. Select the Board (Arduino UNO) and Port (COM1/COM2/COM3/COM4)
4. Verify and Upload the Sketch
