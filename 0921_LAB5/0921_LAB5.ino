void setup() {
Serial.begin(9600);
pinMode(8,OUTPUT);
}


int num;
void loop() {
  if(Serial.available()>0){
    num = Serial.parseInt();

    for(int i=0;i<num;i++){
      digitalWrite(8,HIGH);
      delay(100);
      digitalWrite(8,LOW);
      delay(100);
    }
  }

delay(1000);

}
