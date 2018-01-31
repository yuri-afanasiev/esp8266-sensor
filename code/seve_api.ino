void api() {
     w1 = server.arg("w1"); //ssid
     w2 = server.arg("w2"); //password
     w3 = server.arg("w3"); //APssid     
     w4 = server.arg("w4"); //APpassword
     w5 = server.arg("w5"); //www_username
     w6 = server.arg("w6"); //www_password        
     w7 = server.arg("w7").toInt(); //Время подключение     
     w8 = server.arg("w8").toInt(); //Время при reconnect
     save();//  запись в память модуля
     server.send(200, "text/plain", "OK");  
}
void openfile() {
  File configFile = SPIFFS.open("/config.json", "r");
  size_t size = configFile.size();
  std::unique_ptr<char[]> buf(new char[size]);
  configFile.readBytes(buf.get(), size);
  StaticJsonBuffer<200> jsonBuffer;
  JsonObject& json = jsonBuffer.parseObject(buf.get());
  String ee1 = json["d1"];//ssid
  String ee2 = json["d2"];//password   
  String ee3 = json["d3"];//APssid 
  String ee4 = json["d4"];//APpassword
  String ee5 = json["d5"];//www_username
  String ee6 = json["d6"];//www_password
          w7 = json["d7"];//data
          w8 = json["d8"];//data
  
  w1=ee1;
  w2=ee2;
  w3=ee3;
  w4=ee4;
  w5=ee5;
  w6=ee6;
} 

bool save() {
  StaticJsonBuffer<400> jsonBuffer;
  JsonObject& json = jsonBuffer.createObject();
  json["d1"] = w1;//ssid
  json["d2"] = w2;//password
  json["d3"] = w3;//APssid
  json["d4"] = w4;//APpassword
  json["d5"] = w5;//www_username
  json["d6"] = w6;//www_password
  json["d7"] = w7;//data
  json["d8"] = w8;//data
  
  File configFile = SPIFFS.open("/config.json", "w");
  if (!configFile) {   
    return false;
  }
  json.printTo(configFile);
  return true;
}

void testxml(){
String  url1="<?xml version='1.0'?>";
        url1+="<Donnees>"; 
        url1+="<q1>";
        url1+=w1;//ssid
        url1+="</q1>";
        url1+="<q2>";
        url1+=w2;//password
        url1+="</q2>";
        url1+="<q3>";
        url1+=w3;//APssid
        url1+="</q3>";
        url1+="<q4>";
        url1+=w4;//APpassword
        url1+="</q4>";
        url1+="<q5>";
        url1+=w5;//www_username
        url1+="</q5>";
        url1+="<q6>";
        url1+=w6;//www_password
        url1+="</q6>";
        url1+="<q7>";
        url1+=w7;//Время подключение
        url1+="</q7>";
        url1+="<q8>";
        url1+=w8;//Время при reconnect
        url1+="</q8>";
        url1+="</Donnees>"; 
server.send(200,"text/xml",url1);
}         
   
