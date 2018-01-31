void api14() {
     wz1 = server.arg("wz1").toInt();// on 1/ off 0 
     wz2 = server.arg("wz2").toInt();// GPIO
     wz3 = server.arg("wz3").toInt();// 0 — 4095  
     wz4 = server.arg("wz4").toInt();// 
     wz5 = server.arg("wz5").toInt();// 
     wz6 = server.arg("wz6").toInt();//        
     save14();//  запись в память модуля
     wztest=1;
     server.send(200, "text/plain", "OK");
}
void openfilehtm14() {
  File htm14 = SPIFFS.open("/htm14.json", "r");
  size_t size = htm14.size();
  std::unique_ptr<char[]> buf(new char[size]);
  htm14.readBytes(buf.get(), size);
  StaticJsonBuffer<200> jsonBuffer;
  JsonObject& json = jsonBuffer.parseObject(buf.get());
   wz1 = json["d1"];// 
   wz2 = json["d2"];//   
   wz3 = json["d3"];// 
   wz4 = json["d4"];// 
   wz5 = json["d5"];// 
   wz6 = json["d6"];//
} 

bool save14() {
  StaticJsonBuffer<400> jsonBuffer;
  JsonObject& json = jsonBuffer.createObject();
  json["d1"] = wz1;//  
  json["d2"] = wz2;// 
  json["d3"] = wz3;//
  json["d4"] = wz4;//
  json["d5"] = wz5;//
  json["d6"] = wz6;//
  
  File htm14 = SPIFFS.open("/htm14.json", "w");
  if (!htm14) {   
    return false;
  }
  json.printTo(htm14);
  return true;
}

void htm14xml(){
String  url1="<?xml version='1.0'?>";
        url1+="<Donnees>"; 
        url1+="<q1>";
        url1+=wz1;// 
        url1+="</q1>";
        url1+="<q2>";
        url1+=wz2;// 
        url1+="</q2>";
        url1+="<q3>";
        url1+=wz3;//
        url1+="</q3>";
        url1+="<q4>";
        url1+=wz4;//
        url1+="</q4>";
        url1+="<q5>";
        url1+=wz5;//
        url1+="</q5>";
        url1+="<q6>";
        url1+=wz6;//
        url1+="</q6>";
        url1+="</Donnees>"; 
server.send(200,"text/xml",url1);
}  
