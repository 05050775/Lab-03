float R1,R2,R=100000,i,sensorValue=0, sensorVoltage=0,Vin;

void setup()
{
  Serial.begin(9600);
  pinMode(15,OUTPUT);
}
void loop()
{
  for(i=0;i<=5;i++)
  sensorValue = 0.7* sensorValue + 0.3* analogRead(15); 

  sensorVoltage = sensorValue * 5 / 4095;
  R1 = sensorValue*(R)/5;
  R2 = R - R1;

  Serial.println(sensorValue);
  Serial.println(sensorVoltage);
  Serial.println(R2-R);
    delay(500);
}

