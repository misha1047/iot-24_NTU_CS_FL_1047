#include <Arduino.h>

<<<<<<< HEAD
// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
=======
void setup() {
  pinMode(2, OUTPUT);
  
  // Initialize serial communication at 115200 baud
  Serial.begin(115200);
  Serial.println("ESP32 Simulation Started!");
}

void loop() {
  digitalWrite(2, HIGH);   
  Serial.println("LED State: ON");
  delay(1000);             
  
  digitalWrite(2, LOW);    
  Serial.println("LED State: OFF");
  delay(1000);             
>>>>>>> 1e17ed552b285197b22213eda2630ac61662e16d
}