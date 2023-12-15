#include <HardwareSerial.h>
uint8_t serial_rx_pin = 15;
uint8_t serial_tx_pin = 14;

uint8_t serial_b1 = 3;
uint8_t serial_b2 = 5;
uint8_t serial_b3 = 7;

HardwareSerial xSerial(1);

void setup() {
  // put your setup code here, to run once:
  xSerial.begin(9600,SERIAL_8N1,serial_rx_pin,serial_tx_pin);
  Serial.begin(9600);
  pinMode(serial_b1, INPUT);
  pinMode(serial_b2, INPUT);
  pinMode(serial_b3, INPUT);
}

void loop() {

  if(digitalRead(serial_b1) == LOW){
    xSerial.write(1);
    Serial.println("Printing 1");
  }

  if(digitalRead(serial_b2) == LOW){
    xSerial.write(2);
    Serial.println("Printing 2");

  }

  if(digitalRead(serial_b3) == LOW){
    xSerial.write(3);
    Serial.println("Printing 3");
  }
  
  

  /*while(xSerial.available() > 0) {
    uint8_t byteFromSerial = xSerial.read();
  }*/
  delay(100);
}
