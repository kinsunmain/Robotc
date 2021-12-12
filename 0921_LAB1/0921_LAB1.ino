void setup() {
Serial.begin(9600);

}
int cnt =1;

void loop() {
  
 Serial.println(cnt);
 delay(1000);
 cnt++;
}
