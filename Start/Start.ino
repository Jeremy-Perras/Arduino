#include "variables.h"
#include "write.h"
void setup() {
  Serial.begin(9600);
  pinMode(9, OUTPUT);
  if (!SD.begin(10)) {
    Serial.println("initialization failed!");
    while (1);
  }
  myFile = SD.open("test.txt", FILE_WRITE);
  if (myFile) 
    Serial.println("ready write");
  else 
    Serial.println("error opening test.txt");
  myFile.close();
}

void loop() {
  write();
}
