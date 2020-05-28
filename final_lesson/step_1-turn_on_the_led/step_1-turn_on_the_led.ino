void setup()
{
  //set up pins for buttons
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  
  //set up pins for led
  pinMode(7, OUTPUT);
}

void loop() {
  digitalWrite(7,HIGH);
}
