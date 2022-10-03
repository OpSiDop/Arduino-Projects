int pin = 12;
int pin2 = 13;
int pin3 = 11;
int dT = 100;
int dT2 = 7000;
int dT3 = 250;
int dT4 = 1000;
int i;

void setup()
{
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
}
void loop()
{
  digitalWrite(pin3, HIGH);
  delay(dT2);
  digitalWrite(pin3, LOW);
  delay(dT);

  digitalWrite(pin2, HIGH);
  delay(dT2);
  for (i = 0; i < 3; i++)
  {
    digitalWrite(pin2, LOW);
    delay(dT3);
    digitalWrite(pin2, HIGH);
    delay(dT3);
  }
  digitalWrite(pin2, LOW);
  digitalWrite(pin, HIGH);
  delay(dT4);
  digitalWrite(pin, LOW);
  delay(dT3);
}