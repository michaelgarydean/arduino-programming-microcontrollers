
/* 
 * Set up variables for pins
 */
int button1Pin = 4;
int button2Pin = 5;

int ledPin = 7;

/* 
 * Variables for button states
 */
int button1State = 0;    //button not pushed by default
int button2State = 0;   //button not pushed by default

void setup() {
  //set up pins for buttons
  pinMode(button1Pin, INPUT);
  pinMode(button2Pin, INPUT);
  
  //set up pins for led
  pinMode(ledPin, OUTPUT);
  
  //Open up the serial port
  Serial.begin(9600);
} //end setup() function

void loop() {

  //check if the buttons are pushed
  button1State = digitalRead(button1Pin);
  button2State = digitalRead(button2Pin);
  
  /*
   * If button 1 and 2 are pushed, turn the LED on.
   * If just button 1 is pushed, make the LED blink.
   * If just button 2 is pushed, make the LED blink.
   * Otherwise, make sure the LED is turned off.
   */
  if(button1State == HIGH && button2State == HIGH) {
    
    turnLEDOn();    //turn on the LED

  } else if (button1State == HIGH) {
    
    blinkLED();     //make the LED blink
    
  } else if (button2State == HIGH) {
   
    blinkLED();     //make the LED blink
    
  } else {

    turnLEDOff();   // turn the LED off
    
  } //end if/else statement

} //end loop() function

/*
 * Turn on the LED and print a message in the Serial monitor.
 */
void turnLEDOn() {
    Serial.println("led on");     //print "led on"
    digitalWrite(ledPin,HIGH);    //turn on the LED
} //end turnLEDOn() function

/*
 * Turn off the LED and print a message in the Serial monitor.
 */
void turnLEDOff() {
    Serial.println("led off");    //print "led off"
    digitalWrite(ledPin,LOW);     //turn off the LED
} //end turnLEDOff() function

/*
 * Make the LED blink by turning it on and off.
 */
void blinkLED() {

    turnLEDOn();        //turn on the LED
    delay(500);         //wait 500ms
    
    turnLEDOff();        //turn off the LED
    delay(500);         //wait 500ms
} //end blinkLED() function
