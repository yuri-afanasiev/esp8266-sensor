void api18() {
     ws1 = server.arg("ws1").toInt();//on 1/ off 0
     ws2 = server.arg("ws2").toInt();//пин
     ws3 = server.arg("ws3").toInt();//количество   
     ws4 = server.arg("ws4").toInt();//режим работы 
     ws8 = server.arg("ws8").toInt();//включение при запуске
     save18();//  запись в память модуля
     server.send(200, "text/plain", "OK");
}
void openfilehtm18() {
  File htm18 = SPIFFS.open("/htm18.json", "r");
  size_t size = htm18.size();
  std::unique_ptr<char[]> buf(new char[size]);
  htm18.readBytes(buf.get(), size);
  StaticJsonBuffer<200> jsonBuffer;
  JsonObject& json = jsonBuffer.parseObject(buf.get());
   ws1 = json["d1"];// 
   ws2 = json["d2"];// 
   ws3 = json["d3"];// 
   ws4 = json["d4"];// 
   ws8 = json["d8"];// 
} 
bool save18() {
  StaticJsonBuffer<400> jsonBuffer;
  JsonObject& json = jsonBuffer.createObject();
  json["d1"] = ws1;// 
  json["d2"] = ws2;// 
  json["d3"] = ws3;//
  json["d4"] = ws4;//
  json["d8"] = ws8;//
  File htm18 = SPIFFS.open("/htm18.json", "w");
  if (!htm18) {   
    return false;
  }
  json.printTo(htm18);
  return true;
}


