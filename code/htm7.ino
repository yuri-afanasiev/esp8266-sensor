void api7() {//Свой сервер    
     f1 = server.arg("f1").toInt();// on 1/ off 0  ..
     f2 = server.arg("f2").toInt();//интервал между запросами 
     f3 = server.arg("f3"); // host 
     f4 = server.arg("f4");// httpPort    
     f5= server.arg("f5");// url   
    
    f6 = server.arg("f6").toInt();//lux BH1750
    f7 = server.arg("f7").toInt();//bmp180 
    f8 = server.arg("f8").toInt();//dht
    f9 = server.arg("f9").toInt();//ina219
    f10 = server.arg("f10").toInt();//PZEM004T 
    f11 = server.arg("f11").toInt();//DS18B20 
    f12 = server.arg("f12").toInt();//HTU21
    f13 = server.arg("f13").toInt();//Vcc
    f14 = server.arg("f14").toInt();//WiFi.RSSI
    
    f15 = server.arg("f15").toInt();//nrf #1
    f16 = server.arg("f16").toInt();//nrf #2
    f17 = server.arg("f17").toInt();//nrf #3
    f18 = server.arg("f18").toInt();//nrf #4
    f19 = server.arg("f19").toInt();//nrf #5
    f20 = server.arg("f20").toInt();//nrf #6

    f21 = server.arg("f21").toInt();//ADS1115 0x48
    f22 = server.arg("f22").toInt();//ADS1115 0x49 

    f23 = server.arg("f23").toInt();//max6675 
    
    f24 = server.arg("f24").toInt();//CCS811 
    f25 = server.arg("f25").toInt();//HDC1080 
    f26 = server.arg("f26").toInt();//BME280 
    
     save7();//  запись в память модуля
     server.send(200, "text/plain", "OK");
             
     
}
void openfilehtm7() {
  File htm7 = SPIFFS.open("/htm7.json", "r");
  size_t size = htm7.size();
  std::unique_ptr<char[]> buf(new char[size]);
  htm7.readBytes(buf.get(), size);
  StaticJsonBuffer<800> jsonBuffer;
  JsonObject& json = jsonBuffer.parseObject(buf.get());
   f1 = json["d1"];// on 1/ off 0
   f2 = json["d2"];// интервал запроса
   String ff3 = json["d3"];//
   String ff4 = json["d4"];//
   String ff5 = json["d5"];//
   f6 = json["d6"];//
   f7 = json["d7"];//
   f8 = json["d8"];//
   f9 = json["d9"];//
   f10 = json["d10"];//
   f11 = json["d11"];//
   f12 = json["d12"];//
   f13 = json["d13"];//
   f14 = json["d14"];//
   f15 = json["d15"];//
   f16 = json["d16"];//
   f17 = json["d17"];//
   f18 = json["d18"];//
   f19 = json["d19"];//
   f20 = json["d20"];//
   f21 = json["d21"];//
   f22 = json["d22"];//
   f23 = json["d23"];//
   f24 = json["d24"];//
   f25 = json["d25"];//
   f26 = json["d26"];//
   f3 = ff3;//
   f4 = ff4;//
   f5 = ff5;//
} 

bool save7() {
  StaticJsonBuffer<800> jsonBuffer;
  JsonObject& json = jsonBuffer.createObject();
  json["d1"] = f1;// on 1/ off 0
  json["d2"] = f2;//  интервал между запросами
  json["d3"] = f3;// host 
  json["d4"] = f4;//httpPort  
  json["d5"] = f5;//
  json["d6"] = f6;//
  json["d7"] = f7;//
  json["d8"] = f8;//
  json["d9"] = f9;//
  json["d10"] = f10;//
  json["d11"] = f11;//
  json["d12"] = f12;//
  json["d13"] = f13;//
  json["d14"] = f14;//
  json["d15"] = f15;//
  json["d16"] = f16;//
  json["d17"] = f17;//
  json["d18"] = f18;//
  json["d19"] = f19;//
  json["d20"] = f20;//
  json["d21"] = f21;//
  json["d22"] = f22;//
  json["d23"] = f23;//
  json["d24"] = f24;//
  json["d25"] = f25;//
  json["d26"] = f26;//
  File htm7 = SPIFFS.open("/htm7.json", "w");
  if (!htm7) {   
    return false;
  }
  json.printTo(htm7);
  return true;
}

void htm7xml(){
String  url1="<?xml version='1.0'?>";
        url1+="<Donnees>"; 
        url1+="<q1>";
        url1+=f1;// 
        url1+="</q1>";
        url1+="<q2>";
        url1+=f2;// 
        url1+="</q2>";
        url1+="<q3>";
        url1+=f3;//
        url1+="</q3>";
        url1+="<q4>";
        url1+=f4;//
        url1+="</q4>";
        url1+="<q5>";
        url1+=f5;//
        url1+="</q5>";
        url1+="<q6>";
        url1+=f6;//
        url1+="</q6>";
        url1+="<q7>";
        url1+=f7;//
        url1+="</q7>";
        url1+="<q8>";
        url1+=f8;//
        url1+="</q8>";
        url1+="<q9>";
        url1+=f9;//
        url1+="</q9>";
        url1+="<q10>";
        url1+=f10;//
        url1+="</q10>";
        url1+="<q11>";
        url1+=f11;//
        url1+="</q11>";
        url1+="<q12>";
        url1+=f12;//
        url1+="</q12>";
        url1+="<q13>";
        url1+=f13;//
        url1+="</q13>";
        url1+="<q14>";
        url1+=f14;//
        url1+="</q14>";
        url1+="<q15>";
        url1+=f15;//
        url1+="</q15>";
        url1+="<q16>";
        url1+=f16;//
        url1+="</q16>";
        url1+="<q17>";
        url1+=f17;//
        url1+="</q17>";
        url1+="<q18>";
        url1+=f18;//
        url1+="</q18>";
        url1+="<q19>";
        url1+=f19;//
        url1+="</q19>"; 
        url1+="<q20>";
        url1+=f20;//
        url1+="</q20>";  
        url1+="<q21>";
        url1+=f21;//
        url1+="</q21>";  
        url1+="<q22>";
        url1+=f22;//
        url1+="</q22>"; 
        url1+="<q23>";
        url1+=f23;//
        url1+="</q23>"; 
        url1+="<q24>";
        url1+=f24;//
        url1+="</q24>"; 
        url1+="<q25>";
        url1+=f25;//
        url1+="</q25>"; 
        url1+="<q26>";
        url1+=f26;//
        url1+="</q26>"; 
        url1+="</Donnees>"; 
server.send(200,"text/xml",url1);
}         

void yt7(){
     t7=1;
}
void myserver() { 
 
   String   url=f5;
            url += "?id=";
            url+=ESP.getChipId(); 
            url+="&";  
        if (n1 == 1){   
            if (f6 == 1){ 
             bh1750test();    
             url+="bh1750";    
             url+= "=";  
             url+= lux;  
             url+="&";                 
             }
            }
        if (n2 == 1){       
            if (f7 == 1){   
             url+= "bmp_t";    
             url+= "=";  
             url+= bmp.readTemperature();  
             url+="&"; 
             url+= "bmp_mmhg";    
             url+= "=";  
             url+= bmp.readPressure()/ 133.3;   
             url+="&";                 
             }
            }
        if (n3 == 1){  
            if (f8 == 1){   
                dhttest();
             url+= "dht_t";    
             url+= "=";  
             url+= t;   
             url+="&";
             url+= "dht_h";   
             url+= "=";  
             url+= h;   
             url+="&";                 
             }
            }  
            if (f13 == 1){   
             url+= "vcc";     
             url+= "="; 
             float vcc1 = ESP.getVcc();
             String vcc ;  
             vcc += vcc1/1000,2;  
             url+= vcc;
             url+="&";                 
             } 
                
            if (f14 == 1){   
             url+=  "rssi";    
             url+= "=";  
             url+= WiFi.RSSI();
             url+="&";                 
             } 
             
           if (n4 == 1){  
            if (f9 == 1){
                ina219test();     
             url+= "ina219_v";    
             url+= "=";  
             url+= loadvoltage;  //ina219 v 
             url+="&";  
             url+= "ina219_ma";    
             url+= "=";  
             url+= current_mA;   //ina219 mA 
             url+="&";                 
             }
            }
             
             if (n5== 1){ 
            if (f10 == 1){// PZEM004T V  
                pzem004ttest();  
             url+= "pzem004_v";    
             url+= "=";  
             url+= v;   
             url+="&";                 
             // PZEM004T A   
             url+= "pzem004_a";  
             url+= "=";  
             url+= i;    
             url+="&";                 
             // PZEM004T W  
             url+="pzem004_w";
             url+= "=";  
             url+= p;    
             url+="&";                 
             // PZEM004T Wh   
             url+= "pzem004_wh";    
             url+= "=";  
             url+= e;    
             url+="&";                 
             }
            }
            
            if (n6== 1){
            if (f11 == 1){// 18b20  
              dstest();
             url+= "ds18b20_1";      
             url+= "=";  
             url+= temp;   
             url+="&";                 
             }  
            }  
            if (n7== 1){ 
            if (f12 == 1){// htu21  
                htu21test();  
             url+= "htu21_t";    
             url+= "=";  
             url+= htu21temp;   
             url+="&";   
             url+= "htu21_h";    
             url+= "=";  
             url+= htu21hum;   
             url+="&";                        
             }  
            }  
             if (n8== 1){ 
            if (f23 == 1){//   
             max6675test(); //max6675   
             url+= "max6675_t";    
             url+= "=";  
             url+= max6675_t;                
             url+="&";                        
             }  
            }  
///////////////////
            if (n9== 1){ 
            if (f24 == 1){//   
                ccS811_test();
             url+= "ccs811_co2";    
             url+= "=";  
             url+= ccs.geteCO2();                
             url+="&"; 
             url+= "ccs811_tvoc";    
             url+= "=";  
             url+= ccs.getTVOC();                
             url+="&";                           
             }  
            }  
            if (n10== 1){ 
            if (f25 == 1){// 
             url+= "hdc1080_t";    
             url+= "=";  
             url+= hdc1080.readTemperature();                
             url+="&"; 
             url+= "hdc1080_h";    
             url+= "=";  
             url+= hdc1080.readHumidity();                
             url+="&";                           
             }  
            }  
            if (n11== 1){ 
            if (f26 == 1){// 
                bme280test();
             url+= "bme280_mmhg";    
             url+= "=";  
             url+= bme280_pres;                
             url+="&"; 
             url+= "bme280_t";    
             url+= "=";  
             url+= bme280_temp;                
             url+="&";      
             url+= "bme280_h";    
             url+= "=";  
             url+= bme280_hum;                
             url+="&";                           
             }  
            }  
            //////////////////
            if (f15== 1){
            url+= "nrf_1_1";    
            url+= "=";  
            url+= vr0_1;   
            url+= "&";   
            url+= "nrf_1_2";    
            url+= "=";  
            url+= vr0_2;   
            url+= "&"; 
            url+= "nrf_1_3";    
            url+= "=";  
            url+= vr0_3;   
            url+= "&"; 
            url+= "nrf_1_4";    
            url+= "=";  
            url+= vr0_4;   
            url+= "&"; 
            url+= "nrf_1_5";    
            url+= "=";  
            url+= vr0_5;   
            url+= "&"; 
            url+= "nrf_1_6";    
            url+= "=";  
            url+= vr0_6;   
            url+= "&";
            url+= "nrf_1_7";    
            url+= "=";  
            url+= vr0_7;   
            url+= "&";  
            url+= "nrf_1_8";    
            url+= "=";  
            url+= vr0_8;   
            url+= "&";
            }     
            if (f16== 1){
            url+= "nrf_2_1";    
            url+= "=";  
            url+= vr1_1;   
            url+= "&";   
            url+= "nrf_2_2";    
            url+= "=";  
            url+= vr1_2;   
            url+= "&"; 
            url+= "nrf_2_3";    
            url+= "=";  
            url+= vr1_3;   
            url+= "&"; 
            url+= "nrf_2_4";    
            url+= "=";  
            url+= vr1_4;   
            url+= "&"; 
            url+= "nrf_2_5";    
            url+= "=";  
            url+= vr1_5;   
            url+= "&"; 
            url+= "nrf_2_6";    
            url+= "=";  
            url+= vr1_6;   
            url+= "&";
            url+= "nrf_2_7";    
            url+= "=";  
            url+= vr1_7;   
            url+= "&";  
            url+= "nrf_2_8";    
            url+= "=";  
            url+= vr1_8;   
            url+= "&";
            }   
            if (f17== 1){
            url+= "nrf_3_1";    
            url+= "=";  
            url+= vr2_1;   
            url+= "&";   
            url+= "nrf_3_2";    
            url+= "=";  
            url+= vr2_2;   
            url+= "&"; 
            url+= "nrf_3_3";    
            url+= "=";  
            url+= vr2_3;   
            url+= "&"; 
            url+= "nrf_3_4";    
            url+= "=";  
            url+= vr2_4;   
            url+= "&"; 
            url+= "nrf_3_5";    
            url+= "=";  
            url+= vr2_5;   
            url+= "&"; 
            url+= "nrf_3_6";    
            url+= "=";  
            url+= vr2_6;   
            url+= "&";
            url+= "nrf_3_7";    
            url+= "=";  
            url+= vr2_7;   
            url+= "&";  
            url+= "nrf_3_8";    
            url+= "=";  
            url+= vr2_8;   
            url+= "&";
            }   
            if (f18== 1){
            url+= "nrf_4_1";    
            url+= "=";  
            url+= vr3_1;   
            url+= "&";   
            url+= "nrf_4_2";    
            url+= "=";  
            url+= vr3_2;   
            url+= "&"; 
            url+= "nrf_4_3";    
            url+= "=";  
            url+= vr3_3;   
            url+= "&"; 
            url+= "nrf_4_4";    
            url+= "=";  
            url+= vr3_4;   
            url+= "&"; 
            url+= "nrf_4_5";    
            url+= "=";  
            url+= vr3_5;   
            url+= "&"; 
            url+= "nrf_4_6";    
            url+= "=";  
            url+= vr3_6;   
            url+= "&";
            url+= "nrf_4_7";    
            url+= "=";  
            url+= vr3_7;   
            url+= "&";  
            url+= "nrf_4_8";    
            url+= "=";  
            url+= vr3_8;   
            url+= "&";
            }   
            if (f19== 1){
            url+= "nrf_5_1";    
            url+= "=";  
            url+= vr4_1;   
            url+= "&";   
            url+= "nrf_5_2";    
            url+= "=";  
            url+= vr4_2;   
            url+= "&"; 
            url+= "nrf_5_3";    
            url+= "=";  
            url+= vr4_3;   
            url+= "&"; 
            url+= "nrf_5_4";    
            url+= "=";  
            url+= vr4_4;   
            url+= "&"; 
            url+= "nrf_5_5";    
            url+= "=";  
            url+= vr4_5;   
            url+= "&"; 
            url+= "nrf_5_6";    
            url+= "=";  
            url+= vr4_6;   
            url+= "&";
            url+= "nrf_5_7";    
            url+= "=";  
            url+= vr4_7;   
            url+= "&";  
            url+= "nrf_5_8";    
            url+= "=";  
            url+= vr4_8;   
            url+= "&";
            }  
            if (f20== 1){
            url+= "nrf_6_1";    
            url+= "=";  
            url+= vr5_1;   
            url+= "&";   
            url+= "nrf_6_2";    
            url+= "=";  
            url+= vr5_2;   
            url+= "&"; 
            url+= "nrf_6_3";    
            url+= "=";  
            url+= vr5_3;   
            url+= "&"; 
            url+= "nrf_6_4";    
            url+= "=";  
            url+= vr5_4;   
            url+= "&"; 
            url+= "nrf_6_5";    
            url+= "=";  
            url+= vr5_5;   
            url+= "&"; 
            url+= "nrf_6_6";    
            url+= "=";  
            url+= vr5_6;   
            url+= "&";
            url+= "nrf_6_7";    
            url+= "=";  
            url+= vr5_7;   
            url+= "&";  
            url+= "nrf_6_8";    
            url+= "=";  
            url+= vr5_8;   
            url+= "&";
            }        
            if (f21 == 1){ 
            adc48test(); 
            url+= "adc48_a0";    
            url+= "=";  
            url+= adc48a0;   
            url+= "&";   
            url+= "adc48_a2";    
            url+= "=";  
            url+= adc48a1;   
            url+= "&"; 
            url+= "adc48_a3";    
            url+= "=";  
            url+= adc48a2;   
            url+= "&"; 
            url+= "adc48_a4";    
            url+= "=";  
            url+= adc48a3;   
            url+= "&";
            }   
            if (f22 == 1){ 
            adc49test(); 
            url+= "adc49_a0";    
            url+= "=";  
            url+= adc49a0;   
            url+= "&";   
            url+= "adc49_a2";    
            url+= "=";  
            url+= adc49a1;   
            url+= "&"; 
            url+= "adc49_a3";    
            url+= "=";  
            url+= adc49a2;   
            url+= "&"; 
            url+= "adc49_a4";    
            url+= "=";  
            url+= adc49a3;   
            url+= "&";
            }
            WiFiClient client;
            char **pointer, *stringVar;
            unsigned long myhttpport;
            myhttpport = strtoul(f4.c_str(),pointer,10);    
            if (client.connect(f3.c_str(),myhttpport)) {
               client.print(String("GET ") + url + " HTTP/1.1\r\n" +
                            "Host: " + f3 + "\r\n" + 
                            "Connection: close\r\n\r\n");  
              }   
               client.stop();
             Serial.println("myserver");
}
