void setup() {
pinMode(9,OUTPUT);
Serial.begin(9600);
}

void loop() {

int value = analogRead(A0);
Serial.println(value);
delay(500);
if (value <=300){
  digitalWrite(9,HIGH);
}
else{
  digitalWrite(9,LOW);
}
}
