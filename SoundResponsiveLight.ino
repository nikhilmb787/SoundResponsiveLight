int sensorPin = A0;
int ledPin = 7; 

void setup(){
  pinMode(ledPin, OUTPUT); // Set LED pin as output
  Serial.begin(9600);      // Initialize serial communication
}

void loop(){

  int sensorValue = analogRead(sensorPin); // Read analog input from the LM393 Sensor

  int brightness = map(sensorValue, 0, 1023, 0, 255); // Map the sensor value to the LED brightness range (0-255)

  analogWrite(ledPin, brightness); //Set LED brightness 

  
}
