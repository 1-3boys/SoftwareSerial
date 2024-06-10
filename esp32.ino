void setup() {
  Serial.begin(115200);
  Serial2.begin(115200);
}

void loop() {
  if(Serial.available()){
    int value = Serial.read();
    Serial2.write(value);
  }
  if(Serial2.available()){
    int value = Serial2.read();
    Serial.write(value);
  }

}
