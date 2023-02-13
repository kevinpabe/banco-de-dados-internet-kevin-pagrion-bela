void loop() {
  int value = readData();
  sendDataToThingspeak(value);
  delay(60000);
}
