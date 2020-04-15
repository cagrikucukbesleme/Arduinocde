#include <kutuphaneadi.h>

void setup() {
  // put your setup code here, to run once:
    /*
        Burası sadece bir kere çalışır
        Genel ayarlar buradan yapılır
    */
}

void loop() {
  // put your main code here, to run repeatedly:
  /*
        Bu fonksiyon sonsuza kadar çalışır
        Arduino'nun yapması gereken işlemler buraya yazılır
    */
}

pinMode(1,INPUT);

digitalWrite(1,HIGH);

analogWrite(LEDPin, 10);

durum = digitalRead(1);

pinMode(A1,INPUT)

analogDeger = AnalogRead(A1);

delay(1000);
