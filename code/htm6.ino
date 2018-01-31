void api6() {//on 1/ off 0 
     n1 = server.arg("n1").toInt();// BH1750
     n2 = server.arg("n2").toInt();// BMP180 
     n3 = server.arg("n3").toInt(); //DHT   
     n4 = server.arg("n4").toInt();//ina219  
     n5 = server.arg("n5").toInt();//PZEM004T 
     n6 = server.arg("n6").toInt();//18b20         
     n7 = server.arg("n7").toInt();//HTU21 
     n8 = server.arg("n8").toInt();//MAX6675  
     n9 = server.arg("n9").toInt();//CCS811  
     n10 = server.arg("n10").toInt();//HDC1080 
     n11 = server.arg("n11").toInt();//BME280 
     n12 = server.arg("n12").toInt();//CCS811 Reset pin   
     save6();//  запись в память модуля
     server.send(200, "text/plain", "OK");  
}
void openfilehtm6() {
  File htm6 = SPIFFS.open("/htm6.json", "r");
  size_t size = htm6.size();
  std::unique_ptr<char[]> buf(new char[size]);
  htm6.readBytes(buf.get(), size);
  StaticJsonBuffer<200> jsonBuffer;
  JsonObject& json = jsonBuffer.parseObject(buf.get());
   n1 = json["d1"];// 
   n2 = json["d2"];// 
   n3 = json["d3"];// 
   n4 = json["d4"];// 
   n5 = json["d5"];// 
   n6 = json["d6"];// 
   n7 = json["d7"];//
   n8 = json["d8"];//
   n9 = json["d9"];//   
   n10 = json["d10"];// 
   n11 = json["d11"];//   
   n12 = json["d12"];//    
  } 

bool save6() {
  StaticJsonBuffer<400> jsonBuffer;
  JsonObject& json = jsonBuffer.createObject();
  json["d1"] = n1;// 
  json["d2"] = n2;// 
  json["d3"] = n3;//
  json["d4"] = n4;//
  json["d5"] = n5;//
  json["d6"] = n6;//
  json["d7"] = n7;//
  json["d8"] = n8;//
  json["d9"] = n9;//
  json["d10"] = n10;//
  json["d11"] = n11;//
  json["d12"] = n12;//
  
  File htm6 = SPIFFS.open("/htm6.json", "w");
  if (!htm6) {   
    return false;
  }
  json.printTo(htm6);
  return true;
}

void htm6xml(){
String  url1="<?xml version='1.0'?>";
        url1+="<Donnees>"; 
        url1+="<q1>";
        url1+=n1;// 
        url1+="</q1>";
        url1+="<q2>";
        url1+=n2;// 
        url1+="</q2>";
        url1+="<q3>";
        url1+=n3;//
        url1+="</q3>";
        url1+="<q4>";
        url1+=n4;//ina219  
        url1+="</q4>";
        url1+="<q5>";
        url1+=n5;//PZEM004T
        url1+="</q5>";
        url1+="<q6>";
        url1+=n6;//18b20
        url1+="</q6>";        
        url1+="<q7>";
        url1+=n7;//
        url1+="</q7>";
        url1+="<q8>";
        url1+=n8;//
        url1+="</q8>";
        url1+="<q9>";
        url1+=n9;//
        url1+="</q9>";
        url1+="<q10>";
        url1+=n10;//
        url1+="</q10>";
        url1+="<q11>";
        url1+=n11;//
        url1+="</q11>";
        url1+="<q12>";
        url1+=n12;//
        url1+="</q12>";
        url1+="</Donnees>"; 
server.send(200,"text/xml",url1);
}         
     
