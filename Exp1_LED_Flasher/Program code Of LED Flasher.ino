void setup()
{
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  digitalWrite(8, HIGH);
  delay(125); // Wait for 125 millisecond(s)
  digitalWrite(8, LOW);
  delay(125); // Wait for 125 millisecond(s)
  digitalWrite(9, HIGH);
  delay(125); // Wait for 125 millisecond(s)
  digitalWrite(9, LOW);
  delay(125); // Wait for 125 millisecond(s)
  digitalWrite(10, HIGH);
  delay(125); // Wait for 125 millisecond(s)
  digitalWrite(10, LOW);
  delay(125); // Wait for 125 millisecond(s)
}