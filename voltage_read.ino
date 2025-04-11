int sensorPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(sensorPin);
  float voltage = value * 5.0 / 1024.0;

  Serial.print("Spannung: ");
  Serial.print(voltage);
  Serial.println(" V");

  delay(1000);
}
