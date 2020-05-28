/*
   The entire structure of programming is these four parts:
   1. Variables - saving something for later (using memory)
   2. Functions - defining a set of instructions that can be used over and over
   3. If / Else statements - running code depending on some conditions
   4. Loops - repeating a block of code over and over until we have some reason to stop. ex for loops and while loops
*/

int buttonState;

void setup() {
  Serial.begin(9600);
}

void loop() {

  //Find out if the button on pin 2 is pushed or not.
  buttonState = digitalRead(2);

  /*
   * 3. If / Else Statements
   * We use If / Else statements to run some code depending on a condition.
   * Here, we are printing one message if the button is pushed, or something else if it is not pushed.
   */
  if(buttonState == 1) {
    
    printMyMessage("pushed!");
    
  } else {

    printMyMessage("not pushed.");
    
  }

}

/*
 * This function uses some "parameters", or input.
 * We can call the parameter anything we want, but we need to tell the function what type of data to expect.
 * So for this function, you can send it any data that is a String. Inside the function, you can refer to that data
 * with the name messageToPrint.
 */
void printMyMessage(String messageToPrint) {
  
  Serial.println(messageToPrint);
  
}
