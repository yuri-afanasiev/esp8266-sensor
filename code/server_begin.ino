void serveron() {//list directory 
   server.on("/esp_update", [](){//Обнавление   
   if(!server.authenticate(w5.c_str(),w6.c_str()))
       return server.requestAuthentication();  
       String fs_bin_test = server.arg("fs_bin");//fs 
       String code_bin_test = server.arg("code_bin");//code
       esp_update(fs_bin_test,code_bin_test);
     }); 
      
   server.on("/sensor39", [](){ 
      sensor_39();
     });
 server.on("/xml1", [](){    
   if(!server.authenticate(w5.c_str(),w6.c_str()))
       return server.requestAuthentication();  
       testxml();
     });  
 server.on("/xml2", [](){    
   if(!server.authenticate(w5.c_str(),w6.c_str()))
       return server.requestAuthentication();  
       htm2xml();
     });      
      server.on("/xml3", [](){    
   if(!server.authenticate(w5.c_str(),w6.c_str()))
       return server.requestAuthentication();  
       htm3xml();
     });  
   server.on("/xml4", [](){    
   if(!server.authenticate(w5.c_str(),w6.c_str()))
       return server.requestAuthentication();  
       htm4xml();
     });  
      server.on("/xml5", [](){    
   if(!server.authenticate(w5.c_str(),w6.c_str()))
       return server.requestAuthentication();  
       htm5xml();
     });
      server.on("/xml6", [](){    
   if(!server.authenticate(w5.c_str(),w6.c_str()))
       return server.requestAuthentication();  
       htm6xml();
     });  
      server.on("/xml7", [](){    
   if(!server.authenticate(w5.c_str(),w6.c_str()))
       return server.requestAuthentication();  
       htm7xml();
     });  
      server.on("/xml8", [](){    
   if(!server.authenticate(w5.c_str(),w6.c_str()))
       return server.requestAuthentication();  
       htm8xml();
     });  
      server.on("/xml9", [](){    
   if(!server.authenticate(w5.c_str(),w6.c_str()))
       return server.requestAuthentication();  
       htm9xml();
     });   
      server.on("/xml10", [](){    
   if(!server.authenticate(w5.c_str(),w6.c_str()))
       return server.requestAuthentication();  
       htm10xml();
     });   
       server.on("/xml11", [](){    
   if(!server.authenticate(w5.c_str(),w6.c_str()))
       return server.requestAuthentication();  
       htm11xml();
     });       
      server.on("/xml14", [](){    
   if(!server.authenticate(w5.c_str(),w6.c_str()))
       return server.requestAuthentication();  
       htm14xml();
     });  

      server.on("/xml15", [](){    
   if(!server.authenticate(w5.c_str(),w6.c_str()))
       return server.requestAuthentication();  
       htm15xml();
     }); 

     server.on("/xml16", [](){    
   if(!server.authenticate(w5.c_str(),w6.c_str()))
       return server.requestAuthentication();  
       htm16xml();
     }); 
   server.on("/xml17", [](){    
   if(!server.authenticate(w5.c_str(),w6.c_str()))
       return server.requestAuthentication();  
       htm17xml();
     }); 
      server.on("/xml19", [](){    
   if(!server.authenticate(w5.c_str(),w6.c_str()))
       return server.requestAuthentication();  
       htm19xml();
     }); 
   // server.on("/espdataxml",espdataxml);
   // server.on("/espdata", espdata); 
    server.on("/nrfcmd", nrfcmd); //
    
    server.on("/nrfoff", nrfcmd1off); //test nrf rele 
    server.on("/nrfon", nrfcmd1on); //test nrf rele  
                         
    server.on("/ws2812",api17);
   server.on("/api", [](){    
     if(!server.authenticate(w5.c_str(),w6.c_str()))
       return server.requestAuthentication();  
       api();
     }); 
     server.on("/server_build", [](){    
     if(!server.authenticate(w5.c_str(),w6.c_str()))
       return server.requestAuthentication();  
        serverbuilddata();
     }); 
  server.on("/api2", [](){    
     if(!server.authenticate(w5.c_str(),w6.c_str()))
       return server.requestAuthentication();  
       api2();
     }); 
      server.on("/api3", [](){    
     if(!server.authenticate(w5.c_str(),w6.c_str()))
       return server.requestAuthentication();  
       api3();
     }); 
     
       server.on("/api5", [](){    
     if(!server.authenticate(w5.c_str(),w6.c_str()))
       return server.requestAuthentication();  
       api5();
     });
       server.on("/api6", [](){    
     if(!server.authenticate(w5.c_str(),w6.c_str()))
       return server.requestAuthentication();  
       api6();
     }); 
       server.on("/api7", [](){    
     if(!server.authenticate(w5.c_str(),w6.c_str()))
       return server.requestAuthentication();  
       api7();
     }); 
       server.on("/api8", [](){    
     if(!server.authenticate(w5.c_str(),w6.c_str()))
       return server.requestAuthentication();  
       api8();
     }); 
 
       server.on("/api10", [](){    
     if(!server.authenticate(w5.c_str(),w6.c_str()))
       return server.requestAuthentication();  
       api10();
     }); 
      server.on("/api11", [](){    
     if(!server.authenticate(w5.c_str(),w6.c_str()))
       return server.requestAuthentication();  
       api11();
     }); 
      server.on("/api14", [](){    
     if(!server.authenticate(w5.c_str(),w6.c_str()))
       return server.requestAuthentication();  
       api14();
     }); 

       server.on("/api15", [](){    
     if(!server.authenticate(w5.c_str(),w6.c_str()))
       return server.requestAuthentication();  
       api15();
     });  

       server.on("/api16", [](){    
     if(!server.authenticate(w5.c_str(),w6.c_str()))
       return server.requestAuthentication();  
       api16();
     }); 
       server.on("/api18", [](){    
     if(!server.authenticate(w5.c_str(),w6.c_str()))
       return server.requestAuthentication();  
       api18();
     }); 
       server.on("/api19", [](){    
     if(!server.authenticate(w5.c_str(),w6.c_str()))
       return server.requestAuthentication();  
       api19();
     });  


        server.on("/i2c/scanner", [](){    
     if(!server.authenticate(w5.c_str(),w6.c_str()))
       return server.requestAuthentication();  
        scanner_i2c();
     }); 
 
    server.on("/i2c/lcd/off", [](){
       if(!server.authenticate(w5.c_str(),w6.c_str()))
       return server.requestAuthentication();  
       lcd.noBacklight();
       server.send(200, "text/plain", "ok");        
   }); 
    server.on("/i2c/lcd/on", [](){
       if(!server.authenticate(w5.c_str(),w6.c_str()))
       return server.requestAuthentication();  
       lcd.backlight(); 
       server.send(200, "text/plain", "ok");        
   }); 



    server.on("/narodmon/test", [](){
       if(!server.authenticate(w5.c_str(),w6.c_str()))
       return server.requestAuthentication();  
       narodmon();
       server.send(200, "text/plain", "ok");        
   }); 
       server.on("/thingspeak/test", [](){
       if(!server.authenticate(w5.c_str(),w6.c_str()))
       return server.requestAuthentication();  
       thingspeak();
       server.send(200, "text/plain", "ok");        
   }); 
       server.on("/myserver/test", [](){
       if(!server.authenticate(w5.c_str(),w6.c_str()))
       return server.requestAuthentication();  
       myserver();
       server.send(200, "text/plain", "ok");        
   }); 

     

 server.on("/config.json", [](){      
  server.send(403, "text/plain", "Forbidden");       
 });    
  if (z4 == 0){
 server.on("/htm2.json", [](){      
  server.send(403, "text/plain", "Forbidden");       
 });  
 server.on("/htm3.json", [](){      
  server.send(403, "text/plain", "Forbidden");       
 });  
  server.on("/htm4.json", [](){      
  server.send(403, "text/plain", "Forbidden");       
 });  
 server.on("/htm5.json", [](){      
  server.send(403, "text/plain", "Forbidden");       
 });  
  server.on("/htm6.json", [](){      
  server.send(403, "text/plain", "Forbidden");       
 });  
 server.on("/htm7.json", [](){      
  server.send(403, "text/plain", "Forbidden");       
 });  
 server.on("/htm8.json", [](){      
  server.send(403, "text/plain", "Forbidden");       
 }); 
 server.on("/htm9.json", [](){      
  server.send(403, "text/plain", "Forbidden");       
 }); 
  server.on("/htm10.json", [](){      
  server.send(403, "text/plain", "Forbidden");       
 });  
 server.on("/htm11.json", [](){      
  server.send(403, "text/plain", "Forbidden");       
 });  
  server.on("/htm14.json", [](){      
  server.send(403, "text/plain", "Forbidden");       
 });  
  server.on("/htm15.json", [](){      
  server.send(403, "text/plain", "Forbidden");       
 });  

   server.on("/htm16.json", [](){      
  server.send(403, "text/plain", "Forbidden");       
 }); 

   
     server.on("/edit.htm", [](){      
      server.send(403, "text/plain", "Forbidden");       
   }); 
}else {
       server.on("/list", HTTP_GET, handleFileList);  
        server.on("/edit", HTTP_GET, [](){
        if(!handleFileRead("/edit.htm")) server.send(404, "text/plain", "FileNotFound");
         });         
         server.on("/edit", HTTP_PUT, handleFileCreate); 
         server.on("/edit", HTTP_DELETE, handleFileDelete);
         server.on("/edit", HTTP_POST, [](){ server.send(200, "text/plain", ""); }, handleFileUpload);
         
  }
 server.on("/web", [](){//Обнавление   
   if(!server.authenticate(w5.c_str(),w6.c_str()))
       return server.requestAuthentication();  
       //updatetest();
         mqtt_update();
     });     
    
                 
    server.on("/reset", [](){
     if(!server.authenticate(w5.c_str(),w6.c_str()))
        return server.requestAuthentication();  
        server.send(200, "text/plain", "ok");
        ESP.restart();    
     });    
    server.onNotFound([](){
    if(!handleFileRead(server.uri()))
    server.send(404, "text/plain", "FileNotFound");
     }); 

       
       
    server.begin();
    
}
