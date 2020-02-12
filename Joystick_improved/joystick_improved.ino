
 int ledPinY1 = 12;
 int ledPinY2 = 11;
 int ledPinG1 = 9;
 int ledPinG2 = 8;
 int ledPinB1 = 6;
 int ledPinB2 = 5;
 int ledPinR = 3;
 
 int joyPinX = 1;                 // slider variable connecetd to analog pin 1
 int joyPinY = 3;                 // slider variable connecetd to analog pin 3
 int joyPinZ = 1;                 // slider variable connecetd to digital pin 1
 int valueX = 0;                  // variable to read the value from the analog pin 1
 int valueY = 0;                  // variable to read the value from the analog pin 3
 int valueZ = 0;                  // variable to read the value from the digital pin 1

void setup()
{
  //initialize pins as outputs
  pinMode(ledPinG1, OUTPUT);
  pinMode(ledPinG2, OUTPUT);
  pinMode(joyPinZ, INPUT);    // Задаем как вход
  Serial.begin(9600);
}

void loop()
{
  checkLEDs();
  
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

void checkLEDs()
{
  delay(3000);
  digitalWrite(ledPinY1, HIGH);
  delay(1000);
  digitalWrite(ledPinY1, LOW);
  digitalWrite(ledPinY2, HIGH);
  delay(1000);
  digitalWrite(ledPinY2, LOW);
  digitalWrite(ledPinG1, HIGH);
  delay(1000);
  digitalWrite(ledPinG1, LOW);
  digitalWrite(ledPinG2, HIGH);
  delay(1000);
  digitalWrite(ledPinG2, LOW);
  digitalWrite(ledPinB1, HIGH);
  delay(1000);
  digitalWrite(ledPinB1, LOW);
  digitalWrite(ledPinB2, HIGH);
  delay(1000);
  digitalWrite(ledPinB2, LOW);
  digitalWrite(ledPinR, HIGH);
  delay(1000);
  digitalWrite(ledPinR, LOW);
}


