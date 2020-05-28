int pinNumber = 16;
float sensorValue = 0.38757658;

void setup() {
  Serial.begin(9600); //open the serial port so we can print to the serial monitor
}

void loop() {
  int myNewNumber;
  
  String boysName = "Charles";
  String girlsName = "Rebecca";
  
  printDogsName(boysName);
  printDogsName(girlsName);

  //variable = function(inputs);
  myNewNumber = addTwoNumbers(1,45);
  
  
}

void printDogsName(String nameOfDog) {
  
  Serial.println(nameOfDog);
 
}

int addTwoNumbers(int number1, int number2) {
  return number1 + number2;
}
