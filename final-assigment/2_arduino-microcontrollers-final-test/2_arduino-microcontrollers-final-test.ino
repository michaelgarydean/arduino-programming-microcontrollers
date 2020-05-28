/*
 * @description   
 * 
 * Turn on three LEDs, one at a time. 
 * 
 * The LEDs are on 3 different pins #4, #5, and #6. 
 * These pins are stored in an array called pinsForLEDs.
 * 
 * @instructions
 * 
 * There are 2 steps here. Both are in the for loop, inside the loop() function
 * Step 1. Get the LED pin from the array pinsForLEDs
 * Step 2. Call the function turnOnTheLED() with that pin so you can turn on the LED
 * 
 */

//the pins where we have connected the LEDs
int pinsForLEDs[] = {4,6,7};                                            

// the total number of elements in the array. @see https://forum.arduino.cc/index.php?topic=90244.0
int numberOfLEDs = sizeof(pinsForLEDs)/sizeof(pinsForLEDs[0]);          

void setup() {
  Serial.begin(9600);

  //Print a confirmation message to tell us how many LEDs there are in total.
  String confirmMessage = "There are a total of: ";
  Serial.println(confirmMessage + numberOfLEDs + " LEDs");
}

void loop() {

  //Go through each pin and turn it on, one at a time
  for(int i = 0; i<numberOfLEDs; i++) {

    //Step 1. get the led pin from the array
    
    //Step 2. Turn on the LED using the turnOnTheLED() function
    
    //then wait 250 ms
    delay(250);
    
  }

  //and then turn them all off
  turnOffAllLEDs();

  //then wait 250 ms
  delay(500);

}

/*
 * @description Turn off on an LED on a specific pin and print a confirmation message.
 * 
 * @params        The pin for the LED we will turn on
 * @return        No return (this is a void function)
 */
void turnOnTheLED(int ledPin) {
  
  // turn the LED on
  digitalWrite(ledPin, HIGH);

  //Print a confirmation message
  String confirmMessage = "Turning on the LED on pin #: ";
  Serial.println(confirmMessage + ledPin);
  
}

/*
 * @description Turn off all LEDs in the circuit
 * 
 * @params        No inputs.
 * @return        No return (this is a void function)
 */
void turnOffAllLEDs() {

  //initialize a variable for the current LED pin.
  int currentLEDPin;

  //go through each pin stored in the pinsForLEDs array and turn off the LED on that pin
  for(int i = 0; i<numberOfLEDs; i++) {

    //Get the LED pin from the array
    currentLEDPin = pinsForLEDs[i];

    //Turn off the LED
    digitalWrite(currentLEDPin, LOW); 

    //Print a confirmation message
    String confirmMessage = "Turning off the LED on pin: ";
    Serial.println(confirmMessage + currentLEDPin);
  }
}
