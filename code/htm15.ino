void api15() {
     tz1 = server.arg("tz1").toInt();// on 1/ off 0 48
     tz2 = server.arg("tz2").toInt();// on 1/ off 0 49
     tz3 = server.arg("tz3").toInt();// уселение
     tz4 = server.arg("tz4").toInt();// уселение
     tz5 = server.arg("tz5").toInt();// -резерв-
     tz6 = server.arg("tz6").toInt();// -резерв-        
     save15();//  запись в память модуля
      
     server.send(200, "text/plain", "OK");
}
void openfilehtm15() {
  File htm15 = SPIFFS.open("/htm15.json", "r");
  size_t size = htm15.size();
  std::unique_ptr<char[]> buf(new char[size]);
  htm15.readBytes(buf.get(), size);
  StaticJsonBuffer<200> jsonBuffer;
  JsonObject& json = jsonBuffer.parseObject(buf.get());
   tz1 = json["d1"];// 
   tz2 = json["d2"];//   
   tz3 = json["d3"];// 
   tz4 = json["d4"];// 
   tz5 = json["d5"];// 
   tz6 = json["d6"];//
} 

bool save15() {
  StaticJsonBuffer<400> jsonBuffer;
  JsonObject& json = jsonBuffer.createObject();
  json["d1"] = tz1;//  
  json["d2"] = tz2;// 
  json["d3"] = tz3;//
  json["d4"] = tz4;//
  json["d5"] = tz5;//
  json["d6"] = tz6;//
  
  File htm15 = SPIFFS.open("/htm15.json", "w");
  if (!htm15) {   
    return false;
  }
  json.printTo(htm15);
  return true;
}

void htm15xml(){
    if (tz1 == 1){
       adc48test();
       }
    if (tz2 == 1){
       adc49test();
       }
  
String  url1="<?xml version='1.0'?>";
        url1+="<Donnees>"; 
        url1+="<q1>";
        url1+=tz1;// 
        url1+="</q1>";
        url1+="<q2>";
        url1+=tz2;// 
        url1+="</q2>";
        url1+="<q3>";
        url1+=tz3;//
        url1+="</q3>";
        url1+="<q4>";
        url1+=tz4;//
        url1+="</q4>";
        url1+="<q5>";
        url1+=tz5;//-резерв-
        url1+="</q5>";
        url1+="<q6>";
        url1+=tz6;//-резерв-
        url1+="</q6>";

        url1+="<q7>";
        url1+=adc48a0;// 0
        url1+="</q7>";
        url1+="<q8>";
        url1+=adc48a1;// 1
        url1+="</q8>";
        url1+="<q9>";
        url1+=adc48a2;// 2 
        url1+="</q9>";
        url1+="<q10>";
        
        url1+=adc48a3;// 3
        url1+="</q10>";

        url1+="<q11>";
        url1+=adc49a0;// 0
        url1+="</q11>";
        url1+="<q12>";
        url1+=adc49a1;// 1
        url1+="</q12>";
        url1+="<q13>";
        url1+=adc49a2;// 2
        url1+="</q13>";
        url1+="<q14>";
        url1+=adc49a3;// 3
        url1+="</q14>";
        url1+="</Donnees>"; 
server.send(200,"text/xml",url1);
}  
