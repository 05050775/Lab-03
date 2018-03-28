int val;
void setup()
{
  Serial.begin(9600);
  Serial.println("Hello,World!");
 
  pinMode(8,OUTPUT);
}
void loop()
{
  if(Serial.available())
  {
    val = Serial.read();
    if(val == '0')
    {
      digitalWrite(8, LOW);
      Serial.println("LED OFF");
    }
    else if(val == '1')
    {
      digitalWrite(8, HIGH);
      Serial.println("LED ON");
    }
  }
}

