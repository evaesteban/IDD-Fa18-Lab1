/*
 ECE 5413: Developing and Designing Interactive Devices 
 Laboratory 1 Part E Exercise 2
 Author: Eva Pilar Esteban Velasco
 Date: 09/05/2019
*/

void setup() {
  
  // set PIN 9 as output.
  pinMode(9, OUTPUT);
  
}

void loop() {
  
  digitalWrite(9, HIGH);   // turn LED on
  delay(2000);             // wait two seconds
  digitalWrite(9, LOW);    // turn LED off 
  delay(2000);             // wait two seconds
  
}
