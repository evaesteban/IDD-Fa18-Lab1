/*
 ECE 5413: Developing and Designing Interactive Devices 
 Laboratory 1 Part C Exercise 2
 Author: Eva Pilar Esteban Velasco
 Date: 09/05/2019
*/

void setup() {
  
  // set built-in LED as output.
  pinMode(LED_BUILTIN, OUTPUT);
  
}

void loop() {
  
  digitalWrite(LED_BUILTIN, HIGH);   // turn LED on
  delay(2000);                       // wait two seconds
  digitalWrite(LED_BUILTIN, LOW);    // turn LED off 
  delay(2000);                       // wait two seconds
  
}
