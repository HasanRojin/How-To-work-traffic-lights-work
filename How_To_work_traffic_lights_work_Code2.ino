const int redPin = 10;    // Red LED pin
const int yellowPin = 9;  // Yellow LED pin
const int greenPin = 8;   // Green LED pin

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  // Green light on for 5 seconds
  digitalWrite(greenPin, HIGH);
  delay(5000);
  digitalWrite(greenPin, LOW);

  // Yellow light on for 2 seconds
  digitalWrite(yellowPin, HIGH);
  delay(2000);
  digitalWrite(yellowPin, LOW);

  // Red light on for 5 seconds
  digitalWrite(redPin, HIGH);
  delay(5000);
  digitalWrite(redPin, LOW);
}
