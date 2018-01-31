#include <ESP8266WiFi.h>            // LGPL  2.1         //https://github.com/esp8266/Arduino/tree/master/libraries/ESP8266WiFi
#include <WiFiClient.h>
#include <ESP8266WebServer.h>       //LGPL 2.1           //https://github.com/esp8266/Arduino/tree/master/libraries/ESP8266WebServer
#include <ESP8266mDNS.h>            //MIT                //https://github.com/esp8266/Arduino/tree/master/libraries/ESP8266mDNS
#include <SoftwareSerial.h>         //Creative Commons Attribution-ShareAlike 3.0 //https://www.arduino.cc/en/Reference.SoftwareSerial  //https://creativecommons.org/licenses/by-sa/3.0/
#include <PZEM004T.h>               //author Oleg Sokolov //https://github.com/olehs/PZEM004T 
#include <OneWire.h>                //Copyright (C) 2000 Dallas Semiconductor Corporation //http://www.pjrc.com/teensy/td_libs_OneWire.html
#include <DallasTemperature.h>      //LGPL 2.1          //https://github.com/milesburton/Arduino-Temperature-Control-Library 
#include <LiquidCrystal_I2C.h>      //DFRobot.com       //https://www.dfrobot.com/wiki/index.php/I2C/TWI_LCD1602_Module_(SKU:_DFR0063)   
#include <ESP8266HTTPUpdateServer.h>                    //https://github.com/esp8266/Arduino/tree/master/libraries/ESP8266HTTPUpdateServer 
#include <DHT.h>                    //MIT               //https://github.com/adafruit/DHT-sensor-library
#include <Wire.h>                   //LGPL              //https://github.com/esp8266/Arduino/tree/master/libraries/Wire 
#include <Ticker.h>                 //LGPL              //https://github.com/esp8266/Arduino/tree/master/libraries/Ticker 
#include <SPI.h>                    //Creative Commons Attribution-ShareAlike 3.0  //http://www.arduino.cc/en/Reference/SPI    //https://creativecommons.org/licenses/by-sa/3.0/
#include <nRF24L01.h>               //GNU GPL v2        //https://github.com/maniacbug/RF24
#include <RF24.h>                   //GNU GPL v2        //https://github.com/maniacbug/RF24
#include <FS.h>                     //LGPL-2.1          //http://esp8266.github.io/Arduino/versions/2.1.0/doc/filesystem.html  //https://github.com/esp8266/Arduino/blob/master/LICENSE
#include <ESP8266httpUpdate.h>                          //https://github.com/Links2004/Arduino/tree/esp8266/hardware/esp8266com/esp8266/libraries/ESP8266httpUpdate        
#include <ESP8266HTTPClient.h>                          //https://github.com/Links2004/Arduino/tree/libraries/ESP8266HTTPClient 
#include <ArduinoJson.h>            //MIT               //https://bblanchon.github.io/ArduinoJson/                            //https://github.com/bblanchon/ArduinoJson/blob/master/LICENSE.md
#include <Adafruit_BMP085.h>        //BSD               //https://github.com/adafruit/Adafruit-BMP085-Library
#include <Adafruit_INA219.h>        //BSD-3-Clause      //https://github.com/adafruit/Adafruit_INA219                         //https://github.com/adafruit/Adafruit_INA219/blob/master/license.txt
#include <Adafruit_HTU21DF.h>       //BSD               //https://github.com/adafruit/Adafruit_HTU21DF_Library
#include <Adafruit_ADS1015.h>       //BSD-3-Clause      //https://github.com/adafruit/Adafruit_ADS1X15                        //https://github.com/adafruit/Adafruit_ADS1X15/blob/master/license.txt
#include <Adafruit_PWMServoDriver.h>//BSD-3-Clause      //https://github.com/adafruit/Adafruit-PWM-Servo-Driver-Library       //https://github.com/adafruit/Adafruit-PWM-Servo-Driver-Library/blob/master/license.txt
#include <Adafruit_NeoPixel.h>      //LGPL-3.0          //https://github.com/adafruit/Adafruit_NeoPixel                       //https://github.com/adafruit/Adafruit_NeoPixel/blob/master/COPYING
#include <BH1750.h>                 //MIT               //https://github.com/claws/BH1750                                     //https://github.com/claws/BH1750/blob/master/LICENSE
#include <PCF8574.h>                                    //https://github.com/RobTillaart/Arduino/tree/master/libraries/PCF8574
#include <PubSubClient.h>           //MIT               //https://github.com/Imroy/pubsubclient                               //https://github.com/Imroy/pubsubclient/blob/master/LICENSE.txt
#include <Adafruit_GFX.h>           //BSD-2-Clause      //https://github.com/adafruit/Adafruit-GFX-Library                    //https://github.com/adafruit/Adafruit-GFX-Library/blob/master/license.txt
#include <Adafruit_SSD1306.h>       //BSD-3-Clause      //https://github.com/adafruit/Adafruit_SSD1306                        //https://github.com/adafruit/Adafruit_SSD1306/blob/master/license.txt
#include <Adafruit_ST7735.h>        //MIT               //https://github.com/adafruit/Adafruit-ST7735-Library
#include <max6675.h>                                    //https://github.com/adafruit/MAX6675-library  
#include "Adafruit_CCS811.h"        //MIT               //https://github.com/adafruit/Adafruit_CCS811                        //https://github.com/adafruit/Adafruit_CCS811/blob/master/LICENSE
#include "ClosedCube_HDC1080.h"     //MIT               //https://github.com/closedcube/ClosedCube_HDC1080_Arduino           //https://github.com/adafruit/Adafruit_CCS811/blob/master/LICENSE
#include <BME280I2C.h>              //GPL-3.0           //https://github.com/finitespace/BME280                              //https://github.com/finitespace/BME280/blob/master/LICENSE

byte pipe;        
float t,h; // DHT 21

float temp;
float v,i,p,e;//PZEM004T  
String w1,w2,w3,w4,w5,w6; //wifi
int w7,w8;// wifi
String z5,z6; //htm2
int z1e,z2e,z3,z4,z7,z8,z9;//htm2
int x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x78,x79,x80,x81,x82;//htm3 narodmon
int x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56;
int x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76,x77;
String  c3,c4,c5,c6; //htm4
int c1,c2;//htm4
String  b4,b5,b6,b7,b8,b9,b10,b11,b12,b26,b27,b28,b29,b30,b31,b33,b47,b49,b51,b53,b55,b57,b59,b61,b63,b65,b67,b69; //htm5 thingspeak
int b1,b2,b3,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b32,b46,b48,b50,b52,b54,b56,b58,b60,b62,b64,b66,b68;//htm5 
int b34,b36,b38,b40,b42,b44;//nrf  on/off thingspeak
String  b35,b37,b39,b41,b43,b45;//writeAPIKey  nrf thingspeak
int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12;//htm6
int f2;//интервал между запросами //htm7
     int f1,f6,f7,f8,f9,f10,f11,f12,f13,f14,f15,f16,f17,f18,f19,f20,f21,f22,f23,f24,f25,f26;//htm7
     String f3,f4,f5;//htm7
int k1,k2,k3,k4,k5,k6,k7,k8,k9,k10,k11,k12,k13,k14,k15,k16,k17,k18,k19,k20,k21,k22,k23,k24;//htm8
 
String  s3,s4,s5,s6; //htm10
int s1,s2;//htm10
int v1,v2,v3,v4,v5,v6,v7,v8,v9,v10,v11; //htm11
int wz1,wz2,wz3,wz4,wz5,wz6,wztest;//htm14 

  int tz1,tz2,tz3,tz4,tz5,tz6;//htm15 
  Adafruit_ADS1115 ads48(0x48); 
  int16_t adc48a0,adc48a1,adc48a2,adc48a3;

  Adafruit_ADS1115 ads49(0x49); 
  int16_t adc49a0,adc49a1,adc49a2,adc49a3;

  int az1,az2,az3,az5,az6;//htm16 
  String  az7,az8;//htm16
  char floatbufVar[32];//htm16
  char floatbufVarr[32];//htm16
   String az4;//htm16
   float  zaz4;//htm16
   float  zaz12;//htm16
   int timehtm;
   int timehtmv2;
   int az9,az10,az11,az13,az14;//htm16 
   String az12,az15,az16,az17,az18,az19,az20;//htm16 
  #define button 16 // пин для   датчика  движения
 
float vr0_1,vr0_2,vr0_3,vr0_4,vr0_5,vr0_6,vr0_7,vr0_8;//htm11 nrf24 0
float vr1_1,vr1_2,vr1_3,vr1_4,vr1_5,vr1_6,vr1_7,vr1_8;//htm11 nrf24 1
float vr2_1,vr2_2,vr2_3,vr2_4,vr2_5,vr2_6,vr2_7,vr2_8;//htm11 nrf24 2
float vr3_1,vr3_2,vr3_3,vr3_4,vr3_5,vr3_6,vr3_7,vr3_8;//htm11 nrf24 3
float vr4_1,vr4_2,vr4_3,vr4_4,vr4_5,vr4_6,vr4_7,vr4_8;//htm11 nrf24 4
float vr5_1,vr5_2,vr5_3,vr5_4,vr5_5,vr5_6,vr5_7,vr5_8;//htm11 nrf24 5
int vr0,vr1,vr2,vr3,vr4,vr5;// nrf24 ++
int g1,g2,g3,g4,g5,g6,g7,g8,g9,g10;//id cmd  g3 on1 /off nrf24
  const uint64_t pipe0 = 0x1234567801LL; //  
  const uint64_t pipe1 = 0x1234567811LL; //  
  const uint64_t pipe2 = 0x1234567822LL; //  
  const uint64_t pipe3 = 0x1234567833LL; //  
  const uint64_t pipe4 = 0x1234567844LL; //  
  const uint64_t pipe5 = 0x1234567855LL; //
String line;

float shuntvoltage = 0;
float busvoltage = 0;
float current_mA = 0;
float loadvoltage = 0;
uint16_t lux; 
int var=1; 
int reconnect;

//const char* hostbuild = "192.168.1.140";
const char* hostbuild = "esptest.esy.es";

 float htu21temp,htu21hum;
const char* hostnarodmon = "narodmon.ru";
const int   httpPortnarodmon = 8283;
const char* thingspeakserver = "api.thingspeak.com";
const int   httpPort = 80;
String line1;
 
int error = 0;
int t3=0; //yt3
int t5=0; //yt5
int t7=0; //yt7
int t8=1; //yt8

int p3; 
int p5;
int p6; 
int p8; 

int ws1,ws2,ws3,ws4,ws8;//htm17  
int ws5,ws6,ws7;//htm18
int mqw1,mqw3,mqw10;//htm19
String mqw2,mqw4,mqw5,mqw6,mqw7,mqw9;//htm19
int mqw8;//htm19
String top1,top2,top3,top4; //mqtt
 //float qmtt_bmp180_t,qmtt_bmp180_m;


float  h2,h3,h4,h5,h6,h7,h8,h9,h10,h11,h12,h14,h15;//espdata
int h13;//espdata
uint16_t h1; 

#define PIN  2 //светодиод
RF24 radio(4, 15);//CE,CSN
#define DHTPIN 2 //pin 2
//#define DHTTYPE DHT11    // DHT 11
//#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321
#define DHTTYPE DHT21// DHT 21 (AM2301) 
ADC_MODE(ADC_VCC); 
Adafruit_INA219 ina219; 
Adafruit_BMP085 bmp;
Adafruit_HTU21DF htu = Adafruit_HTU21DF();
BH1750 lightMeter;


#define TFT_CS     5
#define TFT_RST    4    
#define TFT_DC     2
Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS,  TFT_DC, TFT_RST);

#define max6675_DO   13 
#define max6675_CS   12
#define max6675_CLK  14
MAX6675 max6675_temperature(max6675_CLK, max6675_CS, max6675_DO);
int max6675_t;
 
 
OneWire  ds(0);//18b20 0   
DallasTemperature sensors(&ds);
DeviceAddress address;
ESP8266HTTPUpdateServer httpUpdater;
IPAddress ip(192,168,1,1);//PZEM004T 
DHT dht(DHTPIN, DHTTYPE, 2);
PZEM004T pzem(&Serial);  
ESP8266WebServer server(80); 
LiquidCrystal_I2C lcd(0x27,16,4);
PCF8574 pcf26(0x26);
PCF8574 pcf25(0x25);
WiFiClient mqtttestclient; 
PubSubClient mqttclient(mqtttestclient);
Adafruit_SSD1306 display_oled(14);
float rev_update=0.1;//новая версия кода
float rev_code=0.04;//текущая версия кода
int key_update; //ключ для обновления

String rev;
File fsUploadFile; 

Ticker htmflipv2;
Ticker htmflip;
Ticker y3;
Ticker y5;
Ticker y7;
Ticker y8;
Ticker oled_ssd1306;
Ticker st7735test;
Ticker mqtt_sensors;
Ticker update_code_build;
Ticker chart_ticker;
int chart_ticker1_1;

int update_code_build1_1;
int mqtt_test1_1;
int oled_ssd1306_test1_1;
int tft_test1_1;
int wifire;

String sensor_test;
int time_sensor_chart;

Adafruit_CCS811 ccs;
ClosedCube_HDC1080 hdc1080;
int ccS811_reset;

BME280I2C bme;    // Default : forced mode, standby time = 1000 ms
                  // Oversampling = pressure ×1, temperature ×1, humidity ×1, filter off,
                  
float bme280_temp(NAN), bme280_hum(NAN), bme280_pres(NAN);
 




 
void callback(const MQTT::Publish& pub){
              String payload = pub.payload_string();       
              if (ws1 == 1){ 
                  if(String(pub.topic()) == top3+ "ws2812/red"){ // проверяем из нужного ли нам топика пришли данные
                     ws5 = payload.toInt(); 
                     ws2812test();         
                 }
              if(String(pub.topic()) == top3 + "ws2812/green"){ // проверяем из нужного ли нам топика пришли данные
                 ws6 = payload.toInt(); 
                 ws2812test();         
                }
              if(String(pub.topic()) == top3 + "ws2812/blue"){ // проверяем из нужного ли нам топика пришли данные
                 ws7 = payload.toInt(); 
                 ws2812test();         
                }  
              if(String(pub.topic()) == top1 + "ws2812"){ // проверяем из нужного ли нам тоепика пришли данны        
                 Serial.println(payload);
                 StaticJsonBuffer<200> jsonBuffer;
                 JsonObject& json = jsonBuffer.parseObject(payload);
                 ws5 = json["red"];// 
                 ws6 = json["green"];// 
                 ws7 = json["blue"];//
                 ws2812test();
                }
              if(String(pub.topic()) == top2 + "ws2812"){ // проверяем из нужного ли нам тоепика пришли данны        
                 Serial.println(payload);
                 StaticJsonBuffer<200> jsonBuffer;
                 JsonObject& json = jsonBuffer.parseObject(payload);
                 ws5 = json["red"];// 
                 ws6 = json["green"];// 
                 ws7 = json["blue"];//
                 ws2812test();
                }
              if(String(pub.topic()) == top3 + "ws2812"){ // проверяем из нужного ли нам тоепика пришли данны        
                 Serial.println(payload);
                 StaticJsonBuffer<200> jsonBuffer;
                 JsonObject& json = jsonBuffer.parseObject(payload);
                 ws5 = json["red"];// 
                 ws6 = json["green"];// 
                 ws7 = json["blue"];//
                 ws2812test();
                }
            }


//////////////////////////////////////////////////////////////////////////////////////////////////////
   if(String(pub.topic()) == top1 + "update"){ // проверяем из нужного ли нам тоепика пришли данны        
                 Serial.println(payload);
                 StaticJsonBuffer<200> jsonBuffer;
                 JsonObject& json = jsonBuffer.parseObject(payload);
                      rev_update = json["rev"];// 
                 String   zz5 = json["program"];// 
                 String   zz6 = json["fs"];//
                 z5=zz5;
                 z6=zz6;
              
                 key_update = json["key"];//
                 mqtt_update();
                }
//////////////////////////////////////////////////////////////////////////////////////////////////////
           
               if(String(pub.topic()) == top4 + "sensor"){   //BMP180     
                  Serial.println(payload);
                  StaticJsonBuffer<500> jsonBuffer;
                  JsonObject& json = jsonBuffer.parseObject(payload);                   
                  h1 = json["bh1750"];  
                  h2 = json["bmp180t"];  
                  h3 = json["bmp180m"];  
                  h4 = json["dhtt"];
                  h5 = json["dhth"];
                  h6 = json["ina219v"];
                  h7 = json["ina219ma"];
                  h8 = json["pzem004tv"];
                  h9 = json["pzem004ta"];
                  h10 = json["pzem004tw"];
                  h11 = json["pzem004twh"];
                  h12 = json["18b20"];
                  h13 = json["rssi"];  
                  h14 = json["htu21t"];  
                  h15 = json["htu21h"];                  
                   }
}

void setup(void){     
     SPIFFS.begin();
     openfile();//файл настроек wifi
     openfilehtm2();// файл настроек  htm2
     openfilehtm3();// файл настроек  htm3
     openfilehtm5();// файл настроек  htm5
     openfilehtm6();// файл настроек  htm6
     openfilehtm7();// файл настроек  htm7
     openfilehtm8();// файл настроек  htm8
     openfilehtm10();// файл настроек  htm10
     openfilehtm11();// файл настроек  htm11
     openfilehtm14();// файл настроек  htm14
     openfilehtm15();// файл настроек  htm15
     openfilehtm16();// файл настроек  htm16
     openfilehtm17();// файл настроек  htm17
     openfilehtm18();// файл настроек  htm18
     openfilehtm19();// файл настроек  htm19

      
      top3 += "/home/"+mqw7+ "/"+mqw6+"/";  
      top2 += "/home/"+mqw7+"/";     
      top1 += "/home/";
                   
      top4 += "/home/"+s3+ "/"+s4+"/";
      
      Serial.println(top1);
      Serial.println(top2);
      Serial.println(top3);
      Serial.println(top4);


     //SPIFFS.remove("/chart1.json");
     //SPIFFS.remove("/chart2.json");
     //SPIFFS.remove("/chart3.json");
     //SPIFFS.remove("/chart4.json");
     //SPIFFS.remove("/chart5.json");
     
     chart_ticker.attach(60,chart_test1);//  
      
     if (z7 == 1){  
         Serial.begin(9600);
        } 
        
       
     if (z3 == 1){          
         Wire.pins(z1e, z2e);// 4(SDA) 5(SCL)  
         }   

     if (n9 == 1){//CCS811 
         pinMode(n12, OUTPUT);//для перезагрузки датчика CCS811 при зависании
         digitalWrite(n12, HIGH);//для перезагрузки датчика CCS811 при зависании
         if(!ccs.begin()){
            Serial.println("Failed to start sensor! Please check your wiring.");
            }    
         } 
     if (n10 == 1){//HDC1080   
         hdc1080.begin(0x40);            
         } 
     if (n11 == 1){   
         bme.begin();
         switch(bme.chipModel()){
                case BME280::ChipModel_BME280:
                     Serial.println("Found BME280 sensor! Success.");//Найден датчик BME280!
                break;
                case BME280::ChipModel_BMP280:
                     Serial.println("Found BMP280 sensor! No Humidity available.");//Найден датчик BMP280! Отсутствие влажности
               break;
               default:
                     Serial.println("Found UNKNOWN sensor! Error!");//Найден неизвестный датчик! Ошибка!
              }              
       }        
     if (n1 == 1){   
         lightMeter.begin();//BH1750             
         } 
      if (n2 == 1){   
         bmp.begin();//bmp                
         }     
      if (n3 == 1){   
         dht.begin();//DHT 21                
         }     
      if (n4 == 1){   
         ina219.begin();//ina219               
         }
     if (n5 == 1){    
         pzem.setAddress(ip); 
         } 
     if (n6 == 1){// 18b20   
         sensors.begin(); 
         sensors.setResolution(12);
         }   
     if (n7 == 1){// HTU21   
          htu.begin();
         }   
          if (ws1 == 1){// WS2812
               Adafruit_NeoPixel pixels = Adafruit_NeoPixel(ws3,ws2, NEO_GRB + NEO_KHZ800);    
               pixels.begin();
               if (ws8 == 1){
                   ws2812test();
                  }
          }

     if (k1 == 1){   //lcd  
         lcd.init();                     
         lcd.backlight(); 
         }
     if (z8 == 1){
        update_code_build.attach(43200, update_code_build1);// MQTT
        }
         
    if (mqw1 == 1){
        mqtt_sensors.attach(mqw8, mqtt_test1);// MQTT
        }
    if (k7 == 1){   //   
        display_oled.begin(SSD1306_SWITCHCAPVCC, 0x3c);    
        display_oled.clearDisplay();
        display_oled.setCursor(0,0);
        display_oled.println("");
        display_oled.display();
        oled_ssd1306.attach(k8, oled_ssd1306_test1);// 
       }
 
          pcf26.begin();//
          pcf25.begin();

    if (wz1 == 1){   // PCA9685 
        Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver(0x40);
        pwm.begin();
        pwm.setPWMFreq(1600);  // This is the maximum PWM frequency
         }
     // httpUpdater.setup(&server);    
      wifi(); 
     serveron(); 
     Serial.println(WiFi.localIP());
     starttest();
        if (k11 == 1){
            tft.initR(INITR_BLACKTAB);   // initialize a ST7735S chip, black tab   
            tft.fillScreen(ST7735_BLACK);
             
            tft.setTextSize(2); 
            st7735test.attach(k12, tft_test1);//
            } 
            
} 
void loop(void){     
     server.handleClient(); 
     wifitest(); 
      if (mqw1 == 1){//
         if (mqttclient.connected()){
             mqttclient.loop();
             }else {
              mqtt_connect();
             }
       }
      
       plan();  
       if (timehtm == 0){     
           test16();
          }
       if (timehtmv2 == 0){     
           test16v2();
          }
       if (mqtt_test1_1 == 1){     
           mqtt_publish();
          }
       if (update_code_build1_1 == 1){     
           auto_update();
          }
       if (oled_ssd1306_test1_1 == 1){     
           ssd1306_time();
          }
       if (chart_ticker1_1 == 1){  
           chart_sensor_switch();   
           chart_ticker1_1=0;
          }
           
       if (tft_test1_1 == 1){ 
           tft.fillScreen(ST7735_BLACK);    
           st7735_time();
          }
}

