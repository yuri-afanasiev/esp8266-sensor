void api8() {
     k1 = server.arg("k1").toInt();//ON / OFF  
     k2 = server.arg("k2").toInt();//Time update 
     k3 = server.arg("k3").toInt();//LINE 1  
     k4 = server.arg("k4").toInt();//LINE 2
     k5 = server.arg("k5").toInt();//LINE 3  
     k6 = server.arg("k6").toInt();//LINE 4

     k7 = server.arg("k7").toInt();//ON / OFF  
     k8 = server.arg("k8").toInt();//Time update 
     k9 = server.arg("k9").toInt();//LINE 1  
     k10 = server.arg("k10").toInt();//LINE 2



     k11 = server.arg("k11").toInt();//ON / OFF  
     k12 = server.arg("k12").toInt();//Time update 
     k13 = server.arg("k13").toInt();//LINE 1  
     k14 = server.arg("k14").toInt();//LINE 2
     k15 = server.arg("k15").toInt();//LINE 3  
     k16 = server.arg("k16").toInt();//LINE 4
     k17 = server.arg("k17").toInt();//LINE 5
     k18 = server.arg("k18").toInt();//LINE 6

     k19 = server.arg("k19").toInt();//LINE Q 1  
     k20 = server.arg("k20").toInt();//LINE Q 2
     k21 = server.arg("k21").toInt();//LINE Q 3  
     k22 = server.arg("k22").toInt();//LINE Q 4
     k23 = server.arg("k23").toInt();//LINE Q 5
     k24 = server.arg("k24").toInt();//LINE Q 6
      
     
 
     save8();//  запись в память модуля
     server.send(200, "text/plain", "OK");
}
void openfilehtm8() {
  File htm8 = SPIFFS.open("/htm8.json", "r");
  size_t size = htm8.size();
  std::unique_ptr<char[]> buf(new char[size]);
  htm8.readBytes(buf.get(), size);
  StaticJsonBuffer<900> jsonBuffer;
  JsonObject& json = jsonBuffer.parseObject(buf.get());
   k1 = json["d1"];// ON / OFF 
   k2 = json["d2"];// Time update  
   k3 = json["d3"];// LINE 1
   k4 = json["d4"];// LINE 2
   k5 = json["d5"];// LINE 3
   k6 = json["d6"];// LINE 4   

   k7 = json["d7"];// ON / OFF 
   k8 = json["d8"];// Time update  
   k9 = json["d9"];// LINE 1
   k10 = json["d10"];// LINE 2

   k11 = json["d11"];// ON / OFF 
   k12 = json["d12"];// Time update  
   k13 = json["d13"];// LINE 1
   k14 = json["d14"];// LINE 2
   k15 = json["d15"];// LINE 3
   k16 = json["d16"];// LINE 4   
   k17 = json["d17"];// LINE 5
   k18 = json["d18"];// LINE 6 

   k19 = json["d19"];// LINE Q 1
   k20 = json["d20"];// LINE Q 2
   k21 = json["d21"];// LINE Q 3
   k22 = json["d22"];// LINE Q 4   
   k23 = json["d23"];// LINE Q 5
   k24 = json["d24"];// LINE Q 6 
  
} 

bool save8() {
  StaticJsonBuffer<900> jsonBuffer;
  JsonObject& json = jsonBuffer.createObject();
  json["d1"] = k1;//ON / OFF
  json["d2"] = k2;//Time update 
  json["d3"] = k3;//LINE 1
  json["d4"] = k4;//LINE 2
  json["d5"] = k5;//LINE 3
  json["d6"] = k6;//LINE 4

  json["d7"] = k7;//ON / OFF
  json["d8"] = k8;//Time update 
  json["d9"] = k9;//LINE 1
  json["d10"] = k10;//LINE 2

  json["d11"] = k11;//ON / OFF
  json["d12"] = k12;//Time update 
  json["d13"] = k13;//LINE 1
  json["d14"] = k14;//LINE 2
  json["d15"] = k15;//LINE 3
  json["d16"] = k16;//LINE 4
  json["d17"] = k17;//LINE 5
  json["d18"] = k18;//LINE 6

  json["d19"] = k19;//LINE Q 1
  json["d20"] = k20;//LINE Q 2
  json["d21"] = k21;//LINE Q 3
  json["d22"] = k22;//LINE Q 4
  json["d23"] = k23;//LINE Q 5
  json["d24"] = k24;//LINE Q 6
  
  File htm8 = SPIFFS.open("/htm8.json", "w");
  if (!htm8) {   
    return false;
  }
  json.printTo(htm8);
  return true;
}

void htm8xml(){
String  url1="<?xml version='1.0'?>";
        url1+="<Donnees>"; 
        url1+="<q1>";
        url1+=k1;// ON / OFF 
        url1+="</q1>";
        url1+="<q2>";
        url1+=k2;//Time update 
        url1+="</q2>";
        url1+="<q3>";
        url1+=k3;//LINE 1
        url1+="</q3>";
        url1+="<q4>";
        url1+=k4;//LINE 2
        url1+="</q4>";
        url1+="<q5>";
        url1+=k5;//LINE 3
        url1+="</q5>";
        url1+="<q6>";
        url1+=k6;//LINE 4
        url1+="</q6>";
        url1+="<q7>";
        url1+=k7;//
        url1+="</q7>";
        url1+="<q8>";
        url1+=k8;
        url1+="</q8>";
        url1+="<q9>";
        url1+=k9;
        url1+="</q9>";
        url1+="<q10>";
        url1+=k10;
        url1+="</q10>";
        url1+="<q11>";
        url1+=k11;
        url1+="</q11>";
        url1+="<q12>";
        url1+=k12;
        url1+="</q12>";
        url1+="<q13>";
        url1+=k13;
        url1+="</q13>";
        url1+="<q14>";
        url1+=k14;
        url1+="</q14>";
        url1+="<q15>";
        url1+=k15;
        url1+="</q15>";
        url1+="<q16>";
        url1+=k16;
        url1+="</q16>";
        url1+="<q17>";
        url1+=k17;
        url1+="</q17>";
        url1+="<q18>";
        url1+=k18;
        url1+="</q18>";
        url1+="<q19>";
        url1+=k19;
        url1+="</q19>";
        url1+="<q20>";
        url1+=k20;
        url1+="</q20>";
        url1+="<q21>";
        url1+=k21;
        url1+="</q21>";
        url1+="<q22>";
        url1+=k22;
        url1+="</q22>";
        url1+="<q23>";
        url1+=k23;
        url1+="</q23>";
        url1+="<q24>";
        url1+=k24;
        url1+="</q24>";
        url1+="</Donnees>"; 
server.send(200,"text/xml",url1);
} 
void yt8(){
     t8=1;
}   
void oled_ssd1306_test1(){
     oled_ssd1306_test1_1=1;
}  
void tft_test1(){
     tft_test1_1=1;
}  
 void st7735_time(){
     
      if (k11 == 1){//ON / OFF  LCD I2C  
         if (n3 == 1){   
             dhttest();                     
            }     
         if (n4 == 1){   
             ina219test();                     
            }
         if (n5 == 1){   
             pzem004ttest();                     
            }
         if (n6 == 1){   
             dstest();                     
            }
         if (n7 == 1){   
             htu21test();                     
            }  
         
            
            
            
          
       
        
     switch (k19) {
      case 0:
      tft.setTextColor(ST7735_WHITE);//Белый
      break;
      case 1:
      tft.setTextColor(ST7735_YELLOW);//Желтый
      break;
      case 2:
      tft.setTextColor(ST7735_RED);//Красный
      break;
      case 3:
      tft.setTextColor(ST7735_BLUE);//Синий
      break;
      case 4:
      tft.setTextColor(ST7735_MAGENTA);//Пурпурный
      break; 
      case 5:
      tft.setTextColor(ST7735_GREEN);//Зеленый
      break;    
  }
   tft.setCursor(0,0);  
         if (k13 == 0){// ON / OFF LINE 1           
             if (n1 == 1){ //on/off bh1750   
                 bh1750test();          
                  tft.println(lux);
                } 
             }
         if (k13 == 1){ 
             if (n2 == 1){ //on/off bmp180         
                 tft.println(bmp.readTemperature());// bmp180 Temperature
                } 
            }
        if (k13 == 2){ 
            if (n2 == 1){// on/off bmp180         
                 tft.println(bmp.readPressure()/ 133.3);// mmHg 
               }  
           }
       if (k13 == 3){ 
           if (n3 == 1){// on/off dht 
               tft.println(t);//dht Temperature
               } 
          }
       if (k13 == 4){ 
           if (n3 == 1){// on/off dht 
                tft.println(h);//dht Humidity 
               } 
         }
       if (k13 == 5){//vcc         
          float vcc1 = ESP.getVcc();
          String vcc ;  
          vcc += vcc1/1000,2;      
           tft.println(vcc);   
          }     
       if (k13 == 6){//RSSI
           tft.println(WiFi.RSSI());   
          }
       if (k13 == 7){ 
           if (n4 == 1){// on/off ina219 
                tft.println(loadvoltage);//ina219 V 
               }  
          }
       if (k13 == 8){ 
           if (n4 == 1){// on/off ina219                 
                tft.println(current_mA);//ina219 mA 
               }  
          }
      if (k13 == 9){ 
          if (n5 == 1){// on/off pzem004                  
               tft.println(v);// PZEM004T V
             }  
          }
       if (k13 == 10){ 
           if (n5 == 1){// on/off pzem004                  
                tft.println(i);// PZEM004T A
              } 
           }
        if (k13 == 11){ 
            if (n5 == 1){// on/off pzem004                  
                 tft.println(p);// PZEM004T W
                } 
            }
        if (k13 == 12){ 
            if (n5 == 1){// on/off pzem004                  
                 tft.println(e);// PZEM004T Wh
                } 
           }
        if (k13 == 13){ 
            if (n6 == 1){// on/off 18b20                 
                 tft.println(temp);// 18b20
                } 
            }     
       if (s1 == 1){//htm10 on/off  
           if (k13 == 14){                             
                tft.println(h1);// bh1750
               }        
           if (k13 == 15){                    
                tft.println(h2);//   bmp180 Temperature  
              }
           if (k13 == 16){                      
                tft.println(h3);//  bmp180  mmHg 
              }
            if (k13 == 17){ 
                 tft.println(h4);//  dht t
               } 
            if (k13 == 18){
                 tft.println(h5);//  dht h
                }       
           if (k13 == 19){ 
                tft.println(h6);//  ina219 v
              } 
          if (k13 == 20){                    
               tft.println(h7);//  ina219 mA
             } 
         if (k13 == 21){ 
              tft.println(h8);//  PZEM004T V 
            }         
         if (k13 == 22){                         
              tft.println(h9);//  PZEM004T A  
            }      
         if (k13 == 23){                    
             tft.println(h10);//  PZEM004T W  
           }     
        if (k13 == 24){                       
            tft.println(h11);//  PZEM004T Wh  
           }     
        if (k13 == 25){
            tft.println(h12);//  18b20 
          }
       if (k13 == 26){                           
            tft.println(h13);// ESP 2 RSSI 
          }
       if (k13 == 29){                    
            tft.println(h14);// ESP 2 htu21t  
           }      
       if (k13 == 30){                        
            tft.println(h15);// ESP 2 htu21h  
           }
      }   
      if (k13 == 27){     
           tft.println(htu21temp);//   HTU21 T 
          }       
      if (k13 == 28){                         
           tft.println(htu21hum);//   HTU21 H 
         } 
      if (k13 == 31){  
          max6675test();                        
          tft.println(max6675_t);//   MAX6675 T
         } 

         

    
////////////////////////////////////////////



         
     switch (k20) {
      case 0:
      tft.setTextColor(ST7735_WHITE);//Белый
      break;
      case 1:
      tft.setTextColor(ST7735_YELLOW);//Желтый
      break;
      case 2:
      tft.setTextColor(ST7735_RED);//Красный
      break;
      case 3:
      tft.setTextColor(ST7735_BLUE);//Синий
      break;
      case 4:
      tft.setTextColor(ST7735_MAGENTA);//Пурпурный
      break; 
      case 5:
      tft.setTextColor(ST7735_GREEN);//Зеленый
      break;    
  }
   tft.setCursor(00,25);
/////////////////////////////////
 
         if (k14 == 0){// ON / OFF LINE 1           
             if (n1 == 1){ //on/off bh1750   
                 bh1750test();          
                  tft.println(lux);
                } 
             }
         if (k14 == 1){ 
             if (n2 == 1){ //on/off bmp180         
                 tft.println(bmp.readTemperature());// bmp180 Temperature
                } 
            }
        if (k14 == 2){ 
            if (n2 == 1){// on/off bmp180         
                 tft.println(bmp.readPressure()/ 133.3);// mmHg 
               }  
           }
       if (k14 == 3){ 
           if (n3 == 1){// on/off dht 
               tft.println(t);//dht Temperature
               } 
          }
       if (k14 == 4){ 
           if (n3 == 1){// on/off dht 
                tft.println(h);//dht Humidity 
               } 
         }
       if (k14 == 5){//vcc         
          float vcc1 = ESP.getVcc();
          String vcc ;  
          vcc += vcc1/1000,2;      
           tft.println(vcc);   
          }     
       if (k14 == 6){//RSSI
           tft.println(WiFi.RSSI());   
          }
       if (k14 == 7){ 
           if (n4 == 1){// on/off ina219 
                tft.println(loadvoltage);//ina219 V 
               }  
          }
       if (k14 == 8){ 
           if (n4 == 1){// on/off ina219                 
                tft.println(current_mA);//ina219 mA 
               }  
          }
      if (k14 == 9){ 
          if (n5 == 1){// on/off pzem004                  
               tft.println(v);// PZEM004T V
             }  
          }
       if (k14 == 10){ 
           if (n5 == 1){// on/off pzem004                  
                tft.println(i);// PZEM004T A
              } 
           }
        if (k14 == 11){ 
            if (n5 == 1){// on/off pzem004                  
                 tft.println(p);// PZEM004T W
                } 
            }
        if (k14 == 12){ 
            if (n5 == 1){// on/off pzem004                  
                 tft.println(e);// PZEM004T Wh
                } 
           }
        if (k14 == 13){ 
            if (n6 == 1){// on/off 18b20                 
                 tft.println(temp);// 18b20
                } 
            }     
       if (s1 == 1){//htm10 on/off  
           if (k14 == 14){                             
                tft.println(h1);// bh1750
               }        
           if (k14 == 15){                    
                tft.println(h2);//   bmp180 Temperature  
              }
           if (k14 == 16){                      
                tft.println(h3);//  bmp180  mmHg 
              }
            if (k14 == 17){ 
                 tft.println(h4);//  dht t
               } 
            if (k14 == 18){
                 tft.println(h5);//  dht h
                }       
           if (k14 == 19){ 
                tft.println(h6);//  ina219 v
              } 
          if (k14 == 20){                    
               tft.println(h7);//  ina219 mA
             } 
         if (k14 == 21){ 
              tft.println(h8);//  PZEM004T V 
            }         
         if (k14 == 22){                         
              tft.println(h9);//  PZEM004T A  
            }      
         if (k14 == 23){                    
             tft.println(h10);//  PZEM004T W  
           }     
        if (k14 == 24){                       
            tft.println(h11);//  PZEM004T Wh  
           }     
        if (k14 == 25){
            tft.println(h12);//  18b20 
          }
       if (k14 == 26){                           
            tft.println(h13);// ESP 2 RSSI 
          }
       if (k14 == 29){                    
            tft.println(h14);// ESP 2 htu21t  
           }      
       if (k14 == 30){                        
            tft.println(h15);// ESP 2 htu21h  
           }
      }   
      if (k14 == 27){     
           tft.println(htu21temp);//   HTU21 T 
          }       
      if (k14 == 28){                         
           tft.println(htu21hum);//   HTU21 H 
         } 
////////////////////////////////////////////


 
     switch (k21) {
      case 0:
      tft.setTextColor(ST7735_WHITE);//Белый
      break;
      case 1:
      tft.setTextColor(ST7735_YELLOW);//Желтый
      break;
      case 2:
      tft.setTextColor(ST7735_RED);//Красный
      break;
      case 3:
      tft.setTextColor(ST7735_BLUE);//Синий
      break;
      case 4:
      tft.setTextColor(ST7735_MAGENTA);//Пурпурный
      break; 
      case 5:
      tft.setTextColor(ST7735_GREEN);//Зеленый
      break;    
  }
     tft.setCursor(00,50);    
/////////////////////////////////   

         if (k15 == 0){// ON / OFF LINE 1           
             if (n1 == 1){ //on/off bh1750   
                 bh1750test();          
                  tft.println(lux);
                } 
             }
         if (k15 == 1){ 
             if (n2 == 1){ //on/off bmp180         
                 tft.println(bmp.readTemperature());// bmp180 Temperature
                } 
            }
        if (k15 == 2){ 
            if (n2 == 1){// on/off bmp180         
                 tft.println(bmp.readPressure()/ 133.3);// mmHg 
               }  
           }
       if (k15 == 3){ 
           if (n3 == 1){// on/off dht 
               tft.println(t);//dht Temperature
               } 
          }
       if (k15 == 4){ 
           if (n3 == 1){// on/off dht 
                tft.println(h);//dht Humidity 
               } 
         }
       if (k15 == 5){//vcc         
          float vcc1 = ESP.getVcc();
          String vcc ;  
          vcc += vcc1/1000,2;      
           tft.println(vcc);   
          }     
       if (k15 == 6){//RSSI
           tft.println(WiFi.RSSI());   
          }
       if (k15 == 7){ 
           if (n4 == 1){// on/off ina219 
                tft.println(loadvoltage);//ina219 V 
               }  
          }
       if (k15 == 8){ 
           if (n4 == 1){// on/off ina219                 
                tft.println(current_mA);//ina219 mA 
               }  
          }
      if (k15 == 9){ 
          if (n5 == 1){// on/off pzem004                  
               tft.println(v);// PZEM004T V
             }  
          }
       if (k15 == 10){ 
           if (n5 == 1){// on/off pzem004                  
                tft.println(i);// PZEM004T A
              } 
           }
        if (k15 == 11){ 
            if (n5 == 1){// on/off pzem004                  
                 tft.println(p);// PZEM004T W
                } 
            }
        if (k15 == 12){ 
            if (n5 == 1){// on/off pzem004                  
                 tft.println(e);// PZEM004T Wh
                } 
           }
        if (k15 == 13){ 
            if (n6 == 1){// on/off 18b20                 
                 tft.println(temp);// 18b20
                } 
            }     
       if (s1 == 1){//htm10 on/off  
           if (k15 == 14){                             
                tft.println(h1);// bh1750
               }        
           if (k15 == 15){                    
                tft.println(h2);//   bmp180 Temperature  
              }
           if (k15 == 16){                      
                tft.println(h3);//  bmp180  mmHg 
              }
            if (k15 == 17){ 
                 tft.println(h4);//  dht t
               } 
            if (k15 == 18){
                 tft.println(h5);//  dht h
                }       
           if (k15 == 19){ 
                tft.println(h6);//  ina219 v
              } 
          if (k15 == 20){                    
               tft.println(h7);//  ina219 mA
             } 
         if (k15 == 21){ 
              tft.println(h8);//  PZEM004T V 
            }         
         if (k15 == 22){                         
              tft.println(h9);//  PZEM004T A  
            }      
         if (k15 == 23){                    
             tft.println(h10);//  PZEM004T W  
           }     
        if (k15 == 24){                       
            tft.println(h11);//  PZEM004T Wh  
           }     
        if (k15 == 25){
            tft.println(h12);//  18b20 
          }
       if (k15 == 26){                           
            tft.println(h13);// ESP 2 RSSI 
          }
       if (k15 == 29){                    
            tft.println(h14);// ESP 2 htu21t  
           }      
       if (k15 == 30){                        
            tft.println(h15);// ESP 2 htu21h  
           }
      }   
      if (k15 == 27){     
           tft.println(htu21temp);//   HTU21 T 
          }       
      if (k15 == 28){                         
           tft.println(htu21hum);//   HTU21 H 
         } 
////////////////////////////////////////////

    
     switch (k22) {
      case 0:
      tft.setTextColor(ST7735_WHITE);//Белый
      break;
      case 1:
      tft.setTextColor(ST7735_YELLOW);//Желтый
      break;
      case 2:
      tft.setTextColor(ST7735_RED);//Красный
      break;
      case 3:
      tft.setTextColor(ST7735_BLUE);//Синий
      break;
      case 4:
      tft.setTextColor(ST7735_MAGENTA);//Пурпурный
      break; 
      case 5:
      tft.setTextColor(ST7735_GREEN);//Зеленый
      break;    
  }
    tft.setCursor(00,75);  
/////////////////////////////////   
    if (k16 == 0){// ON / OFF LINE 1           
             if (n1 == 1){ //on/off bh1750   
                 bh1750test();          
                  tft.println(lux);
                } 
             }
         if (k16 == 1){ 
             if (n2 == 1){ //on/off bmp180         
                 tft.println(bmp.readTemperature());// bmp180 Temperature
                } 
            }
        if (k16 == 2){ 
            if (n2 == 1){// on/off bmp180         
                 tft.println(bmp.readPressure()/ 133.3);// mmHg 
               }  
           }
       if (k16 == 3){ 
           if (n3 == 1){// on/off dht 
               tft.println(t);//dht Temperature
               } 
          }
       if (k16 == 4){ 
           if (n3 == 1){// on/off dht 
                tft.println(h);//dht Humidity 
               } 
         }
       if (k16 == 5){//vcc         
          float vcc1 = ESP.getVcc();
          String vcc ;  
          vcc += vcc1/1000,2;      
           tft.println(vcc);   
          }     
       if (k16 == 6){//RSSI
           tft.println(WiFi.RSSI());   
          }
       if (k16 == 7){ 
           if (n4 == 1){// on/off ina219 
                tft.println(loadvoltage);//ina219 V 
               }  
          }
       if (k16 == 8){ 
           if (n4 == 1){// on/off ina219                 
                tft.println(current_mA);//ina219 mA 
               }  
          }
      if (k16 == 9){ 
          if (n5 == 1){// on/off pzem004                  
               tft.println(v);// PZEM004T V
             }  
          }
       if (k16 == 10){ 
           if (n5 == 1){// on/off pzem004                  
                tft.println(i);// PZEM004T A
              } 
           }
        if (k16 == 11){ 
            if (n5 == 1){// on/off pzem004                  
                 tft.println(p);// PZEM004T W
                } 
            }
        if (k16 == 12){ 
            if (n5 == 1){// on/off pzem004                  
                 tft.println(e);// PZEM004T Wh
                } 
           }
        if (k16 == 13){ 
            if (n6 == 1){// on/off 18b20                 
                 tft.println(temp);// 18b20
                } 
            }     
       if (s1 == 1){//htm10 on/off  
           if (k16 == 14){                             
                tft.println(h1);// bh1750
               }        
           if (k16 == 15){                    
                tft.println(h2);//   bmp180 Temperature  
              }
           if (k16 == 16){                      
                tft.println(h3);//  bmp180  mmHg 
              }
            if (k16 == 17){ 
                 tft.println(h4);//  dht t
               } 
            if (k16 == 18){
                 tft.println(h5);//  dht h
                }       
           if (k16 == 19){ 
                tft.println(h6);//  ina219 v
              } 
          if (k16 == 20){                    
               tft.println(h7);//  ina219 mA
             } 
         if (k16 == 21){ 
              tft.println(h8);//  PZEM004T V 
            }         
         if (k16 == 22){                         
              tft.println(h9);//  PZEM004T A  
            }      
         if (k16 == 23){                    
             tft.println(h10);//  PZEM004T W  
           }     
        if (k16 == 24){                       
            tft.println(h11);//  PZEM004T Wh  
           }     
        if (k16 == 25){
            tft.println(h12);//  18b20 
          }
       if (k16 == 26){                           
            tft.println(h13);// ESP 2 RSSI 
          }
       if (k16 == 29){                    
            tft.println(h14);// ESP 2 htu21t  
           }      
       if (k16 == 30){                        
            tft.println(h15);// ESP 2 htu21h  
           }
      }   
      if (k16 == 27){     
           tft.println(htu21temp);//   HTU21 T 
          }       
      if (k16 == 28){                         
           tft.println(htu21hum);//   HTU21 H 
         } 
////////////////////////////////////////////

     
     switch (k23) {
      case 0:
      tft.setTextColor(ST7735_WHITE);//Белый
      break;
      case 1:
      tft.setTextColor(ST7735_YELLOW);//Желтый
      break;
      case 2:
      tft.setTextColor(ST7735_RED);//Красный
      break;
      case 3:
      tft.setTextColor(ST7735_BLUE);//Синий
      break;
      case 4:
      tft.setTextColor(ST7735_MAGENTA);//Пурпурный
      break; 
      case 5:
      tft.setTextColor(ST7735_GREEN);//Зеленый
      break;    
  }
  tft.setCursor(00,100);   
/////////////////////////////////

         if (k17 == 0){// ON / OFF LINE 1           
             if (n1 == 1){ //on/off bh1750   
                 bh1750test();          
                  tft.println(lux);
                } 
             }
         if (k17 == 1){ 
             if (n2 == 1){ //on/off bmp180         
                 tft.println(bmp.readTemperature());// bmp180 Temperature
                } 
            }
        if (k17 == 2){ 
            if (n2 == 1){// on/off bmp180         
                 tft.println(bmp.readPressure()/ 133.3);// mmHg 
               }  
           }
       if (k17 == 3){ 
           if (n3 == 1){// on/off dht 
               tft.println(t);//dht Temperature
               } 
          }
       if (k17 == 4){ 
           if (n3 == 1){// on/off dht 
                tft.println(h);//dht Humidity 
               } 
         }
       if (k17 == 5){//vcc         
          float vcc1 = ESP.getVcc();
          String vcc ;  
          vcc += vcc1/1000,2;      
           tft.println(vcc);   
          }     
       if (k17 == 6){//RSSI
           tft.println(WiFi.RSSI());   
          }
       if (k17 == 7){ 
           if (n4 == 1){// on/off ina219 
                tft.println(loadvoltage);//ina219 V 
               }  
          }
       if (k17 == 8){ 
           if (n4 == 1){// on/off ina219                 
                tft.println(current_mA);//ina219 mA 
               }  
          }
      if (k17 == 9){ 
          if (n5 == 1){// on/off pzem004                  
               tft.println(v);// PZEM004T V
             }  
          }
       if (k17 == 10){ 
           if (n5 == 1){// on/off pzem004                  
                tft.println(i);// PZEM004T A
              } 
           }
        if (k17 == 11){ 
            if (n5 == 1){// on/off pzem004                  
                 tft.println(p);// PZEM004T W
                } 
            }
        if (k17 == 12){ 
            if (n5 == 1){// on/off pzem004                  
                 tft.println(e);// PZEM004T Wh
                } 
           }
        if (k17 == 13){ 
            if (n6 == 1){// on/off 18b20                 
                 tft.println(temp);// 18b20
                } 
            }     
       if (s1 == 1){//htm10 on/off  
           if (k17 == 14){                             
                tft.println(h1);// bh1750
               }        
           if (k17 == 15){                    
                tft.println(h2);//   bmp180 Temperature  
              }
           if (k17 == 16){                      
                tft.println(h3);//  bmp180  mmHg 
              }
            if (k17 == 17){ 
                 tft.println(h4);//  dht t
               } 
            if (k17 == 18){
                 tft.println(h5);//  dht h
                }       
           if (k17 == 19){ 
                tft.println(h6);//  ina219 v
              } 
          if (k17 == 20){                    
               tft.println(h7);//  ina219 mA
             } 
         if (k17 == 21){ 
              tft.println(h8);//  PZEM004T V 
            }         
         if (k17 == 22){                         
              tft.println(h9);//  PZEM004T A  
            }      
         if (k17 == 23){                    
             tft.println(h10);//  PZEM004T W  
           }     
        if (k17 == 24){                       
            tft.println(h11);//  PZEM004T Wh  
           }     
        if (k17 == 25){
            tft.println(h12);//  18b20 
          }
       if (k17 == 26){                           
            tft.println(h13);// ESP 2 RSSI 
          }
       if (k17 == 29){                    
            tft.println(h14);// ESP 2 htu21t  
           }      
       if (k17 == 30){                        
            tft.println(h15);// ESP 2 htu21h  
           }
      }   
      if (k17 == 27){     
           tft.println(htu21temp);//   HTU21 T 
          }       
      if (k17 == 28){                         
           tft.println(htu21hum);//   HTU21 H 
         } 
////////////////////////////////////////////
   
     switch (k24) {
      case 0:
      tft.setTextColor(ST7735_WHITE);//Белый
      break;
      case 1:
      tft.setTextColor(ST7735_YELLOW);//Желтый
      break;
      case 2:
      tft.setTextColor(ST7735_RED);//Красный
      break;
      case 3:
      tft.setTextColor(ST7735_BLUE);//Синий
      break;
      case 4:
      tft.setTextColor(ST7735_MAGENTA);//Пурпурный
      break; 
      case 5:
      tft.setTextColor(ST7735_GREEN);//Зеленый
      break;    
  }
   tft.setCursor(00,125);    
  
         if (k18 == 0){// ON / OFF LINE 1           
             if (n1 == 1){ //on/off bh1750   
                 bh1750test();          
                  tft.println(lux);
                } 
             }
         if (k18 == 1){ 
             if (n2 == 1){ //on/off bmp180         
                 tft.println(bmp.readTemperature());// bmp180 Temperature
                } 
            }
        if (k18 == 2){ 
            if (n2 == 1){// on/off bmp180         
                 tft.println(bmp.readPressure()/ 133.3);// mmHg 
               }  
           }
       if (k18 == 3){ 
           if (n3 == 1){// on/off dht 
               tft.println(t);//dht Temperature
               } 
          }
       if (k18 == 4){ 
           if (n3 == 1){// on/off dht 
                tft.println(h);//dht Humidity 
               } 
         }
       if (k18 == 5){//vcc         
          float vcc1 = ESP.getVcc();
          String vcc ;  
          vcc += vcc1/1000,2;      
           tft.println(vcc);   
          }     
       if (k18 == 6){//RSSI
           tft.println(WiFi.RSSI());   
          }
       if (k18 == 7){ 
           if (n4 == 1){// on/off ina219 
                tft.println(loadvoltage);//ina219 V 
               }  
          }
       if (k18 == 8){ 
           if (n4 == 1){// on/off ina219                 
                tft.println(current_mA);//ina219 mA 
               }  
          }
      if (k18 == 9){ 
          if (n5 == 1){// on/off pzem004                  
               tft.println(v);// PZEM004T V
             }  
          }
       if (k18 == 10){ 
           if (n5 == 1){// on/off pzem004                  
                tft.println(i);// PZEM004T A
              } 
           }
        if (k18 == 11){ 
            if (n5 == 1){// on/off pzem004                  
                 tft.println(p);// PZEM004T W
                } 
            }
        if (k18 == 12){ 
            if (n5 == 1){// on/off pzem004                  
                 tft.println(e);// PZEM004T Wh
                } 
           }
        if (k18 == 13){ 
            if (n6 == 1){// on/off 18b20                 
                 tft.println(temp);// 18b20
                } 
            }     
       if (s1 == 1){//htm10 on/off  
           if (k18 == 14){                             
                tft.println(h1);// bh1750
               }        
           if (k18 == 15){                    
                tft.println(h2);//   bmp180 Temperature  
              }
           if (k18 == 16){                      
                tft.println(h3);//  bmp180  mmHg 
              }
            if (k18 == 17){ 
                 tft.println(h4);//  dht t
               } 
            if (k18 == 18){
                 tft.println(h5);//  dht h
                }       
           if (k18 == 19){ 
                tft.println(h6);//  ina219 v
              } 
          if (k18 == 20){                    
               tft.println(h7);//  ina219 mA
             } 
         if (k18 == 21){ 
              tft.println(h8);//  PZEM004T V 
            }         
         if (k18 == 22){                         
              tft.println(h9);//  PZEM004T A  
            }      
         if (k18 == 23){                    
             tft.println(h10);//  PZEM004T W  
           }     
        if (k18 == 24){                       
            tft.println(h11);//  PZEM004T Wh  
           }     
        if (k18 == 25){
            tft.println(h12);//  18b20 
          }
       if (k18 == 26){                           
            tft.println(h13);// ESP 2 RSSI 
          }
       if (k18 == 29){                    
            tft.println(h14);// ESP 2 htu21t  
           }      
       if (k18 == 30){                        
            tft.println(h15);// ESP 2 htu21h  
           }
      }   
      if (k18 == 27){     
           tft.println(htu21temp);//   HTU21 T 
          }       
      if (k18 == 28){                         
           tft.println(htu21hum);//   HTU21 H 
         } 
/////////////////////////////////
      
}/////////////////////////////////////////////////    
tft_test1_1 = 0;
}           
 void ssd1306_time(){
   if (k7 == 1){//ON / OFF  LCD I2C  
         if (n3 == 1){   
             dhttest();                     
            }     
         if (n4 == 1){   
             ina219test();                     
            }
         if (n5 == 1){   
             pzem004ttest();                     
            }
         if (n6 == 1){   
             dstest();                     
            }
         if (n7 == 1){   
             htu21test();                     
            }  
         display_oled.clearDisplay(); //Очистка экрана        
         display_oled.setTextSize(2);
         display_oled.setTextColor(WHITE);
         display_oled.setCursor(25,0);   
         if (k9 == 0){// ON / OFF LINE 1           
             if (n1 == 1){ //on/off bh1750   
                 bh1750test();          
                  display_oled.println(lux);
                } else {
                    
                }
             }
         if (k9 == 1){ 
             if (n2 == 1){ //on/off bmp180         
                 display_oled.println(bmp.readTemperature());// bmp180 Temperature
                } else {
                    
                }
            }
        if (k9 == 2){ 
            if (n2 == 1){// on/off bmp180         
                 display_oled.println(bmp.readPressure()/ 133.3);// mmHg 
               }  
           }
       if (k9 == 3){ 
           if (n3 == 1){// on/off dht 
               display_oled.println(t);//dht Temperature
               } else {
                   
               }
          }
       if (k9 == 4){ 
           if (n3 == 1){// on/off dht 
                display_oled.println(h);//dht Humidity 
               } else {
                   
               }
         }
       if (k9 == 5){//vcc         
          float vcc1 = ESP.getVcc();
          String vcc ;  
          vcc += vcc1/1000,2;      
           display_oled.println(vcc);   
          }     
       if (k9 == 6){//RSSI
           display_oled.println(WiFi.RSSI());   
          }
       if (k9 == 7){ 
           if (n4 == 1){// on/off ina219 
                display_oled.println(loadvoltage);//ina219 V 
               }  
          }
       if (k9 == 8){ 
           if (n4 == 1){// on/off ina219                 
                display_oled.println(current_mA);//ina219 mA 
               }  
          }
      if (k9 == 9){ 
          if (n5 == 1){// on/off pzem004                  
               display_oled.println(v);// PZEM004T V
             }  
          }
       if (k9 == 10){ 
           if (n5 == 1){// on/off pzem004                  
                display_oled.println(i);// PZEM004T A
              } else {
                  
              }
           }
        if (k9 == 11){ 
            if (n5 == 1){// on/off pzem004                  
                 display_oled.println(p);// PZEM004T W
                } else {
                    
                 }
            }
        if (k9 == 12){ 
            if (n5 == 1){// on/off pzem004                  
                 display_oled.println(e);// PZEM004T Wh
                } else {
                    
                }
           }
        if (k9 == 13){ 
            if (n6 == 1){// on/off 18b20                 
                 display_oled.println(temp);// 18b20
                } else {
                    
                }
            }     
       if (s1 == 1){//htm10 on/off  
           if (k9 == 14){                             
                display_oled.println(h1);// bh1750
               } else {
                   
                }       
           if (k9 == 15){                    
                display_oled.println(h2);//   bmp180 Temperature  
              } else {
                  
              }
           if (k9 == 16){                      
                display_oled.println(h3);//  bmp180  mmHg 
              } else {
                  
              }
            if (k9 == 17){ 
                 display_oled.println(h4);//  dht t
               } else {
                   
               }
            if (k9 == 18){
                 display_oled.println(h5);//  dht h
                } else {
                    
                }      
           if (k9 == 19){ 
                display_oled.println(h6);//  ina219 v
              } else {
                  
              }
          if (k9 == 20){                    
               display_oled.println(h7);//  ina219 mA
             }  else {
                  
             }
         if (k9 == 21){ 
              display_oled.println(h8);//  PZEM004T V 
            } else {
                
             }        
         if (k9 == 22){                         
              display_oled.println(h9);//  PZEM004T A  
            } else {
              
            }     
        if (k9 == 23){                    
             display_oled.println(h10);//  PZEM004T W  
           } else {
               
           }      
       if (k9 == 24){                       
            display_oled.println(h11);//  PZEM004T Wh  
           } else {
               
           }      
       if (k9 == 25){
            display_oled.println(h12);//  18b20 
          } else {
              
          }
       if (k9 == 26){                           
            display_oled.println(h13);// ESP 2 RSSI 
          } else {
              
          }
       if (k9 == 29){                    
            display_oled.println(h14);// ESP 2 htu21t  
           } else {
               
           }       
       if (k9 == 30){                        
            display_oled.println(h15);// ESP 2 htu21h  
           } else {
               
           }
      }   
      if (k9 == 27){     
           display_oled.println(htu21temp);//   HTU21 T 
          } else {
              
            }       
      if (k9 == 28){                         
           display_oled.println(htu21hum);//   HTU21 H 
         } else {
             
          }
          if (k9 == 31){  
          max6675test();                        
          display_oled.println(max6675_t);// MAX6675 T
         } 
         
          
          /////////////////////////////////////////////////       
      display_oled.setCursor(25,17);
      //////////////////////////////
               if (k10 == 0){// ON / OFF LINE 1           
             if (n1 == 1){ //on/off bh1750   
                 bh1750test();          
                  display_oled.println(lux);
                } else {
                    
                }
             }
         if (k10 == 1){ 
             if (n2 == 1){ //on/off bmp180         
                 display_oled.println(bmp.readTemperature());// bmp180 Temperature
                } else {
                    
                }
            }
        if (k10 == 2){ 
            if (n2 == 1){// on/off bmp180         
                 display_oled.println(bmp.readPressure()/ 133.3);// mmHg 
               } else {
                   
               }
           }
       if (k10 == 3){ 
           if (n3 == 1){// on/off dht 
               display_oled.println(t);//dht Temperature
               } else {
                   
               }
          }
       if (k10 == 4){ 
           if (n3 == 1){// on/off dht 
                display_oled.println(h);//dht Humidity 
               } else {
                   
               }
         }
       if (k10 == 5){//vcc         
          float vcc1 = ESP.getVcc();
          String vcc ;  
          vcc += vcc1/1000,2;      
           display_oled.println(vcc);   
          }     
       if (k10 == 6){//RSSI
           display_oled.println(WiFi.RSSI());   
          }
       if (k10 == 7){ 
           if (n4 == 1){// on/off ina219 
                display_oled.println(loadvoltage);//ina219 V 
               } else {
                   
               }
          }
       if (k10 == 8){ 
           if (n4 == 1){// on/off ina219                 
                display_oled.println(current_mA);//ina219 mA 
               } else {
                   
               }
          }
      if (k10 == 9){ 
          if (n5 == 1){// on/off pzem004                  
               display_oled.println(v);// PZEM004T V
             } else {
                 
              }
          }
       if (k10 == 10){ 
           if (n5 == 1){// on/off pzem004                  
                display_oled.println(i);// PZEM004T A
              } else {
                  
              }
           }
        if (k10 == 11){ 
            if (n5 == 1){// on/off pzem004                  
                 display_oled.println(p);// PZEM004T W
                } else {
                    
                 }
            }
        if (k10 == 12){ 
            if (n5 == 1){// on/off pzem004                  
                 display_oled.println(e);// PZEM004T Wh
                } else {
                    
                }
           }
        if (k10 == 13){ 
            if (n6 == 1){// on/off 18b20                 
                 display_oled.println(temp);// 18b20
                } else {
                    
                }
            }     
       if (s1 == 1){//htm10 on/off  
           if (k10 == 14){                             
                display_oled.println(h1);// bh1750
               } else {
                   
                }       
           if (k10 == 15){                    
                display_oled.println(h2);//   bmp180 Temperature  
              } else {
                  
              }
           if (k10 == 16){                      
                display_oled.println(h3);//  bmp180  mmHg 
              } else {
                  
              }
            if (k10 == 17){ 
                 display_oled.println(h4);//  dht t
               } else {
                   
               }
            if (k10 == 18){
                 display_oled.println(h5);//  dht h
                } else {
                    
                }      
           if (k10 == 19){ 
                display_oled.println(h6);//  ina219 v
              } else {
                  
              }
          if (k10 == 20){                    
               display_oled.println(h7);//  ina219 mA
             }  else {
                  
             }
         if (k10 == 21){ 
              display_oled.println(h8);//  PZEM004T V 
            } else {
                
             }        
         if (k10 == 22){                         
              display_oled.println(h9);//  PZEM004T A  
            } else {
              
            }     
        if (k10 == 23){                    
             display_oled.println(h10);//  PZEM004T W  
           } else {
               
           }      
       if (k10 == 24){                       
            display_oled.println(h11);//  PZEM004T Wh  
           } else {
               
           }      
       if (k10 == 25){
            display_oled.println(h12);//  18b20 
          } else {
              
          }
       if (k10 == 26){                           
            display_oled.println(h13);// ESP 2 RSSI 
          } else {
              
          }
       if (k10 == 29){                    
            display_oled.println(h14);// ESP 2 htu21t  
           } else {
               
           }       
       if (k10 == 30){                        
            display_oled.println(h15);// ESP 2 htu21h  
           } else {
               
           }
      }   
      if (k10 == 27){     
           display_oled.println(htu21temp);//   HTU21 T 
          } else {
              
            }       
      if (k10 == 28){                         
           display_oled.println(htu21hum);//   HTU21 H 
         } 
      if (k10 == 31){  
          max6675test();
          display_oled.println(max6675_t);// MAX6675 T
         } 
         display_oled.display();  
     }
     
  oled_ssd1306_test1_1=0;
 }
void lcdtime(){
      if (k1 == 1){//ON / OFF  LCD I2C  
         if (n3 == 1){   
             dhttest();                     
            }     
         if (n4 == 1){   
             ina219test();                     
            }
         if (n5 == 1){   
             pzem004ttest();                     
            }
         if (n6 == 1){   
             dstest();                     
            }
         if (n7 == 1){   
             htu21test();                     
            }  
         lcd.clear(); //Очистка экрана           
         if (k3 == 0){// ON / OFF LINE 1           
             if (n1 == 1){ //on/off bh1750   
                 bh1750test();          
                 lcd.print(lux);
                } else {
                    
                }
             }
         if (k3 == 1){ 
             if (n2 == 1){ //on/off bmp180         
                lcd.print(bmp.readTemperature());// bmp180 Temperature
                } else {
                    
                }
            }
        if (k3 == 2){ 
            if (n2 == 1){// on/off bmp180         
                lcd.print(bmp.readPressure()/ 133.3);// mmHg 
               }  
           }
       if (k3 == 3){ 
           if (n3 == 1){// on/off dht 
              lcd.print(t);//dht Temperature
               } else {
                   
               }
          }
       if (k3 == 4){ 
           if (n3 == 1){// on/off dht 
               lcd.print(h);//dht Humidity 
               } else {
                   
               }
         }
       if (k3 == 5){//vcc         
          float vcc1 = ESP.getVcc();
          String vcc ;  
          vcc += vcc1/1000,2;      
          lcd.print(vcc);   
          }     
       if (k3 == 6){//RSSI
          lcd.print(WiFi.RSSI());   
          }
       if (k3 == 7){ 
           if (n4 == 1){// on/off ina219 
               lcd.print(loadvoltage);//ina219 V 
               }  
          }
       if (k3 == 8){ 
           if (n4 == 1){// on/off ina219                 
               lcd.print(current_mA);//ina219 mA 
               }  
          }
      if (k3 == 9){ 
          if (n5 == 1){// on/off pzem004                  
              lcd.print(v);// PZEM004T V
             }  
          }
       if (k3 == 10){ 
           if (n5 == 1){// on/off pzem004                  
               lcd.print(i);// PZEM004T A
              } else {
                  
              }
           }
        if (k3 == 11){ 
            if (n5 == 1){// on/off pzem004                  
                lcd.print(p);// PZEM004T W
                } else {
                    
                 }
            }
        if (k3 == 12){ 
            if (n5 == 1){// on/off pzem004                  
                lcd.print(e);// PZEM004T Wh
                } else {
                    
                }
           }
        if (k3 == 13){ 
            if (n6 == 1){// on/off 18b20                 
                lcd.print(temp);// 18b20
                } else {
                    
                }
            }     
       if (s1 == 1){//htm10 on/off  
           if (k3 == 14){                             
               lcd.print(h1);// bh1750
               } else {
                   
                }       
           if (k3 == 15){                    
               lcd.print(h2);//   bmp180 Temperature  
              } else {
                  
              }
           if (k3 == 16){                      
               lcd.print(h3);//  bmp180  mmHg 
              } else {
                  
              }
            if (k3 == 17){ 
                lcd.print(h4);//  dht t
               } else {
                   
               }
            if (k3 == 18){
                lcd.print(h5);//  dht h
                } else {
                    
                }      
           if (k3 == 19){ 
               lcd.print(h6);//  ina219 v
              } else {
                  
              }
          if (k3 == 20){                    
              lcd.print(h7);//  ina219 mA
             }  else {
                  
             }
         if (k3 == 21){ 
             lcd.print(h8);//  PZEM004T V 
            } else {
                
             }        
         if (k3 == 22){                         
             lcd.print(h9);//  PZEM004T A  
            } else {
              
            }     
        if (k3 == 23){                    
            lcd.print(h10);//  PZEM004T W  
           } else {
               
           }      
       if (k3 == 24){                       
           lcd.print(h11);//  PZEM004T Wh  
           } else {
               
           }      
       if (k3 == 25){
           lcd.print(h12);//  18b20 
          } else {
              
          }
       if (k3 == 26){                           
           lcd.print(h13);// ESP 2 RSSI 
          } else {
              
          }
       if (k3 == 29){                    
           lcd.print(h14);// ESP 2 htu21t  
           } else {
               
           }       
       if (k3 == 30){                        
           lcd.print(h15);// ESP 2 htu21h  
           } else {
               
           }
      }   
      if (k3 == 27){     
          lcd.print(htu21temp);//   HTU21 T 
          } else {
              
            }       
      if (k3 == 28){                         
          lcd.print(htu21hum);//   HTU21 H 
         } else {
             
          }/////////////////////////////////////////////////   
          if (k3 == 31){  
          max6675test();  
          lcd.print(max6675_t);//   MAX6675 T   
          }     
      lcd.setCursor(0,1);
      //////////////////////////////
               if (k4 == 0){// ON / OFF LINE 1           
             if (n1 == 1){ //on/off bh1750   
                 bh1750test();          
                 lcd.print(lux);
                } else {
                    
                }
             }
         if (k4 == 1){ 
             if (n2 == 1){ //on/off bmp180         
                lcd.print(bmp.readTemperature());// bmp180 Temperature
                } else {
                    
                }
            }
        if (k4 == 2){ 
            if (n2 == 1){// on/off bmp180         
                lcd.print(bmp.readPressure()/ 133.3);// mmHg 
               } else {
                   
               }
           }
       if (k4 == 3){ 
           if (n3 == 1){// on/off dht 
              lcd.print(t);//dht Temperature
               } else {
                   
               }
          }
       if (k4 == 4){ 
           if (n3 == 1){// on/off dht 
               lcd.print(h);//dht Humidity 
               } else {
                   
               }
         }
       if (k4 == 5){//vcc         
          float vcc1 = ESP.getVcc();
          String vcc ;  
          vcc += vcc1/1000,2;      
          lcd.print(vcc);   
          }     
       if (k4 == 6){//RSSI
          lcd.print(WiFi.RSSI());   
          }
       if (k4 == 7){ 
           if (n4 == 1){// on/off ina219 
               lcd.print(loadvoltage);//ina219 V 
               } else {
                   
               }
          }
       if (k4 == 8){ 
           if (n4 == 1){// on/off ina219                 
               lcd.print(current_mA);//ina219 mA 
               } else {
                   
               }
          }
      if (k4 == 9){ 
          if (n5 == 1){// on/off pzem004                  
              lcd.print(v);// PZEM004T V
             } else {
                 
              }
          }
       if (k4 == 10){ 
           if (n5 == 1){// on/off pzem004                  
               lcd.print(i);// PZEM004T A
              } else {
                  
              }
           }
        if (k4 == 11){ 
            if (n5 == 1){// on/off pzem004                  
                lcd.print(p);// PZEM004T W
                } else {
                    
                 }
            }
        if (k4 == 12){ 
            if (n5 == 1){// on/off pzem004                  
                lcd.print(e);// PZEM004T Wh
                } else {
                    
                }
           }
        if (k4 == 13){ 
            if (n6 == 1){// on/off 18b20                 
                lcd.print(temp);// 18b20
                } else {
                    
                }
            }     
       if (s1 == 1){//htm10 on/off  
           if (k4 == 14){                             
               lcd.print(h1);// bh1750
               } else {
                   
                }       
           if (k4 == 15){                    
               lcd.print(h2);//   bmp180 Temperature  
              } else {
                  
              }
           if (k4 == 16){                      
               lcd.print(h3);//  bmp180  mmHg 
              } else {
                  
              }
            if (k4 == 17){ 
                lcd.print(h4);//  dht t
               } else {
                   
               }
            if (k4 == 18){
                lcd.print(h5);//  dht h
                } else {
                    
                }      
           if (k4 == 19){ 
               lcd.print(h6);//  ina219 v
              } else {
                  
              }
          if (k4 == 20){                    
              lcd.print(h7);//  ina219 mA
             }  else {
                  
             }
         if (k4 == 21){ 
             lcd.print(h8);//  PZEM004T V 
            } else {
                
             }        
         if (k4 == 22){                         
             lcd.print(h9);//  PZEM004T A  
            } else {
              
            }     
        if (k4 == 23){                    
            lcd.print(h10);//  PZEM004T W  
           } else {
               
           }      
       if (k4 == 24){                       
           lcd.print(h11);//  PZEM004T Wh  
           } else {
               
           }      
       if (k4 == 25){
           lcd.print(h12);//  18b20 
          } else {
              
          }
       if (k4 == 26){                           
           lcd.print(h13);// ESP 2 RSSI 
          } else {
              
          }
       if (k4 == 29){                    
           lcd.print(h14);// ESP 2 htu21t  
           } else {
               
           }       
       if (k4 == 30){                        
           lcd.print(h15);// ESP 2 htu21h  
           } else {
               
           }
      }   
      if (k4 == 27){     
          lcd.print(htu21temp);//   HTU21 T 
          } else {
              
            }       
      if (k4 == 28){                         
          lcd.print(htu21hum);//   HTU21 H 
         } else {
                 
         }
    lcd.setCursor(0,2);
                if (k5 == 0){// ON / OFF LINE 1           
             if (n1 == 1){ //on/off bh1750   
                 bh1750test();          
                 lcd.print(lux);
                } else {
                    
                }
             }
         if (k5 == 1){ 
             if (n2 == 1){ //on/off bmp180         
                lcd.print(bmp.readTemperature());// bmp180 Temperature
                } else {
                    
                }
            }
        if (k5 == 2){ 
            if (n2 == 1){// on/off bmp180         
                lcd.print(bmp.readPressure()/ 133.3);// mmHg 
               } else {
                   
               }
           }
       if (k5 == 3){ 
           if (n3 == 1){// on/off dht 
              lcd.print(t);//dht Temperature
               } else {
                   
               }
          }
       if (k5 == 4){ 
           if (n3 == 1){// on/off dht 
               lcd.print(h);//dht Humidity 
               } else {
                   
               }
         }
       if (k5 == 5){//vcc         
          float vcc1 = ESP.getVcc();
          String vcc ;  
          vcc += vcc1/1000,2;      
          lcd.print(vcc);   
          }     
       if (k5 == 6){//RSSI
          lcd.print(WiFi.RSSI());   
          }
       if (k5 == 7){ 
           if (n4 == 1){// on/off ina219 
               lcd.print(loadvoltage);//ina219 V 
               } else {
                   
               }
          }
       if (k5 == 8){ 
           if (n4 == 1){// on/off ina219                 
               lcd.print(current_mA);//ina219 mA 
               } else {
                   
               }
          }
      if (k5 == 9){ 
          if (n5 == 1){// on/off pzem004                  
              lcd.print(v);// PZEM004T V
             } else {
                 
              }
          }
       if (k5 == 10){ 
           if (n5 == 1){// on/off pzem004                  
               lcd.print(i);// PZEM004T A
              } else {
                  
              }
           }
        if (k5 == 11){ 
            if (n5 == 1){// on/off pzem004                  
                lcd.print(p);// PZEM004T W
                } else {
                    
                 }
            }
        if (k5 == 12){ 
            if (n5 == 1){// on/off pzem004                  
                lcd.print(e);// PZEM004T Wh
                } else {
                    
                }
           }
        if (k5 == 13){ 
            if (n6 == 1){// on/off 18b20                 
                lcd.print(temp);// 18b20
                } else {
                    
                }
            }     
       if (s1 == 1){//htm10 on/off  
           if (k5 == 14){                             
               lcd.print(h1);// bh1750
               } else {
                   
                }       
           if (k5 == 15){                    
               lcd.print(h2);//   bmp180 Temperature  
              } else {
                  
              }
           if (k5 == 16){                      
               lcd.print(h3);//  bmp180  mmHg 
              } else {
                  
              }
            if (k5 == 17){ 
                lcd.print(h4);//  dht t
               } else {
                   
               }
            if (k5 == 18){
                lcd.print(h5);//  dht h
                } else {
                    
                }      
           if (k5 == 19){ 
               lcd.print(h6);//  ina219 v
              } else {
                  
              }
          if (k5 == 20){                    
              lcd.print(h7);//  ina219 mA
             }  else {
                  
             }
         if (k5 == 21){ 
             lcd.print(h8);//  PZEM004T V 
            } else {
                
             }        
         if (k5 == 22){                         
             lcd.print(h9);//  PZEM004T A  
            } else {
              
            }     
        if (k5 == 23){                    
            lcd.print(h10);//  PZEM004T W  
           } else {
               
           }      
       if (k5 == 24){                       
           lcd.print(h11);//  PZEM004T Wh  
           } else {
               
           }      
       if (k5 == 25){
           lcd.print(h12);//  18b20 
          } else {
              
          }
       if (k5 == 26){                           
           lcd.print(h13);// ESP 2 RSSI 
          } else {
              
          }
       if (k5 == 29){                    
           lcd.print(h14);// ESP 2 htu21t  
           } else {
               
           }       
       if (k5 == 30){                        
           lcd.print(h15);// ESP 2 htu21h  
           } else {
               
           }
      }   
      if (k5 == 27){     
          lcd.print(htu21temp);//   HTU21 T 
          } else {
              
            }       
      if (k5 == 28){                         
          lcd.print(htu21hum);//   HTU21 H 
         } else {
             
         }
     lcd.setCursor(0,3);
              if (k6 == 0){// ON / OFF LINE 1           
             if (n1 == 1){ //on/off bh1750   
                 bh1750test();          
                 lcd.print(lux);
                } else {
                    
                }
             }
         if (k6 == 1){ 
             if (n2 == 1){ //on/off bmp180         
                lcd.print(bmp.readTemperature());// bmp180 Temperature
                } else {
                    
                }
            }
        if (k6 == 2){ 
            if (n2 == 1){// on/off bmp180         
                lcd.print(bmp.readPressure()/ 133.3);// mmHg 
               } else {
                   
               }
           }
       if (k6 == 3){ 
           if (n3 == 1){// on/off dht 
              lcd.print(t);//dht Temperature
               } else {
                   
               }
          }
       if (k6 == 4){ 
           if (n3 == 1){// on/off dht 
               lcd.print(h);//dht Humidity 
               } else {
                   
               }
         }
       if (k6 == 5){//vcc         
          float vcc1 = ESP.getVcc();
          String vcc ;  
          vcc += vcc1/1000,2;      
          lcd.print(vcc);   
          }     
       if (k6 == 6){//RSSI
          lcd.print(WiFi.RSSI());   
          }
       if (k6 == 7){ 
           if (n4 == 1){// on/off ina219 
               lcd.print(loadvoltage);//ina219 V 
               } else {
                   
               }
          }
       if (k6 == 8){ 
           if (n4 == 1){// on/off ina219                 
               lcd.print(current_mA);//ina219 mA 
               } else {
                   
               }
          }
      if (k6 == 9){ 
          if (n5 == 1){// on/off pzem004                  
              lcd.print(v);// PZEM004T V
             } else {
                 
              }
          }
       if (k6 == 10){ 
           if (n5 == 1){// on/off pzem004                  
               lcd.print(i);// PZEM004T A
              } else {
                  
              }
           }
        if (k6 == 11){ 
            if (n5 == 1){// on/off pzem004                  
                lcd.print(p);// PZEM004T W
                } else {
                    
                 }
            }
        if (k6 == 12){ 
            if (n5 == 1){// on/off pzem004                  
                lcd.print(e);// PZEM004T Wh
                } else {
                    
                }
           }
        if (k6 == 13){ 
            if (n6 == 1){// on/off 18b20                 
                lcd.print(temp);// 18b20
                } else {
                    
                }
            }     
       if (s1 == 1){//htm10 on/off  
           if (k6 == 14){                             
               lcd.print(h1);// bh1750
               } else {
                   
                }       
           if (k6 == 15){                    
               lcd.print(h2);//   bmp180 Temperature  
              } else {
                  
              }
           if (k6 == 16){                      
               lcd.print(h3);//  bmp180  mmHg 
              } else {
                  
              }
            if (k6 == 17){ 
                lcd.print(h4);//  dht t
               } else {
                   
               }
            if (k6 == 18){
                lcd.print(h5);//  dht h
                } else {
                    
                }      
           if (k6 == 19){ 
               lcd.print(h6);//  ina219 v
              } else {
                  
              }
          if (k6 == 20){                    
              lcd.print(h7);//  ina219 mA
             }  else {
                  
             }
         if (k6 == 21){ 
             lcd.print(h8);//  PZEM004T V 
            } else {
                
             }        
         if (k6 == 22){                         
             lcd.print(h9);//  PZEM004T A  
            } else {
              
            }     
        if (k6 == 23){                    
            lcd.print(h10);//  PZEM004T W  
           } else {
               
           }      
       if (k6 == 24){                       
           lcd.print(h11);//  PZEM004T Wh  
           } else {
               
           }      
       if (k6 == 25){
           lcd.print(h12);//  18b20 
          } else {
              
          }
       if (k6 == 26){                           
           lcd.print(h13);// ESP 2 RSSI 
          } else {
              
          }
       if (k6 == 29){                    
           lcd.print(h14);// ESP 2 htu21t  
           } else {
               
           }       
       if (k6 == 30){                        
           lcd.print(h15);// ESP 2 htu21h  
           } else {
               
           }
      }   
      if (k6 == 27){     
          lcd.print(htu21temp);//   HTU21 T 
          } else {
              
            }       
      if (k6 == 28){                         
          lcd.print(htu21hum);//   HTU21 H 
         } else {
             
         }
    }         
}
