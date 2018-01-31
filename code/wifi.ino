
void wifi() {
      WiFi.disconnect();
      WiFi.mode(WIFI_STA);  
      WiFi.begin(w1.c_str(), w2.c_str());
      int i = 0;
      while (WiFi.status() != WL_CONNECTED && i < w7) {
            delay(1000);
            i++;
            Serial.print(".");
       }
       if (WiFi.status() != WL_CONNECTED)  {     
           wifiap();    
        }    
}

void wifitest() {
    int iw = 0;  
    if (wifire == 0){
      if (WiFi.status() != WL_CONNECTED)  { 
           while (WiFi.status() != WL_CONNECTED && iw< w8) { 
           delay(1000); 
           Serial.print("reconnect ");
           iw++;
           
           }
            reconnect++; 
       }
    }
   if (wifire == 0){
        if (iw == w8){
             wifiap();
             mqw1=0;
             wifire=1;
            }
      }     
        
}
void wifiap() {      
     WiFi.disconnect();
     WiFi.mode(WIFI_AP);  
     WiFi.softAP(w3.c_str(),w4.c_str());
     wifire=1;
     var=0;
}
