/*
 * @description   Turn on an LED if a button is pushed.
 * 
 * @instructions
 * Finish this code so that it works. 
 * 
 * We are practicing writing functions.You should have all the info 
 * you need from previous examples, so try to look at them for reference.
 * 
 * Remember, there are two types of functions:
 * - Functions that don't give a value back (void functions)
 * - Functions that give back a value (such as int, float etc)
 * 
 * There are a few steps.
 * 1. Build a circuit with a button and an LED
 * 2. Set-up any variables you need, such as the pins and initialize the buttonState
 * 3. Write the functions needed to make the code work.
 * 
 * There are 3 functions you will have to write:
 * 1. getButtonState()
 * 2. turnOnTheLED()
 * 3. turnOffTheLED()
 */

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  buttonState = getButtonState();

  //If the button is pressed
  if(buttonState == 1) {

    //turn on the LED
    turnOnTheLED();
    
  } else

    //otherwise, make sure the LED is turned off
    turnOffTheLED();
  }

}

/*
 * WRITE YOUR FUNCTIONS HERE
 */

 /*
  * getButtonState() should return 1 if the button is pushed, or 0 if it is not.
  * It should also print out what the button state is in the serial monitor.
  */

  
 /*
  * turnOnTheLED() should turn on the LED 
  * and also print "LED is on" in the serial monitor
  */

   /*
  * turnOffTheLED() should turn off the LED 
  * and also print "LED is off" in the serial monitor
  */
