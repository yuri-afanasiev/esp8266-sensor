void sensor_39() {
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
 String url ;   
  url += "{\"bh1750\":\"";//bh1750  
     if (n1 == 1){
        bh1750test();    
        url+=lux;//lux               
        }
        else {
        url+="0";
        }
  url += "\",\"bmp180t\":\"";//bmp180
     if (n2 == 1){   
        url+=bmp.readTemperature();// bmp180 Temperature                 
        }
        else {
        url+="0";
        }
  url += "\",\"rssi\":\"";  
  url += WiFi.RSSI(); 
  url += "\",\"bmp180m\":\"";//bmp180
     if (n2 == 1){   
        url+=bmp.readPressure()/ 133.3 ;//mmHg            
         }
        else {
        url+="0";
        } 
  url += "\",\"dhtt\":\"";//dht t
      if (n3 == 1){   
         url+=t;//dht Temperature          
         }
        else {
        url+="0";
        }   
  url += "\",\"dhth\":\"";//dht h
      if (n3 == 1){   
        url+=h;//dht Humidity         
         }
        else {
        url+="0";
        } 
  url += "\",\"ina219v\":\"";//ina219  v
      if (n4 == 1){ // ina219 V    
        url+= loadvoltage;       
        }
        else {
        url+="0";
        } 
  url += "\",\"ina219ma\":\"";//ina219 ma
      if (n4 == 1){ // ina219 mA
         url+= current_mA;
        }
        else {
        url+="0";
        } 
  url += "\",\"pzem004tv\":\"";//PZEM004T v
      if (n5 == 1){ //PZEM004T V
         url+=v;
        }
        else {
        url+="0";
        } 
  url += "\",\"pzem004ta\":\"";//PZEM004T a
      if (n5 == 1){ 
         url+= i; //PZEM004T A
        }
        else {
        url+="0";
        } 
  url += "\",\"pzem004tw\":\"";//PZEM004T w
      if (n5 == 1){ 
         url+= p;//PZEM004T W
        }
        else {
        url+="0";
        } 
  url += "\",\"pzem004twh\":\"";//PZEM004T wh
      if (n5 == 1){  
         url+=e;//PZEM004T Wh
        }
        else {
        url+="0";
        } 
  url += "\",\"t18b20\":\"";//18B20
      if (n6 == 1){   
         url+=temp;//18B20      
         }
        else {
        url+="0";
        }  
   url += "\",\"max6675\":\"";//18B20
      if (n8 == 1){   
          max6675test(); 
          url+=max6675_t;//18B20      
         }
        else {
        url+="0";
        }  

          url += "\",\"htu21t\":\"";// 
      if (n7 == 1){   
         url+=htu21temp;//HTU21  Temperature          
         }
        else {
        url+="0";
        }   
      url += "\",\"htu21h\":\"";// 
      if (n7 == 1){   
        url+=htu21hum;//HTU21 Humidity         
         }
        else {
        url+="0";
        } 

///
    url += "\",\"ccs811_co2\":\"";// 
      if (n9 == 1){ 
         ccS811_test();  
         url+=ccs.geteCO2();//ccs811 co2        
         }
        else {
        url+="0";
        }   
    url += "\",\"ccs811_tvoc\":\"";// 
      if (n9 == 1){ 
         url+=ccs.getTVOC();//ccs811 VOC         
         }
        else {
        url+="0";
        }   
         url += "\",\"hdc1080_t\":\"";// 
      if (n10 == 1){ 
         url+=hdc1080.readTemperature();//hdc1080         
         }
        else {
        url+="0";
        }   
         url += "\",\"hdc1080_h\":\"";// 
      if (n10 == 1){ 
         url+=hdc1080.readHumidity();//hdc1080         
         }
        else {
        url+="0";
        }   
      url += "\",\"bme280_mmhg\":\"";//bme280 
      if (n11 == 1){ 
         bme280test();
         url+=bme280_pres;//       
         }
        else {
        url+="0";
        }  
        url += "\",\"bme280_t\":\"";//bme280 
      if (n11 == 1){
         url+=bme280_temp;//       
         }
        else {
        url+="0";
        }  
          url += "\",\"bme280_h\":\"";//bme280 
      if (n11 == 1){
         url+=bme280_hum;//       
         }
        else {
        url+="0";
        }  
        
  url +=  "\"}";
  sensor_test=url; 
  server.send(200,"text/json",url);
}

void chart_sensor_switch() {
     switch (time_sensor_chart) {
           case 1:
           chart_sensor_test1();
           break;
           case 2: 
           chart_sensor_test2();
           break;
           case 3: 
           chart_sensor_test3();
           break;
           case 4: 
           chart_sensor_test4();
           break;
           case 5: 
           chart_sensor_test5();
           break;
           default:
           chart_sensor_test1();
         }
}   

void chart_sensor_test1() {  
       sensor_39();
  File f = SPIFFS.open("/chart/chart1.json", "w"); //Открытие файла
       if (!f) { Serial.println("file open failed"); }  
       f.println(sensor_test); //Запись строки в файл
       f.close(); //Закрытие файла
       time_sensor_chart=2;
}
void chart_sensor_test2() {  
       sensor_39();
  File f = SPIFFS.open("/chart/chart2.json", "w"); //Открытие файла
       if (!f) { Serial.println("file open failed"); }  
       f.println(sensor_test); //Запись строки в файл
       f.close(); //Закрытие файла
       time_sensor_chart=3;
}
void chart_sensor_test3() {  
       sensor_39();
  File f = SPIFFS.open("/chart/chart3.json", "w"); //Открытие файла
       if (!f) { Serial.println("file open failed"); }  
       f.println(sensor_test); //Запись строки в файл
       f.close(); //Закрытие файла
       time_sensor_chart=4;
}
void chart_sensor_test4() {  
       sensor_39();
  File f = SPIFFS.open("/chart/chart4.json", "w"); //Открытие файла
       if (!f) { Serial.println("file open failed"); }  
       f.println(sensor_test); //Запись строки в файл
       f.close(); //Закрытие файла
       time_sensor_chart=5;
}
void chart_sensor_test5() {  
       sensor_39();
  File f = SPIFFS.open("/chart/chart5.json", "w"); //Открытие файла
       if (!f) { Serial.println("file open failed"); }  
       f.println(sensor_test); //Запись строки в файл
       f.close(); //Закрытие файла
       time_sensor_chart=1;
}

void chart_test1(){
     chart_ticker1_1=1;
}  
 
