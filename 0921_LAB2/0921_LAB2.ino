void setup() {
pinMode(8,INPUT);
pinMode(12,OUTPUT);
}
int val=0;
void loop() {
val = digitalRead(8);
if (val == HIGH){
  digitalWrite(12,HIGH);
}
else{
  digitalWrite(12,LOW);
}

}
