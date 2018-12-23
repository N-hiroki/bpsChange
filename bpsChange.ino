//「AT+UART_DEF=9600,8,1,0,0」
#include <SoftwareSerial.h>

SoftwareSerial mySerial(2, 3);

void setup(){
   Serial.begin(19200);
   Serial.println("Goodnight moon!");

   mySerial.begin(9600);
   mySerial.println("Hello, world?");
}

void loop(){
  if(mySerial.available()){
    Serial.write(mySerial.read());
  }
  if(Serial.available()){
    mySerial.write(Serial.read());
  }
}

