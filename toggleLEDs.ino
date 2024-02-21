
void toggleLEDs() {
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  delay(500);

  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(500);
}