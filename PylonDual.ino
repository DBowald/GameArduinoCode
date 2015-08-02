/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:


// the setup routine runs once when you press reset:
int pin6 = 0;
int pin7 = 0;
void setup() {   
  // initialize the digital pin as an output.
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);  
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  pin6 = digitalRead(6);
  pin7 = digitalRead(7);
  Serial.print("PIN 6: " );
  Serial.print(pin6);
  Serial.print("   ||   PIN 7: ");
  Serial.println(pin7);
  delay(1000);               // wait for a second
}
