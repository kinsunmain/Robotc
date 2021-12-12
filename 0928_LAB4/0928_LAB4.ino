void setup() {
Serial.begin(9600);
}

void loop() {
int temp = (5.0 * analogRead(A0) * 100.0)/1024;

Serial.println(temp);
}
