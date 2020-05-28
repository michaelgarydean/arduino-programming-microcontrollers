
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
  
  //if button2 is pushed, print "pushed"
  if(button2State == HIGH) {
    
    //print pushed
    Serial.println("pushed");
    
    //turn on the LED
    digitalWrite(ledPin,HIGH);
  } else {
    
    //print pushed
    Serial.println("not pushed");
    
    //turn on the LED
    digitalWrite(ledPin,LOW);
  }
    

}
