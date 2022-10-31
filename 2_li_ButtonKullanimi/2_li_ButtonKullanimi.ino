void setup()
{
pinMode(2, OUTPUT);
pinMode(3, INPUT); 
pinMode(4, INPUT);
}
void loop()
{
if (digitalRead(3)==1)
 digitalWrite(2, 1);
if (digitalRead(4)==1) 
 digitalWrite(2, 0);
}
