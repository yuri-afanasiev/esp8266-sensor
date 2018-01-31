void api5() {//настройка thingspeak on 1/ off 0    
     b1 = server.arg("b1").toInt();// on 1/ off 0  
     b2 = server.arg("b2").toInt();// интервал запроса 
     b3 = server.arg("b3").toInt(); // channelID   
     b4 = server.arg("b4");// writeAPIKey 
     b5 = server.arg("b5"); // field1  
     b6 = server.arg("b6"); // field2 
     b7 = server.arg("b7"); // field3
     b8 = server.arg("b8"); // field4
     b9 = server.arg("b9"); // field5
     b10 = server.arg("b10"); // field6
     b11 = server.arg("b11");// field7
     b12 = server.arg("b12");// field8//
     b13 = server.arg("b13").toInt(); // lux BH1750
     b14 = server.arg("b14").toInt(); // bmp180 Temperature
     b15 = server.arg("b15").toInt(); // mmHg
     b16 = server.arg("b16").toInt(); // dht Temperature
     b17 = server.arg("b17").toInt(); // dht Humidity
     b18 = server.arg("b18").toInt(); // vcc 
     b19 = server.arg("b19").toInt(); // WiFi.RSSI
     //////////////////////////////////////////////////
     b20 = server.arg("b20").toInt(); //ina219 v
     b21 = server.arg("b21").toInt(); //ina219 mA
     b22 = server.arg("b22").toInt(); //PZEM004T V 
     b23 = server.arg("b23").toInt(); //PZEM004T A 
     b24 = server.arg("b24").toInt(); //PZEM004T W 
     b25 = server.arg("b25").toInt(); //PZEM004T Wh      
     b26 = server.arg("b26");// field8
     b27 = server.arg("b27");// field9
     b28 = server.arg("b28");// field10
     b29 = server.arg("b29");// field11
     b30 = server.arg("b30");// field12
     b31 = server.arg("b31");// field13
     b32 = server.arg("b32").toInt(); // 18b20 
     b33 = server.arg("b33");// field14     

 
     b34 = server.arg("b34").toInt();// nrf #1 on/off   
     b35 = server.arg("b35");// writeAPIKey  nrf #1

     b36 = server.arg("b36").toInt();// nrf #2 on/off   
     b37 = server.arg("b37");// writeAPIKey  nrf #2

     b38 = server.arg("b38").toInt();// nrf #3 on/off   
     b39 = server.arg("b39");// writeAPIKey  nrf #3

     b40 = server.arg("b40").toInt();// nrf #4 on/off   
     b41 = server.arg("b41");// writeAPIKey  nrf #4

     b42 = server.arg("b42").toInt();// nrf #5 on/off   
     b43 = server.arg("b43");// writeAPIKey  nrf #5

     b44 = server.arg("b44").toInt();// nrf #6 on/off   
     b45 = server.arg("b45");// writeAPIKey  nrf #6

     b46 = server.arg("b46").toInt(); //HTU21 t  
     b47 = server.arg("b47"); //writeAPIKey 

     b48 = server.arg("b48").toInt(); //HTU21 h 
     b49 = server.arg("b49"); //writeAPIKey 

     b50 = server.arg("b50").toInt(); // ADS1115 48
     b51 = server.arg("b51"); //writeAPIKey 

     b52 = server.arg("b52").toInt(); // ADS1115 49
     b53 = server.arg("b53"); //writeAPIKey 

     b54 = server.arg("b54").toInt(); // max6675
     b55 = server.arg("b55"); //writeAPIKey 

     b56 = server.arg("b56").toInt(); //CCS811 CO2  
     b57 = server.arg("b56");//writeAPIKey 

     b58 = server.arg("b58").toInt(); //CCS811  voc  
     b59 = server.arg("b59");//writeAPIKey 

     b60 = server.arg("b60").toInt(); //HDC1080 Температура  
     b61 = server.arg("b61");//writeAPIKey 

     b62 = server.arg("b62").toInt(); //HDC1080 Влажность 
     b63 = server.arg("b63");//writeAPIKey 

     b64 = server.arg("b64").toInt(); //BME280 Давление 
     b65 = server.arg("b65");//writeAPIKey 

     b66 = server.arg("b66").toInt(); //BME280 Температура 
     b67 = server.arg("b67");//writeAPIKey 

     b68 = server.arg("b68").toInt(); //BME280 Влажность 
     b69 = server.arg("b69");//writeAPIKey 
     
     save5();//  запись в память модуля
     server.send(200, "text/plain", "OK");
}
void openfilehtm5() {
  File htm5 = SPIFFS.open("/htm5.json", "r");
  size_t size = htm5.size();
  std::unique_ptr<char[]> buf(new char[size]);
  htm5.readBytes(buf.get(), size);
  StaticJsonBuffer<999> jsonBuffer;
  JsonObject& json = jsonBuffer.parseObject(buf.get());
   b1 = json["d1"];// on 1/ off 0
   b2 = json["d2"];// интервал запроса
   b3 = json["d3"];// channelID  
  String bb4 = json["d4"];//writeAPIKey 
  String bb5 = json["d5"];// field1
  String bb6 = json["d6"];// field2
  String bb7 = json["d7"];// field3
  String bb8 = json["d8"];// field4
  String bb9 = json["d9"];// field5
  String bb10 = json["d10"];// field6
  String bb11 = json["d11"];// field7
  String bb12 = json["d12"];// field8 //     
   b13 = json["d13"];// lux BH1750  
   b14 = json["d14"];// bmp180 Temperature 
   b15 = json["d15"];// mmHg 
   b16 = json["d16"];// dht Temperature  
   b17 = json["d17"];// dht Humidity 
   b18 = json["d18"];// vcc  
   b19 = json["d19"];// WiFi.RSSI 
   ///////////////////////////////// 
   b20 = json["d20"];//ina219 v 
   b21 = json["d21"];//ina219 mA  
   b22 = json["d22"];//PZEM004T V
   b23 = json["d23"];//PZEM004T A  
   b24 = json["d24"];//PZEM004T W 
   b25 = json["d25"];//PZEM004T Wh 
   String bb26 = json["d26"];// field8  
   String bb27 = json["d27"];// field9
   String bb28 = json["d28"];// field10
   String bb29 = json["d29"];// field11
   String bb30 = json["d30"];// field12   
   String bb31 = json["d31"];// field13
           b32 = json["d32"];// 18b20    
   String bb33 = json["d33"];// field14   


          b34 = json["d34"];// nrf #1 on/off 
   String bb35 = json["d35"];//writeAPIKey  nrf #1
          b36 = json["d36"];// nrf #2 on/off 
   String bb37 = json["d37"];//writeAPIKey  nrf #2
          b38 = json["d38"];// nrf #3 on/off 
   String bb39 = json["d39"];//writeAPIKey  nrf #3 
          b40 = json["d40"];// nrf #4 on/off 
   String bb41 = json["d41"];//writeAPIKey  nrf #4 
          b42 = json["d42"];// nrf #5 on/off 
   String bb43 = json["d43"];//writeAPIKey  nrf #5 
          b44 = json["d44"];// nrf #6 on/off 
   String bb45 = json["d45"];//writeAPIKey  nrf #6   

          b46 = json["d46"];//HTU21 t  
   String bb47 = json["d47"];//writeAPIKey   

          b48 = json["d48"];//HTU21 h
   String bb49 = json["d49"];//writeAPIKey  

          b50 = json["d50"];// ADS1115 48
   String bb51 = json["d51"];//writeAPIKey  

          b52 = json["d52"];// ADS1115 49
   String bb53 = json["d53"];//writeAPIKey  

          b54 = json["d54"];// max6675 
   String bb55 = json["d55"];//writeAPIKey  

          b56 = json["d56"];//CCS811 CO2  
   String bb57 = json["d57"];//writeAPIKey  
           b58 = json["d58"];//CCS811 VOC 
   String bb59 = json["d59"];//writeAPIKey  

           b60 = json["d60"];//HDC1080 Температура   
   String bb61 = json["d61"];//writeAPIKey  
          b62 = json["d62"];//HDC1080 Влажность  
   String bb63 = json["d63"];//writeAPIKey  

          b64 = json["d64"];// BME280 Давление
   String bb65 = json["d65"];//writeAPIKey  
          b66 = json["d66"];// BME280 Температура
   String bb67 = json["d67"];//writeAPIKey  
          b68 = json["d68"];// BME280 Влажность
   String bb69 = json["d69"];//writeAPIKey  
   
  b4=bb4;
  b5=bb5;
  b6=bb6;
  b7=bb7;
  b8=bb8;
  b9=bb9;
  b10=bb10;
  b11=bb11;
  b12=bb12;
  b26=bb26;
  b27=bb27;
  b28=bb28;
  b29=bb29;
  b30=bb30;
  b31=bb31;
  b33=bb33;  
  b35=bb35;  
  b37=bb37; 
  b39=bb39; 
  b41=bb41; 
  b43=bb43; 
  b45=bb45; 
  b47=bb47;
  b49=bb49;
  b51=bb51; 
  b53=bb53;
  b55=bb55;
  b57=bb57;
  b59=bb59;
  b61=bb61;
  b63=bb63;
  b65=bb65;
  b67=bb67;
  b69=bb69;
} 
bool save5() {
  StaticJsonBuffer<999> jsonBuffer;
  JsonObject& json = jsonBuffer.createObject();
  json["d1"] = b1;// on 1/ off 0
  json["d2"] = b2;// интервал запроса
  json["d3"] = b3;// channelID 
  json["d4"] = b4;//writeAPIKey 
  json["d5"] = b5;//field1
  json["d6"] = b6;//field2
  json["d7"] = b7;//field3
  json["d8"] = b8;//field4
  json["d9"] = b9;//field5
  json["d10"] = b10;//field6
  json["d11"] = b11;//field7
  json["d12"] = b12;//field8
  json["d13"] = b13;//lux BH1750 
  json["d14"] = b14;//bmp180 Temperature 
  json["d15"] = b15;//mmHg
  json["d16"] = b16;//dht Temperature
  json["d17"] = b17;//dht Humidity
  json["d18"] = b18;//vcc 
  json["d19"] = b19;//WiFi.RSSI
  json["d20"] = b20;//ina219 v
  json["d21"] = b21;//ina219 mA
  json["d22"] = b22;//PZEM004T V
  json["d23"] = b23;//PZEM004T A
  json["d24"] = b24;//PZEM004T W
  json["d25"] = b25;//PZEM004T Wh
  json["d26"] = b26;//
  json["d27"] = b27;//
  json["d28"] = b28;//
  json["d29"] = b29;//
  json["d30"] = b30;//
  json["d31"] = b31;//
  json["d32"] = b32;//18b20
  json["d33"] = b33;//field14 
  json["d34"] = b34;// nrf #1 on/off 
  json["d35"] = b35;//writeAPIKey  nrf #1
  json["d36"] = b36;// nrf #2 on/off 
  json["d37"] = b37;//writeAPIKey  nrf #2
  json["d38"] = b38;// nrf #3 on/off 
  json["d39"] = b39;//writeAPIKey  nrf #3
  json["d40"] = b40;// nrf #4 on/off 
  json["d41"] = b41;//writeAPIKey  nrf #4
  json["d42"] = b42;// nrf #5 on/off 
  json["d43"] = b43;//writeAPIKey  nrf #5
  json["d44"] = b44;// nrf #6 on/off 
  json["d45"] = b45;//writeAPIKey  nrf #6 
  json["d46"] = b46;//HTU21 t
  json["d47"] = b47;//writeAPIKey  
  json["d48"] = b48;//HTU21 h
  json["d49"] = b49;//writeAPIKey 
  json["d50"] = b50;//ADS1115 48
  json["d51"] = b51;//writeAPIKey 
  json["d52"] = b52;//ADS1115 49
  json["d53"] = b53;//writeAPIKey 
  json["d54"] = b54;//max6675 
  json["d55"] = b55;//writeAPIKey
  json["d56"] = b56;//  
  json["d57"] = b57;//writeAPIKey
  json["d58"] = b58;//  
  json["d59"] = b59;//writeAPIKey
  json["d60"] = b60;//  
  json["d61"] = b61;//writeAPIKey
  json["d62"] = b62;//  
  json["d63"] = b63;//writeAPIKey
  json["d64"] = b64;//  
  json["d65"] = b65;//writeAPIKey
  json["d66"] = b66;//  
  json["d67"] = b67;//writeAPIKey
  json["d68"] = b68;//  
  json["d69"] = b69;//writeAPIKey
  
  File htm5 = SPIFFS.open("/htm5.json", "w");
  if (!htm5) {   
    return false;
  }
  json.printTo(htm5);
  return true;
}
void htm5xml(){
String  url1="<?xml version='1.0'?>";
        url1+="<Donnees>"; 
        url1+="<q1>";
        url1+=b1;// 
        url1+="</q1>";
        url1+="<q2>";
        url1+=b2;// 
        url1+="</q2>";
        url1+="<q3>";
        url1+=b3;//
        url1+="</q3>";
        url1+="<q4>";
        url1+=b4;//
        url1+="</q4>";
        url1+="<q5>";
        url1+=b5;//
        url1+="</q5>";
        url1+="<q6>";
        url1+=b6;//
        url1+="</q6>";
        url1+="<q7>";
        url1+=b7;//
        url1+="</q7>";
        url1+="<q8>";
        url1+=b8;//
        url1+="</q8>";
        url1+="<q9>";
        url1+=b9;//
        url1+="</q9>";
        url1+="<q10>";
        url1+=b10;//
        url1+="</q10>";
        url1+="<q11>";
        url1+=b11;//
        url1+="</q11>";
         //url1+="<q12>";
        // url1+=b12;//
       // url1+="</q12>";
        url1+="<q13>";
        url1+=b13;//
        url1+="</q13>";
        url1+="<q14>";
        url1+=b14;//
        url1+="</q14>";
        url1+="<q15>";
        url1+=b15;//
        url1+="</q15>";
        url1+="<q16>";
        url1+=b16;//
        url1+="</q16>";
        url1+="<q17>";
        url1+=b17;//
        url1+="</q17>";
        url1+="<q18>";
        url1+=b18;//
        url1+="</q18>";
        url1+="<q19>";
        url1+=b19;//
        url1+="</q19>"; 
        url1+="<q20>";
        url1+=b20;//
        url1+="</q20>";       
        url1+="<q21>";
        url1+=b21;//
        url1+="</q21>"; 
        url1+="<q22>";
        url1+=b22;//
        url1+="</q22>";
        url1+="<q23>";
        url1+=b23;//
        url1+="</q23>"; 
        url1+="<q24>";
        url1+=b24;//
        url1+="</q24>"; 
        url1+="<q25>";
        url1+=b25;//
        url1+="</q25>";  
        url1+="<q26>";
        url1+=b26;//
        url1+="</q26>"; 
        url1+="<q27>";
        url1+=b27;//
        url1+="</q27>"; 
        url1+="<q28>";
        url1+=b28;//
        url1+="</q28>";   
        url1+="<q29>";
        url1+=b29;//
        url1+="</q29>";
        url1+="<q30>";
        url1+=b30;//
        url1+="</q30>";  
        url1+="<q31>";
        url1+=b31;//
        url1+="</q31>"; 
        url1+="<q32>";
        url1+=b32;//
        url1+="</q32>"; 
        url1+="<q33>";
        url1+=b33;//
        url1+="</q33>";   

        url1+="<q34>";
        url1+=b34;//
        url1+="</q34>";   
        url1+="<q35>";
        url1+=b35;//
        url1+="</q35>";
        url1+="<q36>";
        url1+=b36;//
        url1+="</q36>";  
        url1+="<q37>";
        url1+=b37;//
        url1+="</q37>";
        url1+="<q38>";
        url1+=b38;//
        url1+="</q38>"; 
        url1+="<q39>";
        url1+=b39;//
        url1+="</q39>"; 
        url1+="<q40>";
        url1+=b40;//
        url1+="</q40>";  
        url1+="<q41>";
        url1+=b41;//
        url1+="</q41>";
        url1+="<q42>";
        url1+=b42;//
        url1+="</q42>";   
        url1+="<q43>";
        url1+=b43;//
        url1+="</q43>";   
        url1+="<q44>";
        url1+=b44;//
        url1+="</q44>";   
        url1+="<q45>";
        url1+=b45;//
        url1+="</q45>";    
        url1+="<q46>";
        url1+=b46;//
        url1+="</q46>"; 
        url1+="<q47>";
        url1+=b47;//
        url1+="</q47>";        
        url1+="<q48>";
        url1+=b48;//
        url1+="</q48>";  
        url1+="<q49>";
        url1+=b49;//
        url1+="</q49>";   
        url1+="<q50>";
        url1+=b50;//
        url1+="</q50>";
        url1+="<q51>";
        url1+=b51;//
        url1+="</q51>";    
        url1+="<q52>";
        url1+=b52;//
        url1+="</q52>";
        url1+="<q53>";
        url1+=b53;//
        url1+="</q53>";    
        url1+="<q54>";
        url1+=b54;//
        url1+="</q54>";    
        url1+="<q55>";
        url1+=b55;//
        url1+="</q55>";  
        url1+="<q56>";
        url1+=b56;//
        url1+="</q56>";  
        url1+="<q57>";
        url1+=b57;//
        url1+="</q57>"; 
        url1+="<q58>";
        url1+=b58;//
        url1+="</q58>";  
        url1+="<q59>";
        url1+=b59;//
        url1+="</q59>"; 
        url1+="<q60>";
        url1+=b60;//
        url1+="</q60>";  
        url1+="<q61>";
        url1+=b61;//
        url1+="</q61>";  
        url1+="<q62>";
        url1+=b62;//
        url1+="</q62>";  
        url1+="<q63>";
        url1+=b63;//
        url1+="</q63>";  
        url1+="<q64>";
        url1+=b64;//
        url1+="</q64>"; 
        url1+="<q65>";
        url1+=b65;//
        url1+="</q65>"; 
        url1+="<q66>";
        url1+=b66;//
        url1+="</q66>"; 
        url1+="<q67>";
        url1+=b67;//
        url1+="</q67>"; 
        url1+="<q68>";
        url1+=b68;//
        url1+="</q68>";
        url1+="<q69>";
        url1+=b69;//
        url1+="</q69>";  
        url1+="</Donnees>"; 
server.send(200,"text/xml",url1);
}         
void yt5(){
  t5=1;
}
void thingspeak() { 
   if (n3 == 1){   
      dhttest();                     
      } 
    String  url="/update?api_key=";
            url+=b4; 
            url+="&";  
        if (n1 == 1){   
            if (b13 == 1){ 
             bh1750test();        
             url+=  b5;    
             url+= "=";  
             url+= lux;  
             url+="&";                 
             }
            }
        if (n2 == 1){       
            if (b14 == 1){   
             url+=  b6;    
             url+= "=";  
             url+= bmp.readTemperature();  
             url+="&";                 
             } 
             if (b15 == 1){   
             url+=  b7;    
             url+= "=";  
             url+= bmp.readPressure()/ 133.3;   
             url+="&";                 
             }
            }
        if (n3 == 1){        
            if (b16 == 1){   
             url+=  b8;    
             url+= "=";  
             url+= t;   
             url+="&";                 
             }   
             if (b17 == 1){   
             url+=  b9;    
             url+= "=";  
             url+= h;   
             url+="&";                 
             }
            }
               
            if (b18 == 1){   
             url+=  b10;    
             url+= "="; 
             float vcc1 = ESP.getVcc();
             String vcc ;  
             vcc += vcc1/1000,2;  
             url+= vcc;
             url+="&";                 
             } 
                
            if (b19 == 1){   
             url+=  b11;    
             url+= "=";  
             url+= WiFi.RSSI();
             url+="&";                 
             }  

              if (n4 == 1){ 
              ina219test();        
            if (b20 == 1){   
             url+=  b26;    
             url+= "=";  
             url+= loadvoltage;   
             url+="&";                 
             }   
             if (b21 == 1){   
             url+=  b27;    
             url+= "=";  
             url+= current_mA;   
             url+="&";                 
             }
            }
           if (n5 == 1){ 
            pzem004ttest();      
            if (b22 == 1){   //PZEM004T V
             url+=  b28;    
             url+= "=";  
             url+= v;   
             url+="&";                 
             }   
             if (b23 == 1){//PZEM004T A
             url+=  b29;    
             url+= "=";  
             url+= i;   
             url+="&";                 
             }
              if (b24 == 1){//PZEM004T W  
             url+=  b30;    
             url+= "=";  
             url+= p;   
             url+="&";                 
             }
              if (b25 == 1){//PZEM004T Wh  
             url+=  b31;    
             url+= "=";  
             url+= e;   
             url+="&";                 
             }
            }
          if (n6 == 1){ 
            dstest();      
            if (b32 == 1){   //PZEM004T V
             url+= b33;    
             url+= "=";   
             url+= temp;   
             url+="&";                 
             }   
           }
          if (n7 == 1){ 
            htu21test();      
            if (b46 == 1){   // 
             url+= b47;    
             url+= "=";   
             url+= htu21temp;   
             url+="&";                 
             } 
         if (b48 == 1){   // 
             url+= b49;    
             url+= "=";   
             url+= htu21hum;   
             url+="&";                 
             } 
         if (b54 == 1){   // 
             max6675test(); 
             url+= b55;    
             url+= "=";   
             url+= max6675_t;   
             url+="&";                 
             }   
             //
             if (n9 == 1){ 
                 ccS811_test();
                 if (b56 == 1){   // 
                     url+= b57;    
                     url+= "=";   
                     url+= ccs.geteCO2();   
                     url+="&";                 
                    }  
                    if (b58 == 1){   // 
                     url+= b59;    
                     url+= "=";   
                     url+= ccs.getTVOC();   
                     url+="&";                 
                    }  
                }
                 if (n10 == 1){ 
                 if (b60 == 1){   // 
                     url+= b61;    
                     url+= "=";   
                     url+= hdc1080.readTemperature();   
                     url+="&";                 
                    }  
                    if (b62 == 1){   // 
                     url+= b63;    
                     url+= "=";   
                     url+= hdc1080.readHumidity();   
                     url+="&";                 
                    }  
                }
                 if (n11 == 1){ 
                     bme280test();
                 if (b64 == 1){   // 
                     url+= b65;    
                     url+= "=";   
                     url+= bme280_pres;   
                     url+="&";                 
                    }  
                    if (b66 == 1){   // 
                     url+= b67;    
                     url+= "=";   
                     url+= bme280_temp;   
                     url+="&";                 
                    }  
                    if (b68 == 1){   // 
                     url+= b68;    
                     url+= "=";   
                     url+= bme280_hum;   
                     url+="&";                 
                    }  
                }               
           }
           
        WiFiClient client;
    if (client.connect(thingspeakserver,httpPort)) {
       client.print(String("GET ") + url + " HTTP/1.1\r\n" +
                "Host: " + thingspeakserver + "\r\n" + 
                "Connection: close\r\n\r\n");  
                }  
    if (b34 == 1){ 
    String  test="/update?api_key=";
            test+= b35; 
            test+= "&";  
            test+= "field1";    
            test+= "=";  
            test+= vr0_1;   
            test+= "&";   
            test+= "field2";    
            test+= "=";  
            test+= vr0_2;   
            test+= "&"; 
            test+= "field3";    
            test+= "=";  
            test+= vr0_3;   
            test+= "&"; 
            test+= "field4";    
            test+= "=";  
            test+= vr0_4;   
            test+= "&"; 
            test+= "field5";    
            test+= "=";  
            test+= vr0_5;   
            test+= "&"; 
            test+= "field6";    
            test+= "=";  
            test+= vr0_6;   
            test+= "&";
            test+= "field7";    
            test+= "=";  
            test+= vr0_7;   
            test+= "&";  
            test+= "field8";    
            test+= "=";  
            test+= vr0_8;  
    if (client.connect(thingspeakserver,httpPort)) {
    client.print(String("GET ") + test + " HTTP/1.1\r\n" +
                "Host: " + thingspeakserver + "\r\n" + 
                "Connection: close\r\n\r\n");  
                }  
              }
    if (b36 == 1){ 
    String  test1="/update?api_key=";
            test1+= b37; 
            test1+= "&";  
            test1+= "field1";    
            test1+= "=";  
            test1+= vr1_1;   
            test1+= "&";   
            test1+= "field2";    
            test1+= "=";  
            test1+= vr1_2;   
            test1+= "&"; 
            test1+= "field3";    
            test1+= "=";  
            test1+= vr1_3;   
            test1+= "&"; 
            test1+= "field4";    
            test1+= "=";  
            test1+= vr1_4;   
            test1+= "&"; 
            test1+= "field5";    
            test1+= "=";  
            test1+= vr1_5;   
            test1+= "&"; 
            test1+= "field6";    
            test1+= "=";  
            test1+= vr1_6;   
            test1+= "&";
            test1+= "field7";    
            test1+= "=";  
            test1+= vr1_7;   
            test1+= "&";  
            test1+= "field8";    
            test1+= "=";  
            test1+= vr1_8;  
    if (client.connect(thingspeakserver,httpPort)) {
    client.print(String("GET ") + test1 + " HTTP/1.1\r\n" +
                "Host: " + thingspeakserver + "\r\n" + 
                "Connection: close\r\n\r\n");  
                }  
              }
    if (b38 == 1){ 
    String  test2="/update?api_key=";
            test2+= b39; 
            test2+= "&";  
            test2+= "field1";    
            test2+= "=";  
            test2+= vr2_1;   
            test2+= "&";   
            test2+= "field2";    
            test2+= "=";  
            test2+= vr2_2;   
            test2+= "&"; 
            test2+= "field3";    
            test2+= "=";  
            test2+= vr2_3;   
            test2+= "&"; 
            test2+= "field4";    
            test2+= "=";  
            test2+= vr2_4;   
            test2+= "&"; 
            test2+= "field5";    
            test2+= "=";  
            test2+= vr2_5;   
            test2+= "&"; 
            test2+= "field6";    
            test2+= "=";  
            test2+= vr2_6;   
            test2+= "&";
            test2+= "field7";    
            test2+= "=";  
            test2+= vr2_7;   
            test2+= "&";  
            test2+= "field8";    
            test2+= "=";  
            test2+= vr2_8;  
    if (client.connect(thingspeakserver,httpPort)) {
    client.print(String("GET ") + test2 + " HTTP/1.1\r\n" +
                "Host: " + thingspeakserver + "\r\n" + 
                "Connection: close\r\n\r\n");  
                }  
              }
    if (b40 == 1){ 
    String  test3="/update?api_key=";
            test3+= b41; 
            test3+= "&";  
            test3+= "field1";    
            test3+= "=";  
            test3+= vr3_1;   
            test3+= "&";   
            test3+= "field2";    
            test3+= "=";  
            test3+= vr3_2;   
            test3+= "&"; 
            test3+= "field3";    
            test3+= "=";  
            test3+= vr3_3;   
            test3+= "&"; 
            test3+= "field4";    
            test3+= "=";  
            test3+= vr3_4;   
            test3+= "&"; 
            test3+= "field5";    
            test3+= "=";  
            test3+= vr3_5;   
            test3+= "&"; 
            test3+= "field6";    
            test3+= "=";  
            test3+= vr3_6;   
            test3+= "&";
            test3+= "field7";    
            test3+= "=";  
            test3+= vr3_7;   
            test3+= "&";  
            test3+= "field8";    
            test3+= "=";  
            test3+= vr3_8;  
    if (client.connect(thingspeakserver,httpPort)) {
    client.print(String("GET ") + test3 + " HTTP/1.1\r\n" +
                "Host: " + thingspeakserver + "\r\n" + 
                "Connection: close\r\n\r\n");  
                }  
              }
            
    if (b42 == 1){ 
    String  test4="/update?api_key=";
            test4+= b43; 
            test4+= "&";  
            test4+= "field1";    
            test4+= "=";  
            test4+= vr4_1;   
            test4+= "&";   
            test4+= "field2";    
            test4+= "=";  
            test4+= vr4_2;   
            test4+= "&"; 
            test4+= "field3";    
            test4+= "=";  
            test4+= vr4_3;   
            test4+= "&"; 
            test4+= "field4";    
            test4+= "=";  
            test4+= vr4_4;   
            test4+= "&"; 
            test4+= "field5";    
            test4+= "=";  
            test4+= vr4_5;   
            test4+= "&"; 
            test4+= "field6";    
            test4+= "=";  
            test4+= vr4_6;   
            test4+= "&";
            test4+= "field7";    
            test4+= "=";  
            test4+= vr4_7;   
            test4+= "&";  
            test4+= "field8";    
            test4+= "=";  
            test4+= vr4_8;  
    if (client.connect(thingspeakserver,httpPort)) {
    client.print(String("GET ") + test4 + " HTTP/1.1\r\n" +
                "Host: " + thingspeakserver + "\r\n" + 
                "Connection: close\r\n\r\n");  
                }  
              }

    if (b44 == 1){ 
    String  test5="/update?api_key=";
            test5+= b45; 
            test5+= "&";  
            test5+= "field1";    
            test5+= "=";  
            test5+= vr5_1;   
            test5+= "&";   
            test5+= "field2";    
            test5+= "=";  
            test5+= vr5_2;   
            test5+= "&"; 
            test5+= "field3";    
            test5+= "=";  
            test5+= vr5_3;   
            test5+= "&"; 
            test5+= "field4";    
            test5+= "=";  
            test5+= vr5_4;   
            test5+= "&"; 
            test5+= "field5";    
            test5+= "=";  
            test5+= vr5_5;   
            test5+= "&"; 
            test5+= "field6";    
            test5+= "=";  
            test5+= vr5_6;   
            test5+= "&";
            test5+= "field7";    
            test5+= "=";  
            test5+= vr5_7;   
            test5+= "&";  
            test5+= "field8";    
            test5+= "=";  
            test5+= vr5_8;  
    if (client.connect(thingspeakserver,httpPort)) {
    client.print(String("GET ") + test5 + " HTTP/1.1\r\n" +
                "Host: " + thingspeakserver + "\r\n" + 
                "Connection: close\r\n\r\n");  
                }  
              } 
               if (b50 == 1){ 
    adc48test(); 
    String  test6="/update?api_key=";
            test6+= b51; 
            test6+= "&";  
            test6+= "field1";    
            test6+= "=";  
            test6+= adc48a0;   
            test6+= "&";   
            test6+= "field2";    
            test6+= "=";  
            test6+= adc48a1;   
            test6+= "&"; 
            test6+= "field3";    
            test6+= "=";  
            test6+= adc48a2;   
            test6+= "&"; 
            test6+= "field4";    
            test6+= "=";  
            test6+= adc48a3;   
    if (client.connect(thingspeakserver,httpPort)) {
    client.print(String("GET ") + test6 + " HTTP/1.1\r\n" +
                "Host: " + thingspeakserver + "\r\n" + 
                "Connection: close\r\n\r\n");  
                }  
              }
            if (b52 == 1){ 
    adc49test(); 
    String  test7="/update?api_key=";
            test7+= b53; 
            test7+= "&";  
            test7+= "field1";    
            test7+= "=";  
            test7+= adc49a0;   
            test7+= "&";   
            test7+= "field2";    
            test7+= "=";  
            test7+= adc49a1;   
            test7+= "&"; 
            test7+= "field3";    
            test7+= "=";  
            test7+= adc49a2;   
            test7+= "&"; 
            test7+= "field4";    
            test7+= "=";  
            test7+= adc49a3;   
    if (client.connect(thingspeakserver,httpPort)) {
    client.print(String("GET ") + test7 + " HTTP/1.1\r\n" +
                "Host: " + thingspeakserver + "\r\n" + 
                "Connection: close\r\n\r\n");  
                }  
              }   
   client.stop();
   Serial.println("thingspeak");
}
