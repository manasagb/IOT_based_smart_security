const int Proxsensor=13;
int inputval=0;
int led=8;
void setup()
{
  pinMode(13,OUTPUT);
  pinMode(led,OUTPUT);
  pinMode(Proxsensor,INPUT);
  Serial.begin(9600);

}

void loop()
{
  if(digitalRead(Proxsensor)==HIGH)
  {
    
    digitalWrite(13,HIGH);
   
  }
  
 else
 {
  digitalWrite(8,HIGH);
  
 }
  inputval=digitalRead(Proxsensor);
  Serial.println(inputval);
  delay(1000);
  

}
