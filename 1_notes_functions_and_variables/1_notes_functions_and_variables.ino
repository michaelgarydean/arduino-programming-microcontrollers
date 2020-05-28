/*
   The entire structure of programming is these four parts:
   1. Variables - saving something for later (using memory)
   2. Functions - defining a set of instructions that can be used over and over
   3. If / Else statements - running code depending on some conditions
   4. Loops - repeating a block of code over and over until we have some reason to stop. ex for loops and while loops
*/

/*
   1. Variables
   _Every time you want to use a variable, we need to "initialize" it.
   _This means we need to save a spot in memory.
   _There are a few different data types, including int, float, String
*/

//Example of initializing a variable (this is in the global scope)
int pos;

//After you initialize a variable, you can assign something to it.
pos = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  
  /*
   * 2. Calling functions
   * Functions allow us to consolodate code, or use the same code over and over.
  */

  /*
   * This function does not return a value. 
   * Just go run the code we have written inside the function for printHello().
   */
  printHello();

  /*
   * If we want to write a function that gives us back a value, we can write something like:
  */
  pos = getEncoderPosition();         //the format is: variable = function(inputs);

}

/* Function definitions
 *  Remember, There are two types of functions.
 *  1. Functions that don't return anything (void functions) 
 *  2. Functions that give back a value (they return a value)
 */

/*
 * This is a void function. It does not give a value back, it just does some instructions.
 * Void means: "Don't give any value back".
 */
void printHello() {
  Serial.println("Hello!");
}

/*
 * A function that begins with int, String or some data type will return a value. 
 * In this case it gives back 0.
 * Remember, the number we "return" needs to be the same as the datatype for the function, in this case an "int".
 */
int getEncoderPosition() {
  return 0;
}
