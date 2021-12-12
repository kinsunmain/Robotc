int outPin = 2;
int inPin = 3;
void setup(){
Serial.begin(9600); 
pinMode(8,OUTPUT);
pinMode(outPin, OUTPUT); // sets the digital pin as output
pinMode(inPin, INPUT); // sets the digital pin as input
}
void loop(){
digitalWrite(outPin, HIGH); // sets the pin on
delayMicroseconds(50); // pauses for 50 microseconds 
digitalWrite(outPin, LOW); // sets the pin off
int duration = pulseIn(3, HIGH);
int cm = duration / 58.2;
Serial.println(cm);
if (cm > 300){
    tone(8,130);
    delay(500);
    noTone(8);
    delay(500);
}
else if (cm > 200){
    tone(8,195);
    delay(500);
    noTone(8);
    delay(500);
}
else{
    tone(8,246);
    delay(500);
    noTone(8);
    delay(500);
}
}
