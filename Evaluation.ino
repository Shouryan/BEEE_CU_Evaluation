
void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);

}

void loop()
{
  digitalWrite(1,HIGH);
  delay(1000);
  digitalWrite(1,LOW);
  digitalWrite(2,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH); 
  delay(1000);
  digitalWrite(3,LOW);
}
  
