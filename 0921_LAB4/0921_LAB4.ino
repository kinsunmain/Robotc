// C++ code
//
void setup()
{
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}

int val1=0;
int val2=0;
int val3=0;

void loop()
{
val1 = digitalRead(2);
if (val1 == HIGH){
  analogWrite(9,255);
}
else{
    analogWrite(9,0);
}
val2 = digitalRead(3);
if (val2 == HIGH){
  analogWrite(10,255);
}
else{
    analogWrite(10,0);
}
val3 = digitalRead(4);
if (val3 == HIGH){
  analogWrite(11,255);
}
else{
    analogWrite(11,0);
}
}
