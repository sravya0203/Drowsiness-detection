// put your setup code here, to run once:
pinMode(gas,INPUT);
pinMode(ir,INPUT);
pinMode(m,OUTPUT);
pinMode(b,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int x=analogRead(gas);
int y=digitalRead(ir);
Serial.print("gas:");
Serial.println(x);
Serial.print("ir:");
Serial.println(y);
delay(1000);
if(x>=920 || y==0)
{
  digitalWrite(m,LOW);
  digitalWrite(b,HIGH);
}
else if (y==3){
digitalWrite(m,LOW);
  digitalWrite(b,HIGH);
}
else
{
  digitalWrite(m,HIGH);
  digitalWrite(b,LOW);
}
}