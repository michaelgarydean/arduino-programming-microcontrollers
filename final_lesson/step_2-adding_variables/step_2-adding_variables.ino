
/* 
 * Set up variables for pins
 */
int button1Pin = 4;
int button2Pin = 5;

int ledPin = 7;

void setup() {
  
  //set up pins for buttons
  pinMode(button1Pin, INPUT);
  pinMode(button2Pin, INPUT);
  
  //set up pins for led
  pinMode(ledPin, OUTPUT);
  
}

void loop() {
  
  //turn on the LED
  digitalWrite(ledPin,HIGH);
}
