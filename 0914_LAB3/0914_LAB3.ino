void setup() {
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
}

void loop() {
  int j;
  for(int i=0;i<255;i++){
    j = 255-i;
    analogWrite(3,i);
    analogWrite(5,j);
    delay(10);
  }
  for(int i=255;i>0;i--){
    j = 255-i;
    analogWrite(3,i);
    analogWrite(5,j);
    delay(10);
  }
  delay(1000);
}
