void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("this is before the function");
  printMyDogsName();
  Serial.println("this is after the function");
}

void printMyDogsName() {
  Serial.println("Dawg");
  delay(500);
}
