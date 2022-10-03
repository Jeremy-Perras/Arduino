#ifndef WRITE_H
  #define WRITE_H
  #include "variables.h"
  void write(){
      t = now();
      myFile = SD.open("test.txt", FILE_WRITE);
      val = analogRead(tempPin);
      float mv = (val / 1024.0) * 5000;
      float cel = mv / 10;
      float farh = (cel * 9) / 5 + 32;
      myFile.print(hour(t));
      myFile.print(":");
      myFile.print(minute(t));
      myFile.print(":");
      myFile.print(second(t));
      myFile.print(" ");
      myFile.print(cel);
      myFile.close();
      delay(1000);
  }
#endif
