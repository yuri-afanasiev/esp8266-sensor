
void api10() {
     s1 = server.arg("s1").toInt();// on/off 
     s2 = server.arg("s2").toInt();//  -резерв-
     s3 = server.arg("s3"); // Группа  
     s4 = server.arg("s4");//  Имя устройства
     s5 = server.arg("s5");//  -резерв-
     s6 = server.arg("s6");//  -резерв-     
     save10();//  запись в память модуля
     server.send(200, "text/plain", "OK");
}
void openfilehtm10() {
  File htm10 = SPIFFS.open("/htm10.json", "r");
  size_t size = htm10.size();
  std::unique_ptr<char[]> buf(new char[size]);
  htm10.readBytes(buf.get(), size);
  StaticJsonBuffer<200> jsonBuffer;
  JsonObject& json = jsonBuffer.parseObject(buf.get());
   s1 = json["d1"];// 
   s2 = json["d2"];//  
  String ss3 = json["d3"];// 
  String ss4 = json["d4"];// -резерв-
  String ss5 = json["d5"];// -резерв-
  String ss6 = json["d6"];// -резерв-
  
  s3=ss3;
  s4=ss4;
  s5=ss5;
  s6=ss6;
} 

bool save10() {
  StaticJsonBuffer<400> jsonBuffer;
  JsonObject& json = jsonBuffer.createObject();
  json["d1"] = s1;// 
  json["d2"] = s2;// 
  json["d3"] = s3;//
  json["d4"] = s4;// -резерв-
  json["d5"] = s5;// -резерв-
  json["d6"] = s6;// -резерв-
  
  File htm10 = SPIFFS.open("/htm10.json", "w");
  if (!htm10) {   
    return false;
  }
  json.printTo(htm10);
  return true;
}

void htm10xml(){
String  url1="<?xml version='1.0'?>";
        url1+="<Donnees>"; 
        url1+="<q1>";
        url1+=s1;// 
        url1+="</q1>";
        url1+="<q2>";
        url1+=s2;// 
        url1+="</q2>";
        url1+="<q3>";
        url1+=s3;//
        url1+="</q3>";
        url1+="<q4>";
        url1+=s4;// -резерв-
        url1+="</q4>";
        url1+="<q5>";
        url1+=s5;// -резерв-
        url1+="</q5>";
        url1+="<q6>";
        url1+=s6;// -резерв-
        url1+="</q6>";
        url1+="</Donnees>"; 
server.send(200,"text/xml",url1);
} 

        
 
