#define LED_BUTLTIN 2
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
 
  pinMode(LED_BUTLTIN, OUTPUT);

}


void loop() {
  // put your main code here, to run repeatedly:
  

  digitalWrite(LED_BUTLTIN, 1);
  Serial.print("สวัสดี นันทพงศ์ อรุณเดช\n");
  Serial.print("light ...");
  delay(1000);

  digitalWrite(LED_BUILTIN, 0);
  Serial.print("สวัสดี นันทพงศ์ อรุณเดช\n");
  Serial.print("not light ...");
  delay(1000);
}
