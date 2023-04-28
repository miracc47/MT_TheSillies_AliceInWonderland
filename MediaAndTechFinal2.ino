//Alice in Wonderland

//Team Name: The Sillies
//Team Members: Miranda Cruz and Leah Barragan
//Description: In this program, we have included five interactions that each consist of a button and copper tape.


#include <Servo.h>
Servo doorServo;
Servo bunnyServo;
Servo turnServo;

//VARIABLES FOR OUTPUTS (SERVOS, LEDS)
#define door 9
#define turnTable 10
#define bunnyEars 11
#define tunnelLed 12
#define drinkLed 13

//VARIABLES FOR INPUTS (BUTTONS)
#define doorButton 2
#define turnTableButton 3
#define bunnyEarsButton 4
#define drinkLedButton 5
#define tunnelLedButton 6


//SETTING UP SERVOS, BUTTONS, LEDS
void setup() {
  doorServo.attach(door);
  bunnyServo.attach(bunnyEars);
  turnServo.attach(turnTable);
  pinMode(tunnelLed, OUTPUT);
  pinMode(drinkLed, OUTPUT);

  pinMode(doorButton, INPUT_PULLUP);
  pinMode(turnTableButton, INPUT_PULLUP);
  pinMode(bunnyEarsButton, INPUT_PULLUP);
  pinMode(drinkLedButton, INPUT_PULLUP);
  pinMode(tunnelLedButton, INPUT_PULLUP);
}


//LOGIC (All if statements use an ! because an internal resistor inverts the values of "on" and "off". We did this for neater code.)
void loop() {
  //conditional statement: if the switch is activated, turn on the blue LED for the shrink potion 
  digitalWrite(drinkLed, !digitalRead(drinkLedButton));
  

  //conditional statement: if the switch is activated, turn on the red LEDs present in the tunnel
  if(!digitalRead(tunnelLedButton))digitalWrite(tunnelLed, !digitalRead(tunnelLed));
  else digitalWrite(tunnelLed, LOW);

  //conditional statement: if the switch is activated, turn the servo 130 degrees to mimic the opening of a door
  if(!digitalRead(doorButton))
      doorServo.write(130);
  else
    doorServo.write(30);

  //conditional statement: if the switch is activated, turn the servo 180 degrees to reveal a big Alice
  if(!digitalRead(turnTableButton))
      turnServo.write(180);
  else
    turnServo.write(0);
  
  //conditional statement: if the switch is activated, turn the servo 180 degrees to mimic the rabbit's ears moving
  if(!digitalRead(bunnyEarsButton))
      bunnyServo.write(180);
  else
    bunnyServo.write(90);
  
  //code that gives the red tunnel LEDs the blinking effect
  delay(150);
}
