float Vin, Analogin=0, i;

void setup() 
{
  Serial.begin(9600);
 pinMode(14,OUTPUT);

   for (i=0;i<=5;i++)
  {
    Analogin = 0.7* Analogin + 0.3* analogRead(14);
    Vin = Analogin * 2.5 / 4095;
    Serial.println(Vin);
    Serial.println(analogRead(14));
    delay(500);

  }

}

void loop()
{

  }


