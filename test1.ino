int  led = 13 ;
int  led1 = 12 ;
void setup() {

pinMode(led,OUTPUT);
pinMode(led1,OUTPUT);     

}

void loop() {
  digitaWrite(led,HIGH);
  delay(3000);
  digitaWrite(led,LOW);
  delay(3000);
  digitaWrite(led1,HIGH);
  delay(1000);
  digitaWrite(led1,LOW);
  delay(1000);
}
