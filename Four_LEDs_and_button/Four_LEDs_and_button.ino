int myLEDs[] = {15, 16, 17, 18};
int buttonPin = 2;
int butonState = 0;     // variable for reading the pin status
int currentLED = 0;

void setup() {
  pinMode(buttonPin, INPUT);   // declare pushbutton as input
  for (int i=0; i<=3; i++) {   // declare LEDs as output
    pinMode(myLEDs[i], OUTPUT);
  }
    for (int i=0; i<=2; i++) {
    digitalWrite(myLEDs[3], HIGH);
    delay(50);
    digitalWrite(myLEDs[3], LOW);
    delay(400);
  }
  digitalWrite(myLEDs[currentLED], HIGH);
}

void loop() {
  butonState = digitalRead(buttonPin);  // read input value
  if (butonState == HIGH) {             // check if the input is HIGH (button released)
    digitalWrite(myLEDs[currentLED], LOW);  // turn current LED off
    if (currentLED == 3) {
      currentLED = 0;
    } else {
      currentLED = currentLED+1;
    }
    digitalWrite(myLEDs[currentLED], HIGH);  // turn next LED on
  }
  delay(150);
}
