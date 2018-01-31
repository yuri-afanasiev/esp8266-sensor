/*
    test16v2()        start 
    motion16v2()      кнопка/датчик движения 
    test16r1v2()      температура htu21 <=
    test16r2v2()      влажность htu21 <=
    test16r3v2()      температура htu21 >=
    test16r4v2()      влажность htu21 >=
    test16serverv2()  запрос на сервер 
    test16rev2()       выбор действия
    test16gpio2hv2()   включение пин 2 
    test16gpio2lv2()   выключение пин 2
    test16flipperv2()  остановка таймера
    ads480qv2()        ads1115 a0 <=
    ads480wv2()        ads1115 a0 >=

     timehtmv2=1;
     htmflipv2.attach(az14, test16flipperv2);//запуск таймера
 * 
 */
void  test16v2() {//start
    if (az9 == 1){//ON / OFF 2
  String stringVar = az12;  
  stringVar.toCharArray(floatbufVarr,sizeof(floatbufVarr));
  zaz12=atof(floatbufVarr);
      
       if (az11 == 1){//Операторы сравнения
           switch (az10) {//что контролировать
                case 0://htu21 t <=
                test16r1v2();
                break;
                case 1://htu21 h <=
                test16r2v2();
                break;
                case 2://ADS1115 0x48 AIN0 <=
                ads480qv2(); 
                break;
                case 3://  <=
                motion16v2();
                break;
                case 4://   PCF8574 0x26 gpio 0 <= HIGH
                pcf26gpio0hv2();
                break;
                case 5://   PCF8574 0x26 gpio 1 <= HIGH
                pcf26gpio1hv2();
                break;
                case 6://   PCF8574 0x25 gpio 0 <= HIGH
                pcf25gpio0hv2();
                break;
                case 7://   PCF8574 0x25 gpio 1 <= HIGH
                pcf25gpio1hv2();
                break;
                case 8:// PCF8574+BH1750 0x26 gpio 0 HIGH
                pcf26gpio0_bh1750v2();
                break;
                case 9:// PCF8574+BH1750 0x25 gpio 0 HIGH
                pcf25gpio0_bh1750v2();
                break;
               } 
          } else {
                switch (az10) {
                case 0://htu21 t >=
                test16r3v2();
                break;
                case 1://htu21 h >=
                test16r4v2();
                break;
                case 2://ADS1115 0x48 AIN0 >=
                ads480wv2();
                break;
                case 3://  >=
                motion16v2();
                break;
                case 4://   PCF8574 0x26 gpio 0 >=  LOW
                pcf26gpio0lv2();
                break;
                case 5://   PCF8574 0x26 gpio 1 >=  LOW
                pcf26gpio1lv2();
                break;
                case 6://   PCF8574 0x25 gpio 0 >=  LOW
                pcf25gpio0lv2();
                break;
                case 7://   PCF8574 0x25 gpio 1 >=  LOW
                pcf25gpio1lv2();
                break;
                case 8:// PCF8574+BH1750 0x26 gpio 0  
                pcf26gpio0_bh1750v2();
                break;
                case 9:// PCF8574+BH1750 0x25 gpio 0 
                pcf25gpio0_bh1750v2();
                break;
               } 
             
          }
     }
}


 
  

void test16r1v2() {//температура htu21 <=
     htu21test();
     if (htu21temp <= zaz12) {
         Serial.println("htu21temp <= az12");
         test16rev2();
         }
}
void test16r2v2() {// влажность htu21 <=
     htu21test();
     if (htu21hum <= zaz12) {
         Serial.println("htu21hum ####<= az12");
         test16rev2();
        }
}
void test16r3v2() {//температура htu21 >=
     htu21test();
     if (htu21temp >= zaz12) {
         Serial.println("htu21temp >= az12");
         test16rev2();
        }
}
void test16r4v2() {// влажность htu21 >=
     htu21test();
     if (htu21hum >= zaz12) {
         Serial.println("htu21hum  >= az12");
         test16rev2();
        }
}
 

void test16serverv2() {//запрос на сервер 
            WiFiClient client;
            if (client.connect(az15.c_str(),httpPort)) {
                client.print(String("GET ") + az16 + " HTTP/1.1\r\n" +
                             "Host: " + az15 + "\r\n" + 
                             "Connection: close\r\n\r\n");  
               }   
            client.stop();
            Serial.println("16server");
            timehtmv2=1;
            htmflipv2.attach(az14, test16flipperv2);//запуск таймера
}
void test16rev2() { // выбор действия
                switch (az13) {
                case 0:// 
                test16serverv2();
                break;
                case 1:// 
                test16gpio2hv2();
                break;
                case 2:// 
                test16gpio2lv2(); 
                break;
                case 3:// красный 
                pixels_ws2812w();
                break;
                case 4:// белый
                pixels_ws2812q();
                break;
                case 5:// mqtt
                mqtt_test_2();
                break;
               } 
}
void test16gpio2hv2() {// включение пин 2 
            pinMode(2, OUTPUT);
            digitalWrite(2, HIGH);
            timehtmv2=1;
            htmflipv2.attach(az14, test16flipperv2);//запуск таймера
}
void test16gpio2lv2() {// выключение пин 2
           pinMode(2, OUTPUT);
           digitalWrite(2, LOW);
           timehtmv2=1;
           htmflipv2.attach(az14, test16flipperv2);//запуск таймера
}

void test16flipperv2() {// остановка таймера
     timehtmv2=0;
     htmflipv2.detach();  
}
void ads480qv2() {//ads1115 a0 <=
      adc48test();
      if (adc48a0 <= zaz12) {
          Serial.println("adc48a0 <= zaz12");
          test16re();
         }
}
void ads480wv2() {//ads1115 a0 >=
      adc48test();
      if (adc48a0  >= zaz12) {
          Serial.println("adc48a0 >= zaz12");
          test16rev2();
         }
}
void motion16v2() {//кнопка/датчик движения 
      pinMode(button, INPUT);
      if (digitalRead(button) == HIGH){// 
          Serial.println("!!!!button!!!!");
          test16rev2();
         }
}
 void pcf26gpio0hv2() { 
     if(pcf26.read(0) == HIGH)  {
          Serial.println("pcf26gpio0 HIGH");
          test16rev2();
       } 
 }
 void pcf26gpio0lv2() { 
     if(pcf26.read(0) == LOW)  {
          Serial.println("pcf26gpio0 LOW");
          test16rev2();
       } 
 }

  void pcf26gpio1hv2() { 
     if(pcf26.read(1) == HIGH)  {
          Serial.println("pcf26gpio1 HIGH");
          test16rev2();
       } 
 }
 void pcf26gpio1lv2() { 
     if(pcf26.read(1) == LOW)  {
          Serial.println("pcf26gpio1 LOW");
          test16rev2();
       } 
 }


   void pcf25gpio0hv2() { 
     if(pcf25.read(0) == HIGH)  {
          Serial.println("pcf25gpio0 HIGH");
          test16re();
       } 
 }
 void pcf25gpio0lv2() { 
     if(pcf25.read(0) == LOW)  {
          Serial.println("pcf25gpio0 LOW");
          test16re();
       } 
 }

  void pcf25gpio1hv2() { 
     if(pcf25.read(1) == HIGH)  {
          Serial.println("pcf25gpio1 HIGH");
          test16re();
       } 
 }
 void pcf25gpio1lv2() { 
     if(pcf25.read(1) == LOW)  {
          Serial.println("pcf25gpio1 LOW");
          test16re();
       } 
 }
void pcf26gpio0_bh1750v2() { 
     bh1750test();
     if (lux <= zaz4) {
         if(pcf26.read(0) == HIGH)  {
            Serial.println("pcf26 gpio0 bh1750 HIGH");
            test16re();
            } 
          }
 }
void pcf25gpio0_bh1750v2() { 
      bh1750test();
      if (lux <= zaz4) {
         if(pcf25.read(0) == HIGH)  {
            Serial.println("pcf25 gpio0 bh1750 HIGH");
            test16re();
            } 
          }
 }
void mqtt_test_2() {  
     mqttclient.publish(az19,az20);
     timehtmv2=1;
     htmflipv2.attach(az14, test16flipperv2);//запуск таймера
}

