void api2() {
     z1e = server.arg("z1").toInt();//4(SDA)
     z2e = server.arg("z2").toInt();//5(SCL) 
     z3 = server.arg("z3").toInt();//on 1/ off 0  
     z4 = server.arg("z4").toInt();//Доступ 
     z5 = server.arg("z5");// 
     z6 = server.arg("z6");//        
     z7 = server.arg("z7").toInt();//Serial on 1/ off 0
     z8 = server.arg("z8").toInt();//auto_update
     z9 = server.arg("z9").toInt();// 
     save2();//  запись в память модуля
     server.send(200, "text/plain", "OK");
}
void openfilehtm2() {
  File htm2 = SPIFFS.open("/htm2.json", "r");
  size_t size = htm2.size();
  std::unique_ptr<char[]> buf(new char[size]);
  htm2.readBytes(buf.get(), size);
  StaticJsonBuffer<200> jsonBuffer;
  JsonObject& json = jsonBuffer.parseObject(buf.get());
   z1e = json["d1"];//4(SDA)
   z2e = json["d2"];//5(SCL)  
   z3 = json["d3"];// 
   z4 = json["d4"];// 
   z7 = json["d7"];// 
   z8 = json["d8"];// 
   z9 = json["d9"];// 
  String ee5 = json["d5"];// 
  String ee6 = json["d6"];//  
  z5=ee5;
  z6=ee6;
} 

bool save2() {
  StaticJsonBuffer<400> jsonBuffer;
  JsonObject& json = jsonBuffer.createObject();
  json["d1"] = z1e;//4(SDA)
  json["d2"] = z2e;//5(SCL)
  json["d3"] = z3;//
  json["d4"] = z4;//
  json["d5"] = z5;//
  json["d6"] = z6;//
  json["d7"] = z7;//
  json["d8"] = z8;//
  json["d9"] = z9;//
  
  File htm2 = SPIFFS.open("/htm2.json", "w");
  if (!htm2) {   
    return false;
  }
  json.printTo(htm2);
  return true;
}

void htm2xml(){
String  url1="<?xml version='1.0'?>";
        url1+="<Donnees>"; 
        url1+="<q1>";
        url1+=z1e;//4(SDA)
        url1+="</q1>";
        url1+="<q2>";
        url1+=z2e;//5(SCL)
        url1+="</q2>";
        url1+="<q3>";
        url1+=z3;//
        url1+="</q3>";
        url1+="<q4>";
        url1+=z4;//
        url1+="</q4>";
        url1+="<q5>";
        url1+=z5;//
        url1+="</q5>";
        url1+="<q6>";
        url1+=z6;//
        url1+="</q6>";
        url1+="<q7>";
        url1+=z7;//
        url1+="</q7>";
        url1+="<q8>";
        url1+=z8;//
        url1+="</q8>";
        url1+="<q9>";
        url1+=z9;//
        url1+="</q9>";
        url1+="</Donnees>"; 
server.send(200,"text/xml",url1);
}  
