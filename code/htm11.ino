void api11() {
     v1 = server.arg("v1").toInt();// on/off 
     v2 = server.arg("v2").toInt();// слушать 0/передавать 1
     v3 = server.arg("v3").toInt();// канал от 0 до 127  
     v4 = server.arg("v4").toInt();// скорость передачи 0-250, 1-1MBPS, 2-2MBP
     v5 = server.arg("v5").toInt();// мощность 0 RF24_PA_MIN=-18dBm, 1 RF24_PA_LOW=-12dBm, 2 RF24_PA_HIGH=-6dBm, 3 RF24_PA_MAX=0dBm 
     v6 = server.arg("v6").toInt();// 1 -резерв-
     v7 = server.arg("v7").toInt();// 2 NRF#2 mqtt led room1  
     v8 = server.arg("v8").toInt();// 3 -резерв-    
     v9 = server.arg("v9").toInt();// 4 -резерв-
     v10 = server.arg("v10").toInt();//5 -резерв- 
     v11 = server.arg("v11").toInt();//6 -резерв-                              
     save11();//  запись в память модуля
     server.send(200, "text/plain", "OK");
}
void openfilehtm11() {
  File htm11 = SPIFFS.open("/htm11.json", "r");
  size_t size = htm11.size();
  std::unique_ptr<char[]> buf(new char[size]);
  htm11.readBytes(buf.get(), size);
  StaticJsonBuffer<400> jsonBuffer;
  JsonObject& json = jsonBuffer.parseObject(buf.get());
   v1 = json["d1"];// 
   v2 = json["d2"];//  
   v3 = json["d3"];// 
   v4 = json["d4"];//  
   v5 = json["d5"];//  
   v6 = json["d6"];//  
   v7 = json["d7"];//
   v8 = json["d8"];//
   v9 = json["d9"];//
   v10 = json["d10"];//
   v11 = json["d11"];//
} 

bool save11() {
  StaticJsonBuffer<400> jsonBuffer;
  JsonObject& json = jsonBuffer.createObject();
  json["d1"] = v1;// 
  json["d2"] = v2;// 
  json["d3"] = v3;//
  json["d4"] = v4;//  
  json["d5"] = v5;//  
  json["d6"] = v6;//  
  json["d7"] = v7;// 
  json["d8"] = v8;// 
  json["d9"] = v9;//  
  json["d10"] = v10;//  
  json["d11"] = v11;// 
  File htm11 = SPIFFS.open("/htm11.json", "w");
  if (!htm11) {   
    return false;
  }
  json.printTo(htm11);
  return true;
}

void htm11xml(){ 
String  url1="<?xml version='1.0'?>";
        url1+="<Donnees>"; 
        url1+="<q1>";
        url1+=v1;// 
        url1+="</q1>";
        url1+="<q2>";
        url1+=v2;// 
        url1+="</q2>";
        url1+="<q3>";
        url1+=v3;//
        url1+="</q3>";
        url1+="<q4>";
        url1+=v4;// 
        url1+="</q4>";
        url1+="<q5>";
        url1+=v5;//  
        url1+="</q5>";
        url1+="<q6>";
        url1+=v6;//  
        url1+="</q6>";
        url1+="<q7>";
        url1+=v7;//  
        url1+="</q7>";
        url1+="<q8>";
        url1+=v8;//  
        url1+="</q8>";   
        url1+="<q9>";
        url1+=vr0;// #1 nrf24 ++
        url1+="</q9>";  
        url1+="<q10>";
        url1+=vr0_1;//  
        url1+="</q10>"; 
        url1+="<q11>";
        url1+=vr0_2;//  
        url1+="</q11>";  
        url1+="<q12>";
        url1+=vr0_3;//  
        url1+="</q12>";  
        url1+="<q13>";
        url1+=vr0_4;//  
        url1+="</q13>"; 
        url1+="<q14>";
        url1+=vr0_5;//  
        url1+="</q14>"; 
        url1+="<q15>";
        url1+=vr0_6;//  
        url1+="</q15>";  
        url1+="<q16>";
        url1+=vr0_7;//  
        url1+="</q16>";
        url1+="<q17>";
        url1+=vr0_8;//  
        url1+="</q17>";    
        url1+="<q18>";
        url1+=vr1_1;//  
        url1+="</q18>";    
        url1+="<q19>";
        url1+=vr1_2;//  
        url1+="</q19>"; 
        url1+="<q20>";
        url1+=vr1_3;//  
        url1+="</q20>";  
        url1+="<q21>";
        url1+=vr1_4;//  
        url1+="</q21>"; 
        url1+="<q22>";
        url1+=vr1_5;//  
        url1+="</q22>";  
        url1+="<q23>";
        url1+=vr1_6;//  
        url1+="</q23>"; 
        url1+="<q24>";
        url1+=vr1_7;//  
        url1+="</q24>"; 
        url1+="<q25>";
        url1+=vr1_8;//  
        url1+="</q25>"; 
        url1+="<q26>";
        url1+=vr2_1;//  
        url1+="</q26>";    
        url1+="<q27>";
        url1+=vr2_2;//  
        url1+="</q27>"; 
        url1+="<q28>";
        url1+=vr2_3;//  
        url1+="</q28>";  
        url1+="<q29>";
        url1+=vr2_4;//  
        url1+="</q29>"; 
        url1+="<q30>";
        url1+=vr2_5;//  
        url1+="</q30>";  
        url1+="<q31>";
        url1+=vr2_6;//  
        url1+="</q31>"; 
        url1+="<q32>";
        url1+=vr2_7;//  
        url1+="</q32>"; 
        url1+="<q33>";
        url1+=vr2_8;//  
        url1+="</q33>";
        url1+="<q34>";
        url1+=vr3_1;//  
        url1+="</q34>";    
        url1+="<q35>";
        url1+=vr3_2;//  
        url1+="</q35>"; 
        url1+="<q36>";
        url1+=vr3_3;//  
        url1+="</q36>";  
        url1+="<q37>";
        url1+=vr3_4;//  
        url1+="</q37>"; 
        url1+="<q38>";
        url1+=vr3_5;//  
        url1+="</q38>";  
        url1+="<q39>";
        url1+=vr3_6;//  
        url1+="</q39>"; 
        url1+="<q40>";
        url1+=vr3_7;//  
        url1+="</q40>"; 
        url1+="<q41>";
        url1+=vr3_8;//  
        url1+="</q41>";
        url1+="<q42>";
        url1+=vr4_1;//  
        url1+="</q42>";    
        url1+="<q43>";
        url1+=vr4_2;//  
        url1+="</q43>"; 
        url1+="<q44>";
        url1+=vr4_3;//  
        url1+="</q44>";  
        url1+="<q45>";
        url1+=vr4_4;//  
        url1+="</q45>"; 
        url1+="<q46>";
        url1+=vr4_5;//  
        url1+="</q46>";  
        url1+="<q47>";
        url1+=vr4_6;//  
        url1+="</q47>"; 
        url1+="<q48>";
        url1+=vr4_7;//  
        url1+="</q48>"; 
        url1+="<q49>";
        url1+=vr4_8;//  
        url1+="</q49>";
        url1+="<q50>";
        url1+=vr5_1;//  
        url1+="</q50>";    
        url1+="<q51>";
        url1+=vr5_2;//  
        url1+="</q51>"; 
        url1+="<q52>";
        url1+=vr5_3;//  
        url1+="</q52>";  
        url1+="<q53>";
        url1+=vr5_4;//  
        url1+="</q53>"; 
        url1+="<q54>";
        url1+=vr5_5;//  
        url1+="</q54>";  
        url1+="<q55>";
        url1+=vr5_6;//  
        url1+="</q55>"; 
        url1+="<q56>";
        url1+=vr5_7;//  
        url1+="</q56>"; 
        url1+="<q57>";
        url1+=vr5_8;//  
        url1+="</q57>";
        url1+="<q58>";
        url1+=vr1;//  
        url1+="</q58>";
        url1+="<q59>";
        url1+=vr2;//  
        url1+="</q59>";
        url1+="<q60>";
        url1+=vr3;//  
        url1+="</q60>";
        url1+="<q61>";
        url1+=vr4;//  
        url1+="</q61>";
        url1+="<q62>";
        url1+=vr5;//  
        url1+="</q62>";
        url1+="<q63>";
        url1+=v9;//  
        url1+="</q63>";
        url1+="<q64>";
        url1+=v10;//  
        url1+="</q64>";
        url1+="<q65>";
        url1+=v11;//  
        url1+="</q65>";
        url1+="</Donnees>"; 
server.send(200,"text/xml",url1);
} 
void nrfcmd() {   
     g1 = server.arg("g1").toInt();//id
     g2 = server.arg("g2").toInt();//cmd 1
     g3=3;
     g4 = server.arg("g4").toInt();//cmd 2
     g5 = server.arg("g5").toInt();//cmd 3
     g6 = server.arg("g6").toInt();//cmd 4
     g7 = server.arg("g7").toInt();//cmd 5
     g8 = server.arg("g8").toInt();//cmd 6
     g9 = server.arg("g9").toInt();//cmd 7
     g10 = server.arg("g10").toInt();//cmd 8
     server.send(200, "text/plain", "OK");
} 

void nrfcmd1on() { 
      radio.stopListening();     
      radio.openWritingPipe(pipe0);        
      float data[15];
      int rr=1;   
      data[0] = g2; //  
      data[1] = rr; //  
      data[2] = rr; // 
      data[3] = g6; //   
      data[4] = g7; //  
      data[5] = g8; //  
      data[6] = g9; //  
      data[7] = g10;// 
  radio.write(&data, sizeof(data));   
  radio.startListening();
     server.send(200, "text/plain", "OK");
     }
     void nrfcmd1off() { 
      radio.stopListening();     
      radio.openWritingPipe(pipe0);        
      float data[15];
      int rr=0;   
      data[0] = g2; //  
      data[1] = rr; //  
      data[2] = rr; // 
      data[3] = g6; //   
      data[4] = g7; //  
      data[5] = g8; //  
      data[6] = g9; //  
      data[7] = g10;// 
  radio.write(&data, sizeof(data));   
  radio.startListening();
     server.send(200, "text/plain", "OK");
     }
