void htm9xml(){
 String  url1="<?xml version='1.0'?>";
         url1+="<Donnees>"; 
         url1+="<q1>";
         url1+=rev_code;//rev кода
         url1+="</q1>";
         url1+="<q2>";
         url1+=rev_update;//rev кода
         url1+="</q2>";
         url1+="</Donnees>"; 
 server.send(200,"text/xml",url1);
} 

void esp_update(String fs_bin,String code_bin) {
     server.send(200, "text/plain", "OK");
     serverbuilddata();
     Serial.println("Update SPIFFS...");
     ESPhttpUpdate.rebootOnUpdate(false); 
     t_httpUpdate_return ret = ESPhttpUpdate.updateSpiffs(fs_bin);
     save(); 
     save2(); 
     ESPhttpUpdate.rebootOnUpdate(true); 
     if(ret == HTTP_UPDATE_OK) {
        Serial.println("Update code...");
        ret = ESPhttpUpdate.update(code_bin);
       }
}

void mqtt_update() {
       server.send(200, "text/plain", "OK");
       serverbuilddata();
       Serial.println("Update SPIFFS...");
        ESPhttpUpdate.rebootOnUpdate(false); 
        t_httpUpdate_return ret = ESPhttpUpdate.updateSpiffs(z6);
        save();//
        save2(); 
        save19();
        save3();
        save5();
        save6();
        save7();
        save8();
        save10();
        save11();
        save14();
        save15();
        save16();
        save17();
        save18();  
        ESPhttpUpdate.rebootOnUpdate(true); 
        if(ret == HTTP_UPDATE_OK) {
            Serial.println("Update sketch...");
            ret = ESPhttpUpdate.update(z5);
          }
  Serial.println("ok...");
    ESP.restart();  
}

 void serverbuilddata() {      
 String url = "/build2/rev.php?esp=esp&";          
        url+= "chipid";    
        url+= "=";  
        url+= ESP.getChipId();   
        url+= "&";   
        url+= "flashid"; 
        url+= "=";  
        url+= ESP.getFlashChipId();
        url+= "&";  
        url+= "chipsize"; 
        url+= "=";  
        url+= ESP.getFlashChipSize(); 
        url+= "&";  
        url+= "freeheap"; 
        url+= "=";  
        url+= ESP.getFreeHeap();
        url+= "&";  
        url+= "rev"; 
        url+= "=";  
        url+=rev_code;
        WiFiClient client;
        if (!client.connect(hostbuild,httpPort)) {
             rev_update = 0.1;
            } else {
   client.print(String("GET ") + url + " HTTP/1.1\r\n" +
               "Host: " + hostbuild + "\r\n" + 
               "User-Agent: Mozilla/4.0 (compatible; MSIE 7.0; Windows NT 5.1)"+ "\r\n" + 
               "Accept: text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8" + "\r\n" + 
               "Accept-Language: ru-ru,ru;q=0.8,en-us;q=0.5,en;q=0.3" + "\r\n" + 
               "Accept-Charset:: windows-1251,utf-8;q=0.7,*;q=0.7"+ "\r\n" +
               "Content-Type: Content-Type: text/html; charset=iso-8859-1" + "\r\n" +  
               "Connection: close\r\n\r\n");
  }
  }
void auto_update() { 
     serverbuilddata();
     update_code_build1_1 = 0;
    //if (rev_update >rev_code){           
         // mqtt_update();
        //}    
}

 
void update_code_build1(){ 
     update_code_build1_1 = 1;
}
