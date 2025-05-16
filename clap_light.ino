int micPin = 2;
int ledPin = 13;
int state = LOW;
int val = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(micPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  val = digitalRead(micPin);
  if (val == HIGH) {
    state = !state;
    digitalWrite(ledPin, state);
    delay(500);
  }
}
