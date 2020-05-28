/*
   @title          Blinking an LED with a button
   @description    An LED is blinked every 250 miliseconds when button is pressed.

   @author         YOUR NAME
   @website        your website
   @email          <your@email.com
*/

// When the button is not pressed.
int switchstate = 0;
/*
   Set up the serial port and pins on the Arduino board
*/
void setup() {
  
  // The button is on pin 2.
  pinMode(2, INPUT);
  
  //LED is connected to digital pin 3.
  pinMode(3, OUTPUT);
  
}

/*
   The main loop that runs over and over.
*/
void loop() {
  
  // Is the botton pressed or not.
  switchstate = digitalRead(2);

  // If the button in not pressed.
  if (switchstate == LOW) {
  
    // Turn off the LED
    digitalWrite(3, LOW);       // turn the green LED off pin 3 on
    
  }


  // Otherwise the button is pressed.
  else {

    // Turn on the LED
    digitalWrite(3, HIGH);      // turn the green LED on pin 3 on
    delay(250);                 // duration of the blinking.

    // Turn off the LED
    digitalWrite(3, LOW);       // turn the green LED off pin 3 on
    delay(250);                 // duration of the blinking.

  }
}
