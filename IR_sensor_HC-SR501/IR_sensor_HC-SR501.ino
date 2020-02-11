const int movPin = 2;
const int ledPin = 13;

void setup() {
    Serial.begin(9600);
    pinMode(movPin, INPUT);
    pinMode(ledPin, OUTPUT);
}

void loop(){
    int val = digitalRead(movPin);
    if (val)
        digitalWrite(ledPin, HIGH);
        delay(100);
        digitalWrite(ledPin, LOW);
}
