
/* 
 * Set up variables for pins
 */
int button1Pin = 4;
int button2Pin = 5;

int ledPin = 7;

/* 
 * Variables for button states
 */
int button1State = 0;

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
  //check if the button is pushed
  button1State = digitalRead(button1Pin);
  
  //if the button is pushed, turn on the LED
  if(button1State == HIGH) {
    
    //print pushed
    Serial.println("pushed");
    
    //turn on the LED
    digitalWrite(ledPin,HIGH);
    
  } else {
    
    //print not pushed
    Serial.println("not pushed");
    
    //turn off the LED
    digitalWrite(ledPin,LOW);
  }
    

}
