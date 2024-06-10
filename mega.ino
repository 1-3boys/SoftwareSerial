#include <SoftwareSerial.h>

SoftwareSerial mySerial (15, 14);

void setup() {
  Serial.begin(115200);
  mySerial.begin(115200);
}

void loop() {
  if(Serial.available()){
    int value = Serial.read();
    mySerial.write(value);
  }
  if(mySerial.available()){
    int value = mySerial.read();
    Serial.write(value);
  }

}
