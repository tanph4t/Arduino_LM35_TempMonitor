int adcValues[2];
float nhietDo[2];

void setup() {
  Serial.begin(9600);
}

void loop() {
  adcValues[0] = analogRead(A0);
  nhietDo[0] = (adcValues[0] * 500.0) / 1023.0;

  adcValues[1] = analogRead(A1);
  nhietDo[1] = (adcValues[1] * 500.0) / 1023.0;

  Serial.print((int)nhietDo[0]);
  Serial.print(",");
  Serial.println((int)nhietDo[1]);

  delay(100);
}