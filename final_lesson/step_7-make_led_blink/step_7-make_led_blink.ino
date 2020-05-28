
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
}

void loop() {

  //check if the buttons are pushed
  button1State = digitalRead(button1Pin);
  button2State = digitalRead(button2Pin);

  /*
   * Make an LED blink on when the button is pushed
   */
  if(button2State == HIGH) {

    turnLEDOn();        //turn on the LED
    delay(500);         //wait 500ms
    
    turnLEDOff();        //turn ooff the LED
    delay(500);         //wait 500ms

  } else {
    
    //turn on the LED
    turnLEDOff();
    
  }

}

/*
 * Turn on the LED and print a message in the Serial monitor.
 */
void turnLEDOn() {
    Serial.println("led on");     //print "led on"
    digitalWrite(ledPin,HIGH);    //turn on the LED
}

/*
 * Turn off the LED and print a message in the Serial monitor.
 */
void turnLEDOff() {
    Serial.println("led off");    //print "led off"
    digitalWrite(ledPin,LOW);     //turn off the LED
}
