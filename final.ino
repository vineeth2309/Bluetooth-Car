int a=8,b=9,c=10,d=11;
int enter=0;
String text;
void setup() {
  Serial.begin(9600);
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
 }

void loop() {
  if(Serial.available()>0)
  {
    enter=Serial.read();
    if(enter=='1')
    {
     digitalWrite(a,LOW);
     digitalWrite(b,HIGH);
     digitalWrite(c,HIGH);
     digitalWrite(d,LOW);
    }
    else if(enter=='0')
    {
     digitalWrite(a,HIGH);
     digitalWrite(b,LOW);
     digitalWrite(c,LOW);
     digitalWrite(d,HIGH);
    }
    else if(enter=='2')
    {
      digitalWrite(a,LOW);
      digitalWrite(b,HIGH);
      digitalWrite(c,LOW);
      digitalWrite(d,LOW);
    }
    else if(enter=='3')
    {
      digitalWrite(a,LOW);
      digitalWrite(b,LOW);
      digitalWrite(c,HIGH);
      digitalWrite(d,LOW);
    }
    else if(enter=='5')
    {
      digitalWrite(a,LOW);
      digitalWrite(b,LOW);
      digitalWrite(c,LOW);
      digitalWrite(d,LOW);
    }
    
    
   }
  
}
