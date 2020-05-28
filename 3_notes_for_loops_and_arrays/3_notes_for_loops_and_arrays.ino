/*
   The entire structure of programming is these four parts:
   1. Variables - saving something for later (using memory)
   2. Functions - defining a set of instructions that can be used over and over
   3. If / Else statements - running code depending on some conditions
   4. Loops - repeating a block of code over and over until we have some reason to stop. ex for loops and while loops
*/


//this an example for storing different pin numbers in an array
int pinsForLEDs[] = {4,6,7};                                            

// We have to do this calculation every time if we want the total number of elements in the array. 
// @see https://forum.arduino.cc/index.php?topic=90244.0
int numberOfLEDs = sizeof(pinsForLEDs)/sizeof(pinsForLEDs[0]);  


void setup() {
  Serial.begin(9600);
}


void loop() {

  /*
   * 4. Loops
   * The for loop is the most common loop we use. 
   * We control the loop with a variable to count how many times we've looped.
   * 
   * So for this example:
   * _Create a variable called currentPin in memory, and store 0 in it. 
   * _Then check if currentPin is less than the numberOfLEDs (in this case there are 3 LEDs).
   * _If this currentPin is less than 3, run the code inside the curly brackets. Otherwise, exit the loop and keep running.
   * _Every time the loop finished, add 1 to currentPin and then we repeat the process, checking it is still less than 3.
   */
  
  for(int currentPin = 0; currentPin<numberOfLEDs; currentPin++;) {
    
    //Get the LED pin from the array
    currentLEDPin = pinsForLEDs[i];

    //Turn off the LED
    digitalWrite(currentLEDPin, LOW); 
  }
}
