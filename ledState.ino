void indicateLow()
{
  digitalWrite(led_state, HIGH);
  delay(100);
  digitalWrite(led_state, LOW);
  delay(100);
  digitalWrite(led_state, HIGH);
  delay(10);
  digitalWrite(led_state, LOW);
  delay(10);
  digitalWrite(led_state, HIGH);
  delay(1);
  digitalWrite(led_state, LOW);
  delay(1);
  
}

