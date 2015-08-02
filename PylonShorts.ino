/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:


// the setup routine runs once when you press reset:
int analog4 = 0;
int analog5 = 0;
void setup() {   
  // initialize the digital pin as an output.
  pinMode(6, INPUT);
  pinMode(4, INPUT);
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  analog4 = analogRead(A4);
  analog5 = analogRead(A5);
  Serial.print("A4: " );
  Serial.print(analog4);
  Serial.print("   ||   A5: ");
  Serial.println(analog5);
  delay(1000);               // wait for a second
}
