char inChar;

void setup() {
  Serial.begin(9600);

  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {

  //do dis loop while serial comm is available
  while (Serial.available() > 0)
  {
    //read in a character sent from phone to BT module to RX on Arduino (Serial.read takes care of it)
    inChar = Serial.read();

    // the = char comes before a command, this will need to be rewritten slightly if accelerometer is used because, because....
    if (inChar == '=')
    {
      //for whatever reason, this is a good way I found to let the serial communication reset, otherwise you will not receive the correct character when calling Serial.read agian
      while (Serial.available() == 0) {
      }

      //read the command value (0-9 and A)
      inChar = Serial.read();

      //print (for debug porpises)
      Serial.println(inChar);

    }

    //switch case to decide what to do with command. Right not it is programed for just driving, but 6 more cases can be added for the 6 additionally available buttons
    //the drive code could be prettier (ie calling a function) but this works fine for now haha
    switch (inChar)
    {
    case '0': 
      analogWrite(9, 0);
      analogWrite(10, 0);
      break;
    case '1': //forward
      analogWrite(9, 255);
      analogWrite(10, 255);
      digitalWrite(2, 1);
      digitalWrite(3, 0);
      digitalWrite(4, 1);
      digitalWrite(5, 0);
      break;
    case '2': //reverse
      analogWrite(9, 255);
      analogWrite(10, 255);
      digitalWrite(2, 0);
      digitalWrite(3, 1);
      digitalWrite(4, 0);
      digitalWrite(5, 1);
      break;
    case '3': //left button (turns right?)
      analogWrite(9, 255);
      analogWrite(10, 255);
      digitalWrite(2, 1);
      digitalWrite(3, 0);
      digitalWrite(4, 0);
      digitalWrite(5, 1);
      break;
    case '4': //right
      analogWrite(9, 255);
      analogWrite(10, 255);
      digitalWrite(2, 0);
      digitalWrite(3, 1);
      digitalWrite(4, 1);
      digitalWrite(5, 0);
      break;
    case '5': //select
      digitalWrite(12, LOW);
      break;
    case '6': //start
      digitalWrite(12, HIGH);
      break;

    case '7': //triangle
      digitalWrite(12, HIGH);
      break;
      //8 is square
      //9 is x
    case 'A': //circle
      digitalWrite(12, HIGH);
      break;

    }
  }
}

