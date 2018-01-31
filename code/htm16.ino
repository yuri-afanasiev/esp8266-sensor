void api16() {
     az1 = server.arg("az1").toInt();// on 1/ off 0  
     az2 = server.arg("az2").toInt();//  что контролировать
     az3 = server.arg("az3").toInt();//  Операторы сравнения
     az4 = server.arg("az4");//  параметр
     az5 = server.arg("az5").toInt();//  дейстрие
     az6 = server.arg("az6").toInt();//  время      
     az7 = server.arg("az7");//Server 1 host
     az8 = server.arg("az8");//url

     az9 = server.arg("az9").toInt();// on 1/ off 0  
     az10 = server.arg("az10").toInt();//  что контролировать
     az11 = server.arg("az11").toInt();//  Операторы сравнения
     az12 = server.arg("az12");//  параметр
     az13 = server.arg("az13").toInt();//  дейстрие
     az14 = server.arg("az14").toInt();//  время      
     az15 = server.arg("az15");//Server 1 host
     az16 = server.arg("az16");//url
     
     az17 = server.arg("az17");//mqtt 1   
     az18 = server.arg("az18");//mqtt 1 
     az19 = server.arg("az19");//mqtt 2   
     az20 = server.arg("az20");//mqtt 2 
     save16();//  запись в память модуля
     server.send(200, "text/plain", "OK");
}
void openfilehtm16() {
  File htm16 = SPIFFS.open("/htm16.json", "r");
  size_t size = htm16.size();
  std::unique_ptr<char[]> buf(new char[size]);
  htm16.readBytes(buf.get(), size);
  StaticJsonBuffer<900> jsonBuffer;
  JsonObject& json = jsonBuffer.parseObject(buf.get());
   az1 = json["d1"];// 
   az2 = json["d2"];//   
   az3 = json["d3"];//
   String  eaz4 = json["d4"];// 
   az5 = json["d5"];// 
   az6 = json["d6"];//
   String  eaz7 = json["d7"];// 
   String eaz8 = json["d8"];//
   az4=eaz4;
   az7=eaz7;
   az8=eaz8;

   az9 = json["d9"];// on 1/ off 0  2
   az10 = json["d10"];// что контролировать 
   az11 = json["d11"];// Операторы сравнения
   String  eaz12 = json["d12"];// параметр
   az13 = json["d13"];// дейстрие
   az14 = json["d14"];// время
   String  eaz15 = json["d15"];// Server 2 host
   String  eaz16 = json["d16"];// url
   String  eaz17 = json["d17"];// mqtt 1
   String  eaz18 = json["d18"];// mqtt 1
   String  eaz19 = json["d19"];// mqtt 2
   String  eaz20 = json["d20"];// mqtt 2 
   az12=eaz12;
   az15=eaz15;
   az16=eaz16;
   az17=eaz17;
   az18=eaz18;
   az19=eaz19;
   az20=eaz20;
   
} 

bool save16() {
  StaticJsonBuffer<900> jsonBuffer;
  JsonObject& json = jsonBuffer.createObject();
  json["d1"] = az1;//  
  json["d2"] = az2;// 
  json["d3"] = az3;//
  json["d4"] = az4;//
  json["d5"] = az5;//
  json["d6"] = az6;//
  json["d7"] = az7;//
  json["d8"] = az8;//

  json["d9"] = az9;//  
  json["d10"] = az10;// 
  json["d11"] = az11;//
  json["d12"] = az12;//
  json["d13"] = az13;//
  json["d14"] = az14;//
  json["d15"] = az15;//
  json["d16"] = az16;//
  json["d17"] = az17;//
  json["d18"] = az18;//
  json["d19"] = az19;//
  json["d20"] = az20;//
  
  File htm16 = SPIFFS.open("/htm16.json", "w");
  if (!htm16) {   
    return false;
  }
  json.printTo(htm16);
  return true;
}

void htm16xml(){
String  url1="<?xml version='1.0'?>";
        url1+="<Donnees>"; 
        url1+="<q1>";
        url1+=az1;// 
        url1+="</q1>";
        url1+="<q2>";
        url1+=az2;// 
        url1+="</q2>";
        url1+="<q3>";
        url1+=az3;//
        url1+="</q3>";
        url1+="<q4>";
        url1+=az4;//
        url1+="</q4>";
        url1+="<q5>";
        url1+=az5;// 
        url1+="</q5>";
        url1+="<q6>";
        url1+=az6;//-резерв-
        url1+="</q6>";
        url1+="<q7>";
        url1+=az7;// 
        url1+="</q7>";
        url1+="<q8>";
        url1+=az8;// 
        url1+="</q8>";
        url1+="<q9>";
        url1+=az9;// 
        url1+="</q9>";
        url1+="<q10>";
        url1+=az10;// 
        url1+="</q10>";
        url1+="<q11>";
        url1+=az11;// 
        url1+="</q11>";
        url1+="<q12>";
        url1+=az12;// 
        url1+="</q12>";
        url1+="<q13>";
        url1+=az13;// 
        url1+="</q13>";
        url1+="<q14>";
        url1+=az14;// 
        url1+="</q14>";
        url1+="<q15>";
        url1+=az15;// 
        url1+="</q15>";
        url1+="<q16>";
        url1+=az16;// 
        url1+="</q16>";
        url1+="<q17>";
        url1+=az17;// 
        url1+="</q17>";
        url1+="<q18>";
        url1+=az18;// 
        url1+="</q18>";
        url1+="<q19>";
        url1+=az19;// 
        url1+="</q19>";
        url1+="<q20>";
        url1+=az20;// 
        url1+="</q20>";
        url1+="</Donnees>"; 
server.send(200,"text/xml",url1);
}  


void  test16() {
    if (az1 == 1){//ON / OFF
  String stringVar = az4;  
  stringVar.toCharArray(floatbufVar,sizeof(floatbufVar));
  zaz4=atof(floatbufVar);
      
       if (az3 == 1){//Операторы сравнения
           switch (az2) {
                case 0://htu21 t <=
                test16r1();
                break;
                case 1://htu21 h <=
                test16r2();
                break;
                case 2://ADS1115 0x48 AIN0 <=
                ads480q(); 
                break;
                case 3://  <=
                motion16();
                break;
                case 4://   PCF8574 0x26 gpio 0 <= HIGH
                pcf26gpio0h();
                break;
                case 5://   PCF8574 0x26 gpio 1 <= HIGH
                pcf26gpio1h();
                break;
                case 6://   PCF8574 0x25 gpio 0 <= HIGH
                pcf25gpio0h();
                break;
                case 7://   PCF8574 0x25 gpio 1 <= HIGH
                pcf25gpio1h();
                break;
                case 8:// PCF8574+BH1750 0x26 gpio 0 
                pcf26gpio0_bh1750();
                break;
                case 9:// PCF8574+BH1750 0x25 gpio 0 
                pcf25gpio0_bh1750();
                break;
               } 
          } else {
                switch (az2) {
                case 0://htu21 t >=
                test16r3();
                break;
                case 1://htu21 h >=
                test16r4();
                break;
                case 2://ADS1115 0x48 AIN0 >=
                ads480w();
                break;
                case 3://  >=
                motion16();
                break;
                case 4://   PCF8574 0x26 gpio 0 >=  LOW
                pcf26gpio0l();
                break;
                case 5://   PCF8574 0x26 gpio 1 >=  LOW
                pcf26gpio1l();
                break;
                case 6://   PCF8574 0x25 gpio 0 >=  LOW
                pcf25gpio0l();
                break;
                case 7://   PCF8574 0x25 gpio 1 >=  LOW
                pcf25gpio1l();
                break;
                case 8:// PCF8574+BH1750 0x26 gpio 0 
                pcf26gpio0_bh1750();
                break;
                case 9:// PCF8574+BH1750 0x25 gpio 0 
                pcf25gpio0_bh1750();
                break;
               } 
             
          }
     }
}
void test16r1() {
      htu21test();
      if (htu21temp <= zaz4) {
          Serial.println("htu21temp <= az4");
          test16re();
         }
}
void test16r2() {
      htu21test();
      if (htu21hum <= zaz4) {
          Serial.println("htu21hum ####<= az4");
          test16re();
         }
}
void test16r3() {
  htu21test();
  if (htu21temp >= zaz4) {
      Serial.println("htu21temp >= az4");
      test16re();
   }
}
void test16r4() {
      htu21test();
      if (htu21hum >= zaz4) {
          Serial.println("htu21hum 553>= az4");
          test16re();
         }
}
void test16server() {
            WiFiClient client;
            if (client.connect(az7.c_str(),httpPort)) {
                client.print(String("GET ") + az8 + " HTTP/1.1\r\n" +
                             "Host: " + az7 + "\r\n" + 
                             "Connection: close\r\n\r\n");  
               }   
            client.stop();
            Serial.println("16server");
            timehtm=1;
            htmflip.attach(az6, test16flipper);
}
void test16re() { 
                switch (az5) {
                case 0:// 
                test16server();
                break;
                case 1:// 
                test16gpio2h();
                break;
                case 2:// 
                test16gpio2l(); 
                break;
                case 3:// красный 
                pixels_ws2812w();
                break;
                case 4:// белый
                pixels_ws2812q();
                break;
                case 5:// mqtt
                mqtt_test_1();
                break;
               } 
}
void test16gpio2h() { 
           pinMode(2, OUTPUT);
           digitalWrite(2, HIGH);
           timehtm=1;
           htmflip.attach(az6, test16flipper);
}
void test16gpio2l() { 
           pinMode(2, OUTPUT);
           digitalWrite(2, LOW);
           timehtm=1;
           htmflip.attach(az6, test16flipper);
}

void test16flipper() {
     timehtm=0;
     htmflip.detach();  
  
}
void ads480q() {
      adc48test();
      if (adc48a0 <= zaz4) {
          Serial.println("adc48a0 <= az4");
          test16re();
          }
}
void ads480w() {
      adc48test();
      if (adc48a0  >= zaz4) {
          Serial.println("adc48a0 >= az4");
          test16re();
         }
}
void motion16() {
      pinMode(button, INPUT);
      if (digitalRead(button) == HIGH){// 
          Serial.println("!!!!button!!!!");
          test16re();
         }
}
                
 void pcf26gpio0h() { 
     if(pcf26.read(0) == HIGH)  {
          Serial.println("pcf26gpio0 HIGH");
          test16re();
       } 
 }
 void pcf26gpio0l() { 
     if(pcf26.read(0) == LOW)  {
          Serial.println("pcf26gpio0 LOW");
          test16re();
       } 
 }

  void pcf26gpio1h() { 
     if(pcf26.read(1) == HIGH)  {
          Serial.println("pcf26gpio1 HIGH");
          test16re();
       } 
 }
 void pcf26gpio1l() { 
     if(pcf26.read(1) == LOW)  {
          Serial.println("pcf26gpio1 LOW");
          test16re();
       } 
 }

  void pcf25gpio0h() { 
     if(pcf25.read(0) == HIGH)  {
          Serial.println("pcf25gpio0 HIGH");
          test16re();
       } 
 }
 void pcf25gpio0l() { 
     if(pcf25.read(0) == LOW)  {
          Serial.println("pcf25gpio0 LOW");
          test16re();
       } 
 }

  void pcf25gpio1h() { 
     if(pcf25.read(1) == HIGH)  {
          Serial.println("pcf25gpio1 HIGH");
          test16re();
       } 
 }
 void pcf25gpio1l() { 
     if(pcf25.read(1) == LOW)  {
          Serial.println("pcf25gpio1 LOW");
          test16re();
       } 
 }
void pcf26gpio0_bh1750() { 
     bh1750test();
     if (lux <= zaz4) {
         if(pcf26.read(0) == HIGH)  {
            Serial.println("pcf26 gpio0 bh1750 HIGH");
            test16re();
            } 
          }
 }
void pcf25gpio0_bh1750() { 
      bh1750test();
      if (lux <= zaz4) {
         if(pcf25.read(0) == HIGH)  {
            Serial.println("pcf25 gpio0 bh1750 HIGH");
            test16re();
            } 
          }
 }

void pixels_ws2812w() { 
     Adafruit_NeoPixel pixels = Adafruit_NeoPixel(ws3,ws2, NEO_GRB + NEO_KHZ800);
     pixels.begin();
     pixels.setPixelColor(0, pixels.Color(255,0,0));//Включение светодиода (цвет зелёный)   
     pixels.show(); 
     }
void pixels_ws2812q() { 
     Adafruit_NeoPixel pixels = Adafruit_NeoPixel(ws3,ws2, NEO_GRB + NEO_KHZ800);
     pixels.begin();
     pixels.setPixelColor(0, pixels.Color(255,255,255));//Включение светодиода    
     pixels.show(); 
     }
void mqtt_test_1() {  
     mqttclient.publish(az17,az18);
     timehtm=1;
     htmflip.attach(az6, test16flipper);
}
 
