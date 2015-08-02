/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:


// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);  
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(7, LOW);    // turn the LED off by making the voltage LOW
  sensorValue = analogRead(A1)
  Serial.write(sensorValue)
  delay(1000);               // wait for a second
}
