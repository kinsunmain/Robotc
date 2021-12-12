void setup() {
 Serial.begin(9600);
 pinMode(8,INPUT);

}

int cnt=1;
int val=0;

void loop() {
  val = digitalRead(8);
  if (val == HIGH){
    cnt =0;
  }
  Serial.println(cnt);
  delay(1000);
  cnt++;
}
