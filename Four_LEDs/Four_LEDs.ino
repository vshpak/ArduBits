int myLEDs[] = {15, 16, 17, 18};

void setup() {
  //initialize pins as outputs
  for (int i=0; i<=3; i++) {
    pinMode(myLEDs[i], OUTPUT);
  }
  for (int i=0; i<=2; i++) {
    digitalWrite(myLEDs[3], HIGH);
    delay(200);
    digitalWrite(myLEDs[3], LOW);
    delay(200);
  }
}

void loop() {
  for (int i=0; i<=3; i++) {
    digitalWrite(myLEDs[i], HIGH);
    delay(200);
    digitalWrite(myLEDs[i], LOW);
    delay(200);  
  }
}
