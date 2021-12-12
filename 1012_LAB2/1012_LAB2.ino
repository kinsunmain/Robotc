void setup() {
pinMode(2,INPUT);
pinMode(3,INPUT);
pinMode(4,INPUT);
pinMode(8,OUTPUT);
}

void loop() {
int do = digitalRead(2);
int ra = digitalRead(3);
int mi = digitalRead(4);
if (do == 1){
  tone(8,130);
  delay(1000);
  noTone(8);
}
else if (ra == 1){
  tone(8,146);
  delay(1000);
  noTone(8);
}
else if (mi == 1){
  tone(8,164);
  delay(1000);
  noTone(8);
}

}
