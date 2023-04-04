const int ledPin = 13;
const int ledPin2 = 11;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(ledPin2, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(0);        
  digitalWrite(ledPin, HIGH);
  delay(400);              // wait for a second
  digitalWrite(ledPin2, LOW);   // turn the LED off by making the voltage LOW
  delay(2);         
  digitalWrite(ledPin, LOW);
  delay(2);
  digitalWrite(ledPin2, LOW);
  delay(200);         
  digitalWrite(ledPin, LOW);
  delay(200);   // wait for a second
}

//Obligatory Comment
