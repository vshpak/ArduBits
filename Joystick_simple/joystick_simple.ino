/* 
 * http://cxem.net/arduino/arduino68.php
 * 
 */

 int joyPinX = 1;    // slider variable connecetd to analog pin 1
 int joyPinY = 3;    // slider variable connecetd to analog pin 3
 int joyPinZ = 13;   // slider variable connecetd to digital pin 1
 int valueX = 0;     // variable to read the value from the analog pin 1
 int valueY = 0;     // variable to read the value from the analog pin 3
 int valueZ = 0;     // variable to read the value from the digital pin 1

void setup()
{
  pinMode(joyPinZ, INPUT);   //initialize pin as inputs
  Serial.begin(9600);
}

void loop()
{
  valueX = analogRead(joyPinX);    //read analog value of axis X
  Serial.print("X:");
  Serial.print(valueX, DEC);      //output value to Serial Monitor
 
  valueY = analogRead(joyPinY);    //read analog value of axis Y
  Serial.print(" | Y:");
  Serial.print(valueY, DEC);      //output value to Serial Monitor
 
  valueZ = digitalRead(joyPinZ);   //read analog value of axis Z
  //valueZ = valueZ ^ 1;           //invert the value
  Serial.print(" | Z: ");
  Serial.println(valueZ, DEC);    //output value to Serial Monitor
 
  delay(350);
  
  //in default position:
  //X: ~524
  //Y: ~510
  
  //if turn to UP - Y became to "0"
  //if turn to DOWN - Y became to "1020"
  //if turn to RIGHT - X became to "1020"
  //if turn to LEFT - X became to "0"
}



