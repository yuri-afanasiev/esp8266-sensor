void scanner_i2c() {
  byte error, address; 
  int nDevices;   
      nDevices = 0;
  String  url1= "I2C scanner \n\n";
         for (address = 1; address < 127; address++ )  {
              Wire.beginTransmission(address);
               error = Wire.endTransmission();
           if (error == 0) {
               url1+="0x"; 
           if (address < 16)
               url1+="0"; 
               url1+= String(address,HEX);
               url1+="\n"; 
               nDevices++;
              }
              else if (error==4) {                    
                       url1+="Unknow error at address 0x\n"; 
                   if (address<16)  
                       url1+="0"; 
                       url1+= String(address,HEX);       
                       url1+="\n";  
                      }    
              }
              if (nDevices == 0) { 
                  url1+="No I2C devices found\n";          
                  }
              server.send(200, "text/plain",url1);
}
