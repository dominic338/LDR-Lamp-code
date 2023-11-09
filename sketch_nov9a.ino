void setup() {
  pinMode(2, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
  delay(500);
}

void loop() {
  Serial.println(analogRead(A0)); // แสดงค่า scaledValue ผ่าน Serial Monitor

  if (analogRead(A0) >= 500) {
    digitalWrite(2, LOW);
  } else {
    digitalWrite(2, HIGH);
  }
}