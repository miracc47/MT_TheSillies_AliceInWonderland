// 4th Mechanism: Little Alice to Big Alice

#include <Servo.h>

Servo myservo;
const int buttonPin = 2;

void setup() {
  myservo.attach(9);
  pinMode(buttonPin, INPUT);
}

void loop() {
  if (digitalRead(buttonPin) == HIGH ){
  } else {
    myservo.write(0);
  }
}