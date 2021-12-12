void setup() {
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
}

void loop() {
int r = analogRead(A2);
int g = analogRead(A1);
int b = analogRead(A0);

analogWrite(8,r);
analogWrite(9,g);
analogWrite(10,b);

}
