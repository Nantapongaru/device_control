void setup() {
  Serial.begin(9600);
  delay(1000);
  
  Serial.println("------ไฟสัญญาณจราจร-------");
  Serial.println("---------เริ่ม-----------");
}

void loop() {

  Serial.println("นาย นันทพงศ์ อรุณเดช");
  for (int i = 1; i <= 4; i++) {
    Road(i);
  }
}

void Road(int greenRoad) {
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
  delay(3000);  
}
