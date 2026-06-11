const int redLED = 2;
const int greenLED = 3;
const int tempPin = A0;

void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(tempPin);

  // Convert analog reading to voltage
  float voltage = sensorValue * (5.0 / 1023.0);

  // TMP36 temperature calculation
  float temperatureC = (voltage - 0.5) * 100.0;

  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" °C");

  // Threshold temperature
  if (temperatureC > 30) {
    digitalWrite(redLED, HIGH);
    digitalWrite(greenLED, LOW);
  } else {
    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, HIGH);
  }

  delay(1000);
}
