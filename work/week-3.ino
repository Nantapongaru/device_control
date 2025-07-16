//EX2

void setup() {
  Serial.begin(9600);
  Serial.println("นาย นันทพงศ์ อรุณเดช");
  Serial.println("------ไฟสัญญาณจราจร-------");
  
}


void loop() {
  for (int i = 1; i <= 4; i++) {
    Road(i);
  }
}


void Road(int greenRoad) {
  Serial.println("---------เริ่ม-----------");

  for (int road = 1; road <= 4; road++) {
    Serial.print(road);
    Serial.print(" ");

    if (road == greenRoad) {
      Serial.println("is Green");
    } else {
      Serial.println("is Red");
    }
  }

  Serial.println("--------------------");
  delay(3000);  /
}
