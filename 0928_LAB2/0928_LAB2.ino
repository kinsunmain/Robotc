void setup() {
pinMode(9,OUTPUT);
pinMode(8,INPUT);
Serial.begin(9600);
}

void loop() {

int value = analogRead(A0);
Serial.println(value);
delay(500);
analogWrite(9,map(value,0,1023,0,255));

if (digitalRead(8) == HIGH){
  analogWrite(9,0);
}
}
