void api19() {
     mqw1 = server.arg("mqw1").toInt();//on 1/ off 0
     mqw2 = server.arg("mqw2"); //    сервер MQTT 
     mqw3 = server.arg("mqw3").toInt(); //    Порт    
     mqw4 = server.arg("mqw4"); //    Логин MQTT
     mqw5 = server.arg("mqw5"); //   Пароль MQTT
     mqw6 = server.arg("mqw6"); //имя  
     mqw7 = server.arg("mqw7"); //Группа
     mqw8 = server.arg("mqw8").toInt(); //время 
     mqw9 = server.arg("mqw9"); //#
     mqw10= server.arg("mqw10").toInt(); //#
     save19();//  запись в память модуля
     server.send(200, "text/plain", "OK");
}
void openfilehtm19() {
  File configFile = SPIFFS.open("/htm19.json", "r");
  size_t size = configFile.size();
  std::unique_ptr<char[]> buf(new char[size]);
  configFile.readBytes(buf.get(), size);
  StaticJsonBuffer<200> jsonBuffer;
  JsonObject& json = jsonBuffer.parseObject(buf.get());
        mqw1 = json["d1"];// 
  String ee2 = json["d2"];//    
        mqw3 = json["d3"];//  
  String ee4 = json["d4"];// 
  String ee5 = json["d5"];// 
  String ee6 = json["d6"];// 
  String ee7 = json["d7"];// 
        mqw8 = json["d8"];// 
  String ee9 = json["d9"];// 
      mqw10 = json["d10"];// 
  
  mqw2=ee2;
  mqw4=ee4;
  mqw5=ee5;
  mqw6=ee6;
  mqw7=ee7;
  
  mqw9=ee9;
} 

bool save19() {
  StaticJsonBuffer<400> jsonBuffer;
  JsonObject& json = jsonBuffer.createObject();
  json["d1"] = mqw1;// 
  json["d2"] = mqw2;// 
  json["d3"] = mqw3;// 
  json["d4"] = mqw4;// 
  json["d5"] = mqw5;// 
  json["d6"] = mqw6;// 
  json["d7"] = mqw7;// 
  json["d8"] = mqw8;// 
  json["d9"] = mqw9;// 
  json["d10"] = mqw10;// 
  
  File configFile = SPIFFS.open("/htm19.json", "w");
  if (!configFile) {   
    return false;
  }
  json.printTo(configFile);
  return true;
}

void  htm19xml(){
String  url1="<?xml version='1.0'?>";
        url1+="<Donnees>"; 
        url1+="<q1>";
        url1+=mqw1;// 
        url1+="</q1>";
        url1+="<q2>";
        url1+=mqw2;// 
        url1+="</q2>";
        url1+="<q3>";
        url1+=mqw3;// 
        url1+="</q3>";
        url1+="<q4>";
        url1+=mqw4;// 
        url1+="</q4>";
        url1+="<q5>";
        url1+=mqw5;// 
        url1+="</q5>";
        url1+="<q6>";
        url1+=mqw6;// 
        url1+="</q6>";
        url1+="<q7>";
        url1+=mqw7;// 
        url1+="</q7>";
        url1+="<q8>";
        url1+=mqw8;// 
        url1+="</q8>";
        url1+="<q9>";
        url1+=mqw9;// 
        url1+="</q9>";
        url1+="<q10>";
        url1+=mqw10;// 
        url1+="</q10>";
        url1+="</Donnees>"; 
server.send(200,"text/xml",url1);
}         


