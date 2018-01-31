void htm4xml(){ //вывод данны
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
String  url1="<?xml version='1.0'?>";
        url1+="<Donnees>"; 
        url1+="<q1>";
     if (n1 == 1){
        bh1750test();    
        url1+=lux;//lux               
        }
        else {
        url1+="off";
        }
        url1+="</q1>";
        url1+="<q2>";
    if (n2 == 1){   
        url1+=bmp.readTemperature();// bmp180 Temperature                 
        }
        else {
        url1+="off";
        }        
        url1+="</q2>";
        url1+="<q3>";
     if (n2 == 1){   
        url1+=bmp.readPressure()/ 133.3 ;//mmHg            
         }
        else {
        url1+="off";
        }
        url1+="</q3>";
        url1+="<q4>";
    if (n3 == 1){   
        url1+=t;//dht Temperature          
         }
        else {
        url1+="off";
        }         
        url1+="</q4>";
        url1+="<q5>";
    if (n3 == 1){   
        url1+=h;//dht Humidity         
         }
        else {
        url1+="off";
        } 
        url1+="</q5>";
        url1+="<q6>";       
        float vcc1 = ESP.getVcc();
        String vcc ;  
        vcc += vcc1/1000,2;   
        url1+=vcc; 
        url1+="</q6>";
        url1+="<q7>";
        url1+=reconnect;//reconnect
        url1+="</q7>";
        url1+="<q8>";
        url1+=WiFi.RSSI();
        url1+="</q8>";
        url1+="<q9>";
      if (n4 == 1){ // ina219 V    
        url1+= loadvoltage;       
        }
        else {
        url1+="off";
        } 
        url1+="</q9>";        
        url1+="<q10>";
      if (n4 == 1){ // ina219 mA
        url1+= current_mA;
        }
        else {
        url1+="off";
        } 
        url1+="</q10>";
        url1+="<q11>";
      if (n5 == 1){ //PZEM004T V
        url1+=v;
        }
        else {
        url1+="off";
        } 
        url1+="</q11>";
        url1+="<q12>";
      if (n5 == 1){ 
        url1+= i; //PZEM004T A
        }
        else {
        url1+="off";
        } 
        url1+="</q12>";
        url1+="<q13>";
      if (n5 == 1){ 
        url1+= p;//PZEM004T W
        }
        else {
        url1+="off";
        } 
        url1+="</q13>";
        url1+="<q14>";
      if (n5 == 1){  
        url1+=e;//PZEM004T Wh
        }
        else {
        url1+="off";
        } 
        url1+="</q14>";
        url1+="<q15>";
      if (n6 == 1){   
        url1+=temp;//18B20      
         }
        else {
        url1+="off";
        } 
        url1+="</q15>";
        url1+="<q16>";
      if (n7 == 1){   
        url1+=htu21temp;//htu21      
         }
        else {
        url1+="off";
        } 
        url1+="</q16>";
        url1+="<q17>";
      if (n7 == 1){   
        url1+=htu21hum;//htu21      
         }
        else {
        url1+="off";
        } 
        url1+="</q17>";
         url1+="<q18>";
         if (n8 == 1){   
             max6675test(); 
             url1+=max6675_t;//max6675     
            }
           else {
           url1+="off";
        } 
        url1+="</q18>";
        ///////////////////////////////
       url1+="<q19>";
         if (n9 == 1){   
             ccS811_test();
             url1+=ccs.geteCO2();//     
            }
           else {
           url1+="off";
        } 
        url1+="</q19>";
        url1+="<q20>";
         if (n9 == 1){  
             url1+=ccs.getTVOC();//     
            }
           else {
           url1+="off";
        } 
        url1+="</q20>";
        url1+="<q21>";
         if (n10 == 1){  
             url1+=hdc1080.readTemperature();//     
            }
           else {
           url1+="off";
        } 
        url1+="</q21>";
        url1+="<q22>";
         if (n10 == 1){  
             url1+=hdc1080.readHumidity();//     
            }
           else {
           url1+="off";
        } 
        url1+="</q22>";
        url1+="<q23>";
         if (n11 == 1){  
          bme280test();
             url1+=bme280_pres;//     
            }
           else {
           url1+="off";
        } 
        url1+="</q23>";
        url1+="<q24>";
         if (n11 == 1){  
             url1+=bme280_temp;//     
            }
           else {
           url1+="off";
        } 
        url1+="</q24>";
        url1+="<q25>";
         if (n11 == 1){  
             url1+=bme280_hum;//     
            }
           else {
           url1+="off";
        } 
        url1+="</q25>";

        
        url1+="</Donnees>"; 
server.send(200,"text/xml",url1);
} 
