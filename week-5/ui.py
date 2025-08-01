import sys
import serial

from  PyQt5.QtWidgets import QApplication,QWidget,QPushButton,QVBoxLayout,QMessageBox

try :
  arduino = serial.Serial('COM3',9600, timeout=1)
except Exception as e:
  arduino = None
  print("เชื่อต่อไม่ได้: ",e)

class AruinoControl(QWidget):
    def __init__(self):
      super().__init__()
      self.setWindowTitle("Aruino Controller") #ชื่อโปรแกรมที่กำหนด
      self.setGeometry(200,200,300,150) #ขนาด

      #เปิด
      layout = QVBoxLayout()
      self.btn_on = QPushButton("LED ON")
      self.btn_on.clicked.connect(lambda:self.send_command("ON"))
      layout.addWidget(self.btn_on)

      #ปิด
      self.btn_off = QPushButton("LED OFF")
      self.btn_off.clicked.connect(lambda:self.send_command("OFF"))
      layout.addWidget(self.btn_off)

      #กระพริบ
      self.btn_blink = QPushButton("LED BLINK")
      self.btn_blink.clicked.connect(lambda:self.send_command("BLINK"))
      layout.addWidget(self.btn_blink)

      self.setLayout(layout)


    def send_command(self,command):
      if(arduino):
        arduino.write((command + '\n').encode())
      else:
        QMessageBox.critical(self, "Error","ไม่พบการเชือ่มต่อ Aruino")

#การสร้าง Gui output

if __name__== "__main__":
  app = QApplication(sys.argv)
  window = AruinoControl()
  window.show()
  sys.exit(app.exec_())