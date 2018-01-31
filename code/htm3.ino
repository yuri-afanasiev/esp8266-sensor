void api3() {//настройка narodmon on 1/ off 0
     x1 = server.arg("x1").toInt(); // on 1/ off 0  
     p3 = server.arg("x2").toInt(); //  интервал запроса
     x3 = server.arg("x3").toInt(); //  lux BH1750
     x4 = server.arg("x4").toInt(); // bmp180 Temperature
     x5 = server.arg("x5").toInt(); //  mmHg
     x6 = server.arg("x6").toInt(); // dht Temperature
     x7 = server.arg("x7").toInt(); // dht Humidity
     x8 = server.arg("x8").toInt(); // vcc 
     x9 = server.arg("x9").toInt(); // WiFi.RSSI
     x10 = server.arg("x10").toInt(); //ina219 v
     x11 = server.arg("x11").toInt(); //ina219 mA
     x12 = server.arg("x12").toInt(); //PZEM004T V
     x13 = server.arg("x13").toInt(); //PZEM004T A
     x14 = server.arg("x14").toInt(); //PZEM004T W
     x15 = server.arg("x15").toInt(); //PZEM004T Wh
     x16 = server.arg("x16").toInt(); //18b20
     
     x17 = server.arg("x17").toInt(); //ESP 2  BH1750       h1
     x18 = server.arg("x18").toInt(); //ESP 2  bmp180 T     h2
     x19 = server.arg("x19").toInt(); //ESP 2  bmp180 mmHg  h3
     x20 = server.arg("x20").toInt(); //ESP 2  dht T        h4
     x21 = server.arg("x21").toInt(); //ESP 2  dht H        h5
     x22 = server.arg("x22").toInt(); //ESP 2  ina219 v     h6
     x23 = server.arg("x23").toInt(); //ESP 2  ina219 mA    h7
     x24 = server.arg("x24").toInt(); //ESP 2  PZEM004T V   h8 
     x25 = server.arg("x25").toInt(); //ESP 2  PZEM004T A   h9  
     x26 = server.arg("x26").toInt(); //ESP 2  PZEM004T W   h10
     x27 = server.arg("x27").toInt(); //ESP 2  PZEM004T Wh  h11
     x28 = server.arg("x28").toInt(); //ESP 2  18b20        h12
     x29 = server.arg("x29").toInt(); //ESP 2  WiFi.RSSI    h13

     x30 = server.arg("x30").toInt(); //#1 nrf 1
     x31 = server.arg("x31").toInt(); //#1 nrf 2
     x32 = server.arg("x32").toInt(); //#1 nrf 3
     x33 = server.arg("x33").toInt(); //#1 nrf 4
     x34 = server.arg("x34").toInt(); //#1 nrf 5
     x35 = server.arg("x35").toInt(); //#1 nrf 6
     x36 = server.arg("x36").toInt(); //#1 nrf 7
     x37 = server.arg("x37").toInt(); //#1 nrf 8

     x38 = server.arg("x38").toInt(); //#2 nrf 1
     x39 = server.arg("x39").toInt(); //#2 nrf 2
     x40 = server.arg("x40").toInt(); //#2 nrf 3
     x41 = server.arg("x41").toInt(); //#2 nrf 4
     x42 = server.arg("x42").toInt(); //#2 nrf 5
     x43 = server.arg("x43").toInt(); //#2 nrf 6
     x44 = server.arg("x44").toInt(); //#2 nrf 7
     x45 = server.arg("x45").toInt(); //#2 nrf 8

     x46 = server.arg("x46").toInt(); //#3 nrf 1
     x47 = server.arg("x37").toInt(); //#3 nrf 2
     x48 = server.arg("x48").toInt(); //#3 nrf 3
     x49 = server.arg("x49").toInt(); //#3 nrf 4
     x50 = server.arg("x50").toInt(); //#3 nrf 5
     x51 = server.arg("x51").toInt(); //#3 nrf 6
     x52 = server.arg("x52").toInt(); //#3 nrf 7
     x53 = server.arg("x53").toInt(); //#3 nrf 8

     x54 = server.arg("x54").toInt(); //#4 nrf 1
     x55 = server.arg("x55").toInt(); //#4 nrf 2
     x56 = server.arg("x56").toInt(); //#4 nrf 3
     x57 = server.arg("x57").toInt(); //#4 nrf 4
     x58 = server.arg("x58").toInt(); //#4 nrf 5
     x59 = server.arg("x59").toInt(); //#4 nrf 6
     x60 = server.arg("x60").toInt(); //#4 nrf 7
     x61 = server.arg("x61").toInt(); //#4 nrf 8

     x62 = server.arg("x62").toInt(); //#5 nrf 1
     x63 = server.arg("x63").toInt(); //#5 nrf 2
     x64 = server.arg("x64").toInt(); //#5 nrf 3
     x65 = server.arg("x65").toInt(); //#5 nrf 4
     x66 = server.arg("x66").toInt(); //#5 nrf 5
     x67 = server.arg("x67").toInt(); //#5 nrf 6
     x68 = server.arg("x68").toInt(); //#5 nrf 7
     x69 = server.arg("x69").toInt(); //#5 nrf 8

     x70 = server.arg("x70").toInt(); //#6 nrf 1
     x71 = server.arg("x71").toInt(); //#6 nrf 2
     x72 = server.arg("x72").toInt(); //#6 nrf 3
     x73 = server.arg("x73").toInt(); //#6 nrf 4
     x74 = server.arg("x74").toInt(); //#6 nrf 5
     x75 = server.arg("x75").toInt(); //#6 nrf 6
     x76 = server.arg("x76").toInt(); //#6 nrf 7
     x77 = server.arg("x77").toInt(); //#6 nrf 8

     x78 = server.arg("x78").toInt(); //htu21
     x79 = server.arg("x79").toInt(); //ESP 2  htu21  h14 

     x80 = server.arg("x80").toInt();//CCS811  
     x81 = server.arg("x81").toInt();//HDC1080 
     x82 = server.arg("x82").toInt();//BME280 
      
     
     x2 = p3 * 60;
     save3();//  запись в память модуля
     server.send(200, "text/plain", "OK"); 
}
void openfilehtm3() {
  File htm3 = SPIFFS.open("/htm3.json", "r");
  size_t size = htm3.size();
  std::unique_ptr<char[]> buf(new char[size]);
  htm3.readBytes(buf.get(), size);
  StaticJsonBuffer<1403> jsonBuffer;
  JsonObject& json = jsonBuffer.parseObject(buf.get());
   x1 = json["d1"];// on 1/ off 0  
   x2 = json["d2"];// интервал запроса
   x3 = json["d3"];// lux BH1750
   x4 = json["d4"];// bmp180 Temperature
   x5 = json["d5"];// mmHg
   x6 = json["d6"];// dht Temperature
   x7 = json["d7"];// dht Humidity
   x8 = json["d8"];// vcc
   x9 = json["d9"];// WiFi.RSSI
   x10 = json["d10"];//INA219 V
   x11 = json["d11"];//INA219 mA
   x12 = json["d12"];//PZEM004T V
   x13 = json["d13"];//PZEM004T A
   x14 = json["d14"];//PZEM004T W
   x15 = json["d15"];//PZEM004T Wh
   x16 = json["d16"];//18b20

   x17 = json["d17"];//ESP 2  BH1750       h1
   x18 = json["d18"];//ESP 2  bmp180 T     h2
   x19 = json["d19"];//ESP 2  bmp180 mmHg  h3
   x20 = json["d20"];//ESP 2  dht T        h4
   x21 = json["d21"];//ESP 2  dht H        h5
   x22 = json["d22"];//ESP 2  ina219 v     h6
   x23 = json["d23"];//ESP 2  ina219 mA    h7
   x24 = json["d24"];//ESP 2  PZEM004T V   h8
   x25 = json["d25"];//ESP 2  PZEM004T A   h9 
   x26 = json["d26"];//ESP 2  PZEM004T W   h10
   x27 = json["d27"];//ESP 2  PZEM004T Wh  h11
   x28 = json["d28"];//ESP 2  18b20        h12
   x29 = json["d29"];//ESP 2  WiFi.RSSI    h13

   x30 = json["d30"];//#1 nrf 1
   x31 = json["d31"];//#1 nrf 2
   x32 = json["d32"];//#1 nrf 3
   x33 = json["d33"];//#1 nrf 4
   x34 = json["d34"];//#1 nrf 5 
   x35 = json["d35"];//#1 nrf 6 
   x36 = json["d36"];//#1 nrf 7
   x37 = json["d37"];//#1 nrf 8

   x38 = json["d38"];//#2 nrf 1
   x39 = json["d39"];//#2 nrf 2
   x40 = json["d40"];//#2 nrf 3
   x41 = json["d41"];//#2 nrf 4
   x42 = json["d42"];//#2 nrf 5
   x43 = json["d43"];//#2 nrf 6
   x44 = json["d44"];//#2 nrf 7
   x45 = json["d45"];//#2 nrf 8

   x46 = json["d46"];//#3 nrf 1
   x47 = json["d47"];//#3 nrf 2
   x48 = json["d48"];//#3 nrf 3
   x49 = json["d49"];//#3 nrf 4
   x50 = json["d50"];//#3 nrf 5
   x51 = json["d51"];//#3 nrf 6
   x52 = json["d52"];//#3 nrf 7
   x53 = json["d53"];//#3 nrf 8

   x54 = json["d53"];//#4 nrf 1
   x55 = json["d55"];//#4 nrf 2
   x56 = json["d56"];//#4 nrf 3
   x57 = json["d57"];//#4 nrf 4
   x58 = json["d58"];//#4 nrf 5
   x59 = json["d59"];//#4 nrf 6
   x60 = json["d60"];//#4 nrf 7
   x61 = json["d61"];//#4 nrf 8

   x62 = json["d62"];//#5 nrf 1
   x63 = json["d63"];//#5 nrf 2
   x64 = json["d64"];//#5 nrf 3
   x65 = json["d65"];//#5 nrf 4
   x66 = json["d66"];//#5 nrf 5
   x67 = json["d67"];//#5 nrf 6
   x68 = json["d68"];//#5 nrf 7
   x69 = json["d69"];//#5 nrf 8

   x70 = json["d70"];//#6 nrf 1
   x71 = json["d71"];//#6 nrf 2
   x72 = json["d72"];//#6 nrf 3
   x73 = json["d73"];//#6 nrf 4
   x74 = json["d74"];//#6 nrf 5
   x75 = json["d75"];//#6 nrf 6
   x76 = json["d76"];//#6 nrf 7
   x77 = json["d77"];//#6 nrf 8

   x78 = json["d78"];//htu21 
   x79 = json["d79"];//ESP2 htu21 

   x80 = json["d80"];//CCS811 
   x81 = json["d81"];//HDC1080
   x82 = json["d82"];//BME280

   
} 
bool save3() {
  StaticJsonBuffer<1403> jsonBuffer;
  JsonObject& json = jsonBuffer.createObject();
  json["d1"] = x1;// on 1/ off 0  
  json["d2"] = x2;// интервал запроса
  json["d3"] = x3;// lux BH1750
  json["d4"] = x4;// bmp180 Temperature
  json["d5"] = x5;// mmHg
  json["d6"] = x6;// dht Temperature
  json["d7"] = x7;// dht Humidity
  json["d8"] = x8;// vcc 
  json["d9"] = x9;// WiFi.RSSI
  json["d10"] = x10;//INA219 V
  json["d11"] = x11;//INA219 mA
  json["d12"] = x12;//PZEM004T V
  json["d13"] = x13;//PZEM004T A
  json["d14"] = x14;//PZEM004T W
  json["d15"] = x15;//PZEM004T Wh
  json["d16"] = x16;//18b20 

  json["d17"] = x17;//
  json["d18"] = x18;//
  json["d19"] = x19;//
  json["d20"] = x20;//
  json["d21"] = x21;//
  json["d22"] = x22;//
  json["d23"] = x23;//
  json["d24"] = x24;//
  json["d25"] = x25;//
  json["d26"] = x26;//
  json["d27"] = x27;//
  json["d28"] = x28;//
  json["d29"] = x29;//


  json["d30"] = x30;//#1 nrf 1
  json["d31"] = x31;//#1 nrf 2
  json["d32"] = x32;//#1 nrf 3
  json["d33"] = x33;//#1 nrf 4
  json["d34"] = x34;//#1 nrf 5
  json["d35"] = x35;//#1 nrf 6
  json["d36"] = x36;//#1 nrf 7
  json["d37"] = x37;//#1 nrf 8

  json["d38"] = x38;//#2 nrf 1
  json["d39"] = x39;//#2 nrf 2
  json["d40"] = x40;//#2 nrf 3
  json["d41"] = x41;//#2 nrf 4
  json["d42"] = x42;//#2 nrf 5
  json["d43"] = x43;//#2 nrf 6
  json["d44"] = x44;//#2 nrf 7
  json["d45"] = x45;//#2 nrf 8

  json["d46"] = x46;//#3 nrf 1
  json["d47"] = x47;//#3 nrf 2
  json["d48"] = x48;//#3 nrf 3
  json["d49"] = x49;//#3 nrf 4
  json["d50"] = x50;//#3 nrf 5
  json["d51"] = x51;//#3 nrf 6
  json["d52"] = x52;//#3 nrf 7
  json["d53"] = x53;//#3 nrf 8

  json["d54"] = x54;//#4 nrf 1
  json["d55"] = x55;//#4 nrf 2
  json["d56"] = x56;//#4 nrf 3
  json["d57"] = x57;//#4 nrf 4
  json["d58"] = x58;//#4 nrf 5
  json["d59"] = x59;//#4 nrf 6
  json["d60"] = x60;//#4 nrf 7
  json["d61"] = x61;//#4 nrf 8

  json["d62"] = x62;//#5 nrf 1
  json["d63"] = x63;//#5 nrf 2
  json["d64"] = x64;//#5 nrf 3
  json["d65"] = x65;//#5 nrf 4
  json["d66"] = x66;//#5 nrf 5
  json["d67"] = x67;//#5 nrf 6
  json["d68"] = x68;//#5 nrf 7
  json["d69"] = x69;//#5 nrf 8

  json["d70"] = x70;//#6 nrf 1
  json["d71"] = x71;//#6 nrf 2
  json["d72"] = x72;//#6 nrf 3
  json["d73"] = x73;//#6 nrf 4
  json["d74"] = x74;//#6 nrf 5
  json["d75"] = x75;//#6 nrf 6
  json["d76"] = x76;//#6 nrf 7
  json["d77"] = x77;//#6 nrf 8

  json["d78"] = x78;//  
  json["d79"] = x79;// 

  json["d80"] = x80;// 
  json["d81"] = x81;// 
  json["d82"] = x82;// 
  File htm3 = SPIFFS.open("/htm3.json", "w");
  if (!htm3) {   
    return false;
  }
  json.printTo(htm3);
  return true;
}

void htm3xml(){
String  url1="<?xml version='1.0'?>";
        url1+="<Donnees>"; 
        url1+="<q1>";
        url1+=x1;// on 1/ off 0 
        url1+="</q1>";
        url1+="<q2>";
        url1+=p3;// интервал запроса
        url1+="</q2>";
        url1+="<q3>";
        url1+=x3;//lux BH1750
        url1+="</q3>";
        url1+="<q4>";
        url1+=x4;//bmp180 Temperature
        url1+="</q4>";
        url1+="<q5>";
        url1+=x5;// mmHg
        url1+="</q5>";
        url1+="<q6>";
        url1+=x6;//dht Temperature
        url1+="</q6>";
        url1+="<q7>";
        url1+=x7;//dht Humidity
        url1+="</q7>";
        url1+="<q8>";
        url1+=x8;//vcc  
        url1+="</q8>";
        url1+="<q9>";
        url1+=x9;//WiFi.RSSI
        url1+="</q9>";        
        url1+="<q10>";
        url1+=x10;//INA219 V
        url1+="</q10>";
        url1+="<q11>";
        url1+=x11;//INA219 mA
        url1+="</q11>";
        url1+="<q12>";
        url1+=x12;//PZEM004T V
        url1+="</q12>";
        url1+="<q13>";
        url1+=x13;//PZEM004T A
        url1+="</q13>";
        url1+="<q14>";
        url1+=x14;//PZEM004T W
        url1+="</q14>";
        url1+="<q15>";
        url1+=x15; //PZEM004T Wh
        url1+="</q15>";
        url1+="<q16>";
        url1+=x16;//18b20 
        url1+="</q16>";   

        url1+="<q17>";
        url1+=x17;//  
        url1+="</q17>";  
        url1+="<q18>";
        url1+=x18;// 
        url1+="</q18>"; 
        url1+="<q19>";
        url1+=x19;// 
        url1+="</q19>";   
        url1+="<q20>";
        url1+=x20;// 
        url1+="</q20>";  
        url1+="<q21>";
        url1+=x21;// 
        url1+="</q21>";  
        url1+="<q22>";
        url1+=x22;// 
        url1+="</q22>";  
        url1+="<q23>";
        url1+=x23;// 
        url1+="</q23>";  
        url1+="<q24>";
        url1+=x24;// 
        url1+="</q24>";  
        url1+="<q25>";
        url1+=x25;// 
        url1+="</q25>"; 
        url1+="<q26>";
        url1+=x26;// 
        url1+="</q26>";   
        url1+="<q27>";
        url1+=x27;// 
        url1+="</q27>"; 
        url1+="<q28>";
        url1+=x28;// 
        url1+="</q28>"; 
        url1+="<q29>";
        url1+=x29;// 
        url1+="</q29>";   

        
        url1+="<q30>";
        url1+=x30;// 
        url1+="</q30>";  
        url1+="<q31>";
        url1+=x31;// 
        url1+="</q31>";  
        url1+="<q32>";
        url1+=x32;// 
        url1+="</q32>";  
        url1+="<q33>";
        url1+=x33;// 
        url1+="</q33>";
        url1+="<q34>";
        url1+=x34;//  
        url1+="</q34>";    
        url1+="<q35>";
        url1+=x35;//  
        url1+="</q35>"; 
        url1+="<q36>";
        url1+=x36;//  
        url1+="</q36>";  
        url1+="<q37>";
        url1+=x37;//  
        url1+="</q37>"; 
        url1+="<q38>";
        url1+=x38;//  
        url1+="</q38>";  
        url1+="<q39>";
        url1+=x39;//  
        url1+="</q39>"; 
        url1+="<q40>";
        url1+=x40;//  
        url1+="</q40>"; 
        url1+="<q41>";
        url1+=x41;//  
        url1+="</q41>";
        url1+="<q42>";
        url1+=x42;//  
        url1+="</q42>";    
        url1+="<q43>";
        url1+=x43;//  
        url1+="</q43>"; 
        url1+="<q44>";
        url1+=x44;//  
        url1+="</q44>";  
        url1+="<q45>";
        url1+=x45;//  
        url1+="</q45>"; 
        url1+="<q46>";
        url1+=x46;//  
        url1+="</q46>";  
        url1+="<q47>";
        url1+=x47;//  
        url1+="</q47>"; 
        url1+="<q48>";
        url1+=x48;//  
        url1+="</q48>"; 
        url1+="<q49>";
        url1+=x49;//  
        url1+="</q49>";
        url1+="<q50>";
        url1+=x50;//  
        url1+="</q50>";    
        url1+="<q51>";
        url1+=x51;//  
        url1+="</q51>"; 
        url1+="<q52>";
        url1+=x52;//  
        url1+="</q52>";  
        url1+="<q53>";
        url1+=x53;//  
        url1+="</q53>"; 
        url1+="<q54>";
        url1+=x54;//  
        url1+="</q54>";  
        url1+="<q55>";
        url1+=x55;//  
        url1+="</q55>"; 
        url1+="<q56>";
        url1+=x56;//  
        url1+="</q56>"; 
        url1+="<q57>";
        url1+=x57;//  
        url1+="</q57>";
        url1+="<q58>";
        url1+=x58;//  
        url1+="</q58>";
        url1+="<q59>";
        url1+=x59;//  
        url1+="</q59>";
        url1+="<q60>";
        url1+=x60;//  
        url1+="</q60>";
        url1+="<q61>";
        url1+=x61;//  
        url1+="</q61>";
        url1+="<q62>";
        url1+=x62;//  
        url1+="</q62>";
        url1+="<q63>";
        url1+=x63;//  
        url1+="</q63>";
        url1+="<q64>";
        url1+=x64;//  
        url1+="</q64>";
        url1+="<q65>";
        url1+=x65;//  
        url1+="</q65>";
        url1+="<q66>";
        url1+=x66;//  
        url1+="</q66>";
        url1+="<q67>";
        url1+=x67;//  
        url1+="</q67>";
        url1+="<q68>";
        url1+=x68;//  
        url1+="</q68>";
        url1+="<q69>";
        url1+=x69;//  
        url1+="</q69>";
        url1+="<q70>";
        url1+=x70;//  
        url1+="</q70>";
        url1+="<q71>";
        url1+=x71;//  
        url1+="</q71>";
        url1+="<q72>";
        url1+=x72;//  
        url1+="</q72>";
        url1+="<q73>";
        url1+=x73;//  
        url1+="</q73>";
        url1+="<q74>";
        url1+=x74;//  
        url1+="</q74>";
        url1+="<q75>";
        url1+=x75;//  
        url1+="</q75>";
        url1+="<q76>";
        url1+=x76;//  
        url1+="</q76>";
        url1+="<q77>";
        url1+=x77;//  
        url1+="</q77>";
        url1+="<q78>";
        url1+=x78;//  
        url1+="</q78>";
        url1+="<q79>";
        url1+=x79;//  
        url1+="</q79>";
        url1+="<q80>";
        url1+=x80;//  
        url1+="</q80>";
        url1+="<q81>";
        url1+=x81;//  
        url1+="</q81>";
        url1+="<q82>";
        url1+=x82;//  
        url1+="</q82>";
        url1+="</Donnees>"; 
server.send(200,"text/xml",url1);
}         
void yt3(){
  t3=1;
}
void narodmon() {
   if (n3 == 1){   
      dhttest();                     
      }
     String  url="#" + WiFi.macAddress() + " \r\n";
         if (x9 == 1){   
           url+= "#WIFI#";  
           url+=  WiFi.RSSI();    
           url+= "#RSSI\r\n";      
              }
       if (n9 == 1){//CCS811 
           ccS811_test();
           if (x80 == 1){  
           url+= "#CO2#";  
           url+=  ccs.geteCO2();    
           url+= "#CO2\r\n";  
           url+= "#TVOC#";  
           url+=  ccs.getTVOC();    
           url+= "#TVOC\r\n";  
            }         
           }   
         if (n10 == 1){//HDC1080 
           if (x81 == 1){  
           url+= "#T12#";  
           url+=  hdc1080.readTemperature();    
           url+= "#hdc1080\r\n";  
           url+= "#H12#";  
           url+=  hdc1080.readHumidity();    
           url+= "#hdc1080\r\n";  
            }         
           }   
           if (n11 == 1){//bme280
               bme280test();
           if (x82 == 1){  
           url+= "#P13#";  
           url+=  bme280_pres;    
           url+= "#bme280\r\n"; 
           url+= "#T13#";  
           url+=  bme280_temp;    
           url+= "#bme280\r\n";  
           url+= "#H13#";  
           url+=  bme280_hum;    
           url+= "#bme280\r\n";  
            }         
           }   

           
       if (x8 == 1){   
           url+= "#U1#";  
           float vcc1 = ESP.getVcc();
           String vcc;  
           vcc += vcc1/1000,2; 
           url+=  vcc;
           url+= "#vcc\r\n";          
              }
   if (n2 == 1){  
         if (x4 == 1){          
           url+= "#T1#";  
           url+=  bmp.readTemperature();    
           url+= "#bmp180\r\n"; 
             } 
         if (x5 == 1){  
           url+= "#P1#";  
           url+=  bmp.readPressure()/ 133.3;    
           url+= "#bmp180\r\n";            
             } 
          }
    if (n1 == 1){    
        if (x3 == 1){ 
           bh1750test();    
           url+= "#L1#";            
           url+=  lux;    
           url+= "#BH1750\r\n";            
             } 
          }
     if (n3 == 1){
        if (x6 == 1){   
           url+= "#T2#";  
           url+=  t;    
           url+= "#dht\r\n";    
            } 
        if (x7 == 1){  
           url+= "#H1#";  
           url+=  h;    
           url+= "#dht\r\n";          
            }
           }
        if (n4 == 1){
           ina219test();
        if (x10 == 1){   
           url+= "#U2#";  
           url+=  loadvoltage;    
           url+= "#ina219\r\n";    
            } 
        if (x11 == 1){  
           url+= "#I2#";  
           url+=  current_mA;    
           url+= "#ina219\r\n";          
            }
           }
         if (n5 == 1){
           pzem004ttest();
        if (x12 == 1){   
           url+= "#U3#";  
           url+=  v;  // PZEM004T V 
           url+= "#PZEM004T\r\n";    
            } 
        if (x13 == 1){  
           url+= "#I3#";  
           url+=  i;  // PZEM004T A 
           url+= "#PZEM004T\r\n";          
            }
        if (x14 == 1){  
           url+= "#W#";  
           url+=  p;  //PZEM004T W  
           url+= "#PZEM004T\r\n";          
            }
       if (x15 == 1){  
           url+= "#WH#";  
           url+=  e; //PZEM004T Wh   
           url+= "#PZEM004T\r\n";          
            }
           }
       if (n6 == 1){
           dstest();
       if (x16 == 1){   
           url+= "#T3#";  
           url+=  temp;  // 18B20 
           url+= "#DS18B20\r\n";   
            } 
           }
       if (s1 == 1){     
               
        if (x17 == 1){   
           url+= "#L2#";            
           url+=  h1;    
           url+= "#BH1750\r\n";           
            }     
        if (x18 == 1){   
           url+= "#T5#";  
           url+=  h2;    
           url+= "#bmp180\r\n"; 
            } 
        if (x19 == 1){   
           url+= "#P5#";  
           url+=  h3;    
           url+= "#bmp180\r\n";     
            } 
        if (x20 == 1){   
           url+= "#T6#";  
           url+=  h4;    
           url+= "#dht\r\n";      
            } 
        if (x21 == 1){   
            url+= "#H5#";  
           url+=  h5;    
           url+= "#dht\r\n";       
            }
        if (x22 == 1){   
           url+= "#U5#";  
           url+=  h6;    
           url+= "#ina219\r\n";   
            } 
        if (x23 == 1){   
           url+= "#U5#";  
           url+=  h6;    
           url+= "#ina219\r\n";   
            } 
        
        if (x24 == 1){   
           url+= "#U6#";  
           url+=  h8;     
           url+= "#PZEM004T\r\n";   
            } 
        if (x25 == 1){   
           url+= "#I6#";  
           url+=  h9;  
           url+= "#PZEM004T\r\n";      
            } 
        if (x26 == 1){   
           url+= "#W5#";  
           url+=  h10;  
           url+= "#PZEM004T\r\n";  
            } 
        if (x27 == 1){   
           url+= "#WH5#";  
           url+=  h11; 
           url+= "#PZEM004T\r\n";     
            } 
        if (x28 == 1){   
           url+= "#T8#";  
           url+=  h12;   
           url+= "#DS18B20\r\n";    
            } 
        if (x29 == 1){   
           url+= "#WIFI2#";  
           url+=  h13;    
           url+= "#RSSI2\r\n";   
            }     
        if (x79 == 1){   
           url+= "#T11#";  
           url+=  h14;    
           url+= "#T11\r\n";  
           url+= "#H11#";  
           url+=  h15;    
           url+= "#H11\r\n";  
            }   

           
              
}
     if (v1 == 1){
        if (x30 == 1){   
           url+= "#nrf11#";  
           url+=  vr0_1;    
           url+= "#nrf11\r\n";   
           }
        if (x31 == 1){   
           url+= "#nrf12#";  
           url+=  vr0_2;    
           url+= "#nrf12\r\n";   
           }
       if (x32 == 1){   
           url+= "#nrf13#";  
           url+=  vr0_3;    
           url+= "#nrf13\r\n";   
           }
       if (x33 == 1){   
           url+= "#nrf14#";  
           url+=  vr0_4;    
           url+= "#nrf14\r\n";   
           }
       if (x34 == 1){   
           url+= "#nrf15#";  
           url+=  vr0_5;    
           url+= "#nrf15\r\n";   
           }
       if (x35 == 1){  
           url+= "#nrf16#";  
           url+=  vr0_6;    
           url+= "#nrf16\r\n";   
           }
       if (x36 == 1){   
           url+= "#nrf17#";  
           url+=  vr0_7;    
           url+= "#nrf17\r\n";   
           }
       if (x37 == 1){   
           url+= "#nrf18#";  
           url+=  vr0_8;    
           url+= "#nrf18\r\n";   
           }
       if (x38 == 1){   
           url+= "#nrf21#";  
           url+=  vr1_1;    
           url+= "#nrf21\r\n";   
           }
       if (x39 == 1){   
           url+= "#nrf22#";  
           url+=  vr1_2;    
           url+= "#nrf22\r\n";   
           }
       if (x40 == 1){   
           url+= "#nrf23#";  
           url+=  vr1_3;    
           url+= "#nrf23\r\n";   
           }
       if (x41 == 1){   
           url+= "#nrf24#";  
           url+=  vr1_4;    
           url+= "#nrf24\r\n";   
           }
       if (x42 == 1){   
           url+= "#nrf25#";  
           url+=  vr1_5;    
           url+= "#nrf25\r\n";   
           }
       if (x43 == 1){   
           url+= "#nrf26#";  
           url+=  vr1_6;    
           url+= "#nrf26\r\n";   
           }
       if (x44 == 1){   
           url+= "#nrf27#";  
           url+=  vr1_7;    
           url+= "#nrf27\r\n";   
           }
       if (x45 == 1){   
           url+= "#nrf28#";  
           url+=  vr1_8;    
           url+= "#nrf28\r\n";   
           }
       if (x46 == 1){   
           url+= "#nrf31#";  
           url+=  vr2_1;    
           url+= "#nrf31\r\n";   
           }
       if (x47 == 1){   
           url+= "#nrf32#";  
           url+=  vr2_2;    
           url+= "#nrf32\r\n";   
           }
       if (x48 == 1){   
           url+= "#nrf33#";  
           url+=  vr2_3;    
           url+= "#nrf33\r\n";   
           }
       if (x49 == 1){   
           url+= "#nrf34#";  
           url+=  vr2_4;    
           url+= "#nrf34\r\n";   
           }
       if (x50 == 1){   
           url+= "#nrf35#";  
           url+=  vr2_5;    
           url+= "#nrf35\r\n";   
           }
       if (x51 == 1){   
           url+= "#nrf36#";  
           url+=  vr2_6;    
           url+= "#nrf36\r\n";   
           }
       if (x52 == 1){   
           url+= "#nrf37#";  
           url+=  vr2_7;    
           url+= "#nrf37\r\n";   
           }
       if (x53 == 1){   
           url+= "#nrf38#";  
           url+=  vr2_8;    
           url+= "#nrf38\r\n";   
           }
       if (x54 == 1){   
           url+= "#nrf41#";  
           url+=  vr3_1;    
           url+= "#nrf41\r\n";   
           }
       if (x55 == 1){   
           url+= "#nrf42#";  
           url+=  vr3_2;    
           url+= "#nrf42\r\n";   
           }
       if (x56 == 1){   
           url+= "#nrf43#";  
           url+=  vr3_3;    
           url+= "#nrf43\r\n";   
           }
       if (x57 == 1){   
           url+= "#nrf44#";  
           url+=  vr3_4;    
           url+= "#nrf44\r\n";   
           }
       if (x58 == 1){   
           url+= "#nrf45#";  
           url+=  vr3_5;    
           url+= "#nrf45\r\n";   
           }
       if (x59 == 1){   
           url+= "#nrf46#";  
           url+=  vr3_6;    
           url+= "#nrf46\r\n";   
           }
       if (x60 == 1){   
           url+= "#nrf47#";  
           url+=  vr3_7;    
           url+= "#nrf47\r\n";   
           }
       if (x61 == 1){   
           url+= "#nrf48#";  
           url+=  vr3_8;    
           url+= "#nrf48\r\n";   
           }
       if (x62 == 1){   
           url+= "#nrf51#";  
           url+=  vr4_1;    
           url+= "#nrf51\r\n";   
           }
       if (x63 == 1){   
           url+= "#nrf52#";  
           url+=  vr4_2;    
           url+= "#nrf52\r\n";   
           }
       if (x64 == 1){   
           url+= "#nrf53#";  
           url+=  vr4_3;    
           url+= "#nrf53\r\n";   
           }
       if (x65 == 1){   
           url+= "#nrf54#";  
           url+=  vr4_4;    
           url+= "#nrf54\r\n";   
           }
       if (x66 == 1){   
           url+= "#nrf55#";  
           url+=  vr4_5;    
           url+= "#nrf55\r\n";   
           }
       if (x67 == 1){   
           url+= "#nrf56#";  
           url+=  vr4_6;    
           url+= "#nrf56\r\n";   
           }
       if (x68 == 1){   
           url+= "#nrf57#";  
           url+=  vr4_7;    
           url+= "#nrf57\r\n";   
           }
       if (x69 == 1){   
           url+= "#nrf58#";  
           url+=  vr4_8;    
           url+= "#nrf58\r\n";   
           }
       if (x70 == 1){   
           url+= "#nrf61#";  
           url+=  vr5_1;    
           url+= "#nrf61\r\n";   
           }
       if (x71 == 1){   
           url+= "#nrf62#";  
           url+=  vr5_2;    
           url+= "#nrf62\r\n";   
           }
       if (x72 == 1){   
           url+= "#nrf63#";  
           url+=  vr5_3;    
           url+= "#nrf63\r\n";   
           } 
       if (x73 == 1){   
           url+= "#nrf64#";  
           url+=  vr5_4;    
           url+= "#nrf64\r\n";   
           }
       if (x74 == 1){   
           url+= "#nrf65#";  
           url+=  vr5_5;    
           url+= "#nrf65\r\n";   
           }
       if (x75 == 1){   
           url+= "#nrf66#";  
           url+=  vr5_6;    
           url+= "#nrf66\r\n";   
           }
       if (x76 == 1){   
           url+= "#nrf67#";  
           url+=  vr5_7;    
           url+= "#nrf67\r\n";   
           }
       if (x77 == 1){   
           url+= "#nrf68#";  
           url+=  vr5_8;    
           url+= "#nrf68\r\n";   
           }
         }
           if (x78 == 1){   
            htu21test();
           url+= "#T8#";  
           url+=  htu21temp;    
           url+= "#T8\r\n";  
           url+= "#H8#";  
           url+=  htu21hum;    
           url+= "#H8\r\n";  
           }
         url+= "##";          
         WiFiClient cclient; 
         if (!cclient.connect(hostnarodmon, httpPortnarodmon)) {
              Serial.println("connection failed");
           }
            Serial.println("narodmon");
            cclient.print(url); 
            cclient.stop();
}
