bool isOn = false;
int countdown = 0;
bool ready = false;

void setup() {
 
  Serial.begin(9600);
  Serial.println("ใส่จำนวนวินาทีสำหรับ นับถอยหลัง");

}

void loop() {

if(Serial.available()){
  countdown = Serial.parseInt();
  Serial.print("จะเริ่มนับถอยหลัง");
  Serial.println(countdown);
  ready = true;
}
if(ready){
  for(int i = countdown; i>=0; i--){
    Serial.print("Light ----");
    Serial.println(i);
    delay(1000);
  }

  Serial.println("เวลา...");
  ready = false ;
  Serial.println("พิมพ์ข้อมูลเเล้วเริ่มใหม่");
}


//   if(isOn){
//     Serial.primtln("OFF");
//     isOn = false ;

//   }else{
//     Serail.println("ON")
//      isOn = true ;
//   }

// delay(1000);

}





