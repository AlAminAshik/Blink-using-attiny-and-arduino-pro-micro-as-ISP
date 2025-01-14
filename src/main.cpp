//This code shows how to upload a code to attiny using arduino as ISP
//at first upload code to arduino as ISP from arduino ide>example>arduinoISP
//next connect the arduino to attiny
//then select the board as attiny85 and programmer as arduino as ISP
//IMP since arduino pro micro is used which uses atmega32U4, a significant change has to be done in platform.ini file
//for other arduino board such as arduino ide this is not needed.

#include <Arduino.h>

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(DD1, OUTPUT);   //D1 as output
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(DD1, HIGH);  //
  delay(1000/10);                      // wait for a second
  digitalWrite(DD1, LOW);   // turn the LED off by making the voltage LOW
  delay(1000/10);                      // wait for a second
}