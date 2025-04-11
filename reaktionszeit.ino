int ledPin = 13;
int buttonPin = 2;
unsigned long startTime;
bool ready = false;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() {
  delay(random(2000, 5000));
  digitalWrite(ledPin, HIGH);
  startTime = millis();
  ready = true;

  while (ready) {
    if (digitalRead(buttonPin) == HIGH) {
      unsigned long reactionTime = millis() - startTime;
      Serial.print("Reaktionszeit: ");
      Serial.print(reactionTime);
      Serial.println(" ms");
      digitalWrite(ledPin, LOW);
      ready = false;
      delay(2000);
    }
  }
}
