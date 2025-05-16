int lightSensorPin = A0;  // Pin connected to the light sensor
int lightLevel;           // Variable to store the light level
int led = 13;             // Pin connected to the LED

void setup() {
  Serial.begin(9600);       // Initialize serial communication at 9600 baud
  pinMode(lightSensorPin, INPUT);  // Set the light sensor pin as input
  pinMode(led, OUTPUT);            // Set the LED pin as output
}


void loop() {
  lightLevel = analogRead(lightSensorPin);  // Read the light level from the sensor
  Serial.println(lightLevel);              // Print the light level to the serial monitor

  // Turn on the LED if it's dark (light level is low)
  if (lightLevel <= 500) {
    digitalWrite(led, LOW);  // Turn the LED off
  } else {
    digitalWrite(led, HIGH);   // Turn the LED on
  }

  delay(500);  // Wait for 500 milliseconds before the next loop
}
