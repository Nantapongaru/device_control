#define LED_BUILTIN 2
void setup() {
  
  Serial.begin(9600);
 
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  

  digitalWrite(LED_BUILTIN, 1);
  Serial.print("สวัสดี นันทพงศ์ อรุณเดช ");
  Serial.print("light ...\n");
  delay(1000);

  digitalWrite(LED_BUILTIN, 0);
  Serial.print("สวัสดี นันทพงศ์ อรุณเดช ");
  Serial.print("not light ...\n");
  delay(1000);
}
