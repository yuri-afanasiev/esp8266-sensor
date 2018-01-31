void mqtt_connect(){// подключение к MQTT серверу
     mqttclient.set_server(mqw2,mqw3);      
     if (mqttclient.connect(MQTT::Connect(mqw6).set_auth(mqw4.c_str(), mqw5.c_str()))) {
         Serial.println("Connected to MQTT server ");
         mqttclient.set_callback(callback);
         mqttclient.subscribe("/home/#");
        
            
        } 
}
void mqtt_test1(){ 
     mqtt_test1_1 = 1;
}
void mqtt_publish(){ 
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
  url += "\",\"18b20\":\"";//18B20
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
   mqttclient.publish(MQTT::Publish(top3 +"sensor",url)
           .set_retain());

if (n11 == 1){//bme280 
         mqttclient.publish(top3 +"sensor/bme280/mmhg",String(bme280_pres));
         mqttclient.publish(top3 +"sensor/bme280/t",String(bme280_temp));
         mqttclient.publish(top3 +"sensor/bme280/h",String(bme280_hum));
        }
if (n10 == 1){//hdc1080
         mqttclient.publish(top3 +"sensor/hdc1080/t",String(hdc1080.readTemperature()));
         mqttclient.publish(top3 +"sensor/hdc1080/h",String(hdc1080.readHumidity()));
        }
if (n9 == 1){//ccs811
         mqttclient.publish(top3 +"sensor/ccs811/co2",String(ccs.geteCO2()));
         mqttclient.publish(top3 +"sensor/ccs811/voc",String(ccs.getTVOC()));
        }
if (n8 == 1){//bh1750
         max6675test(); 
         String max6675_temp =  String(max6675_t);//lux  
         mqttclient.publish(top3 +"sensor/max6675/t",max6675_temp);
        }
if (n7 == 1){
         String htu21t =  String(htu.readTemperature());
         String htu21h =  String(htu.readHumidity());        
         mqttclient.publish(top3 +"sensor/htu21/t",htu21t);
         mqttclient.publish(top3 +"sensor/htu21/h",htu21h);
        }
     if (n6 == 1){
         String ds = String(temp);//18B20             
         mqttclient.publish(top3 +"sensor/18b20/t",ds);
         }
     if (n5 == 1){//PZEM004T   
         String pzem004t_v = String(v);//V   
         String pzem004t_i = String(i);//A 
         String pzem004t_p = String(p);//W         
         String pzem004t_e = String(e);//Wh        
         mqttclient.publish(top3 +"sensor/pzem004t/v",pzem004t_v);
         mqttclient.publish(top3 +"sensor/pzem004t/a",pzem004t_i);
         mqttclient.publish(top3 +"sensor/pzem004t/w",pzem004t_p);
         mqttclient.publish(top3 +"sensor/pzem004t/wh",pzem004t_e);         
        }
     if (n4 == 1){ // ina219 
         String ina219_v = String(loadvoltage);//v  
         String ina219_ma = String(current_mA);//mA 
         mqttclient.publish(top3 +"sensor/ina219/v",ina219_v);
         mqttclient.publish(top3 +"sensor/ina219/ma",ina219_ma);         
        }
     if (n3 == 1){//dht 
         String dht_t =  String(t);//Temperature 
         String dht_h =  String(h);//Humidity     
         mqttclient.publish(top3 +"sensor/dht/t",dht_t);
         mqttclient.publish(top3 +"sensor/dht/h",dht_h);
        }
     if (n2 == 1){//bmp180   
         String bmp180_t =  String(bmp.readTemperature());//Temperature 
         String bmp180_m =  String(bmp.readPressure()/ 133.3 );//mmHg    
         mqttclient.publish(top3 +"sensor/bmp180/t",bmp180_t);
         mqttclient.publish(top3 +"sensor/bmp180/m",bmp180_m);
        }
     if (n1 == 1){//bh1750
         bh1750test();  
         String bh1750_lux =  String(lux);//lux  
         mqttclient.publish(top3 +"sensor/bh1750/lux",bh1750_lux);
        }


   mqtt_test1_1 = 0;
}
