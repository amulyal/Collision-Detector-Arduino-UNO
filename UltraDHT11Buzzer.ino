#include <dht.h>

const int trigPin = 9;
const int echoPin = 10;
const int buzzer = 11;
const int ledPin = 13;

#define DHT11_PIN 7

dht DHT;

void setup() {
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  pinMode(buzzer, OUTPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600); // Starts the serial communication
}

void loop() {
  
  float duration, distance;
  float speed;
  
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  //Speed is calculated considering enivronmental factors
  speed = 331.4 + (0.606 * DHT.temperature) + (0.0124 * DHT.humidity);
  //Distance = Time x Speed
  distance = (duration / 2) * (speed / 10000);

  if (distance <= 60){ //threshold is 60cm
    digitalWrite(buzzer, HIGH);
    digitalWrite(ledPin, HIGH);
    Serial.print("Distance = ");
    Serial.print(distance);
    Serial.println(" cm");
    Serial.println("Too close");
  }
  else{
    digitalWrite(buzzer, LOW);
    digitalWrite(ledPin, LOW);
    Serial.print("Distance = ");
    Serial.print(distance);
    Serial.println(" cm");
  }
  delay(1000);
  Serial.println(" ");
}