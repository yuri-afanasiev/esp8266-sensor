void starttest() {
     p3 = x2 / 60;
     if (x1 == 1){
     y3.attach(x2, yt3);// narodmon
     t3=0;
     Serial.println("START narodmon");
     }     
     if (b1 == 1){
     y5.attach(b2, yt5);// thingspeak
     t5=0;
     Serial.println("START thingspeak");
     }
     if (f1 == 1){
     y7.attach(f2, yt7);// myserver
     t7=0;
     Serial.println("START myserver");
     }     
     if (k1 == 1){
     y8.attach(k2, yt8);
     Serial.println("START LCD 16 2");
     }
   
      if (tz1 == 1){
      switch (tz3) {
      //ads48  
      case 0:
      ads48.setGain(GAIN_TWOTHIRDS);  // 2/3x gain +/- 6.144V  1 bit = 3mV      0.1875mV (default)
      break;
      case 1:
      ads48.setGain(GAIN_ONE);        // 1x gain   +/- 4.096V  1 bit = 2mV      0.125mV
      break;
      case 2:
      ads48.setGain(GAIN_TWO);        // 2x gain   +/- 2.048V  1 bit = 1mV      0.0625mV
      break; 
      case 3:
      ads48.setGain(GAIN_FOUR);       // 4x gain   +/- 1.024V  1 bit = 0.5mV    0.03125mV 
      break;
      case 4:
      ads48.setGain(GAIN_EIGHT);      // 8x gain   +/- 0.512V  1 bit = 0.25mV   0.015625mV
      break;
      case 5:
      ads48.setGain(GAIN_SIXTEEN);    // 16x gain  +/- 0.256V  1 bit = 0.125mV  0.0078125mV 
      break;
      } 
      ads48.begin();
      }

      if (tz2 == 1){
      //ads49
      switch (tz4) {
      case 0:
      ads49.setGain(GAIN_TWOTHIRDS);  // 2/3x gain +/- 6.144V  1 bit = 3mV      0.1875mV (default)
      break;
      case 1:
      ads49.setGain(GAIN_ONE);        // 1x gain   +/- 4.096V  1 bit = 2mV      0.125mV
      break;
      case 2:
      ads49.setGain(GAIN_TWO);        // 2x gain   +/- 2.048V  1 bit = 1mV      0.0625mV
      break; 
      case 3:
      ads49.setGain(GAIN_FOUR);       // 4x gain   +/- 1.024V  1 bit = 0.5mV    0.03125mV 
      break;
      case 4:
      ads49.setGain(GAIN_EIGHT);      // 8x gain   +/- 0.512V  1 bit = 0.25mV   0.015625mV
      break;
      case 5:
      ads49.setGain(GAIN_SIXTEEN);    // 16x gain  +/- 0.256V  1 bit = 0.125mV  0.0078125mV 
      break;
      } 
      ads49.begin();
     } 
     if (v1 == 1){
     String  vsetDataRate;     
     SPI.setHwCs(true);
     SPI.begin();
     SPI.setDataMode(SPI_MODE0);
     SPI.setBitOrder(MSBFIRST);   
     radio.begin();                                         
     radio.setChannel(v3);
     switch (v4) {
      case 0:
      radio.setDataRate (RF24_250KBPS);
      break;
      case 1:
      radio.setDataRate (RF24_1MBPS);  
      break;
      case 2:
      radio.setDataRate (RF24_2MBPS); 
      break; 
      }   
      radio.setChannel(v3);   
      switch (v5) {
      case 0:
      radio.setPALevel (RF24_PA_MIN);   
      break;
      case 1:
      radio.setPALevel (RF24_PA_LOW);     
      break;
      case 2:
      radio.setPALevel (RF24_PA_HIGH);  
      break; 
      case 3:
      radio.setPALevel (RF24_PA_MAX);  
      break; 
      } 
     radio.openReadingPipe (0, pipe0); 
     radio.openReadingPipe (1, pipe1);  
     radio.openReadingPipe (2, pipe2);
     radio.openReadingPipe (3, pipe3);
     radio.openReadingPipe (4, pipe4);
     radio.openReadingPipe (5, pipe5);
     switch (v2) {
      case 0:
      radio.startListening(); 
      break;
      case 1:
      radio.stopListening(); 
      break;
      } 
     Serial.println("START nrf24l01");
   } 
}
void plan() {
     if (t3 == 1){          
     narodmon();   
     t3=0;   
     }      
     if (t5 == 1){          
     thingspeak();   
     t5=0;   
     } 
     if (t7 == 1){          
     myserver();   
     t7=0;   
     } 
     if (t8 == 1){          
     lcdtime();   
     t8=0;   
     }
     if (wz1 == 1){          
        if (wztest == 1){
            Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver(0x40);
            pwm.setPWM(wz2, 0,wz3);
            wztest=0;
        }
     }
    if (g3 == 3){ 
       radio.stopListening();
       switch (g1) {
       case 0:
       radio.openWritingPipe(pipe0); 
       break;
       case 1:
       radio.openWritingPipe(pipe1);  
       break;
       case 2:
       radio.openWritingPipe(pipe2);  
       break;
       case 3:
       radio.openWritingPipe(pipe3);  
       break;
       case 4:
       radio.openWritingPipe(pipe4);  
       break;
       case 5:
       radio.openWritingPipe(pipe5);  
       break;
       }  
      float data[15];   
      data[0] = g2; //  
      data[1] = g4; //  
      data[2] = g5; // 
      data[3] = g6; //   
      data[4] = g7; //  
      data[5] = g8; //  
      data[6] = g9; //  
      data[7] = g10;// 
  radio.write(&data, sizeof(data));  
  g3=0;
  radio.startListening();
     }
    
    if (v1 == 1){  
       if (g3 == 0){ 
        float data[8];  
        if (radio.available(&pipe)) {
        radio.read(&data, sizeof(data)); 
        if (pipe == 0){
           vr0++; 
           vr0_1=data[0]; 
           vr0_2=data[1];  
           vr0_3=data[2]; 
           vr0_4=data[3]; 
           vr0_5=data[4]; 
           vr0_6=data[5];
           vr0_7=data[6]; 
           vr0_8=data[7];  
         if (mqw1 == 1){
             String nrf0_1 =  String(vr0_1);
             String nrf0_2 =  String(vr0_2);
             String nrf0_3 =  String(vr0_3);
             String nrf0_4 =  String(vr0_4);
             String nrf0_5 =  String(vr0_5);
             String nrf0_6 =  String(vr0_6); 
             String nrf0_7 =  String(vr0_7);
             String nrf0_8 =  String(vr0_8);
             mqttclient.publish("nrf/1/1",nrf0_1);
             mqttclient.publish("nrf/1/2",nrf0_2);
             mqttclient.publish("nrf/1/3",nrf0_3);
             mqttclient.publish("nrf/1/4",nrf0_4);
             mqttclient.publish("nrf/1/5",nrf0_5);
             mqttclient.publish("nrf/1/6",nrf0_6);
             mqttclient.publish("nrf/1/7",nrf0_7);
             mqttclient.publish("nrf/1/8",nrf0_8);
            }
        }
       if (pipe == 1){
           vr1++; 
           vr1_1=data[0]; 
           vr1_2=data[1];  
           vr1_3=data[2]; 
           vr1_4=data[3]; 
           vr1_5=data[4]; 
           vr1_6=data[5];
           vr1_7=data[6]; 
           vr1_8=data[7];
           
           
            if (mqw1 == 1){
             String nrf1_1 =  String(vr1_1);
             String nrf1_2 =  String(vr1_2);
             String nrf1_3 =  String(vr1_3);
             String nrf1_4 =  String(vr1_4);
             String nrf1_5 =  String(vr1_5);
             String nrf1_6 =  String(vr1_6); 
             String nrf1_7 =  String(vr1_7);
             String nrf1_8 =  String(vr1_8);
             mqttclient.publish(top1+"nrf/2/1",nrf1_1);
             mqttclient.publish("nrf/2/2",nrf1_2);
             mqttclient.publish("nrf/2/3",nrf1_3);
             mqttclient.publish("nrf/2/4",nrf1_4);
             mqttclient.publish("nrf/2/5",nrf1_5);
             mqttclient.publish("nrf/2/6",nrf1_6);
             mqttclient.publish("nrf/2/7",nrf1_7);
             mqttclient.publish("nrf/2/8",nrf1_8);
             if (v7 == 1){
                String   nrf_top1_ws2812;
                nrf_top1_ws2812 += "{\"red\":\""+nrf1_1+ "\",\"green\":\""+nrf1_2+"\",\"blue\":\""+nrf1_3+ "\"}";  
                mqttclient.publish("/home/room1/ws2812",nrf_top1_ws2812);
                Serial.println(nrf_top1_ws2812);
               }             
           } 
          }
          if (pipe == 2){
           vr2++; 
           vr2_1=data[0]; 
           vr2_2=data[1];  
           vr2_3=data[2]; 
           vr2_4=data[3]; 
           vr2_5=data[4]; 
           vr2_6=data[5];
           vr2_7=data[6]; 
           vr2_8=data[7];
            if (mqw1 == 1){
             String nrf2_1 =  String(vr2_1);
             String nrf2_2 =  String(vr2_2);
             String nrf2_3 =  String(vr2_3);
             String nrf2_4 =  String(vr2_4);
             String nrf2_5 =  String(vr2_5);
             String nrf2_6 =  String(vr2_6); 
             String nrf2_7 =  String(vr2_7);
             String nrf2_8 =  String(vr2_8);
             mqttclient.publish("nrf/3/1",nrf2_1);
             mqttclient.publish("nrf/3/2",nrf2_2);
             mqttclient.publish("nrf/3/3",nrf2_3);
             mqttclient.publish("nrf/3/4",nrf2_4);
             mqttclient.publish("nrf/3/5",nrf2_5);
             mqttclient.publish("nrf/3/6",nrf2_6);
             mqttclient.publish("nrf/3/7",nrf2_7);
             mqttclient.publish("nrf/3/8",nrf2_8);
          // mqttclient.set_retain("nrf/3/8",nrf2_8);
            
             mqttclient.publish("nrf/3/8",nrf2_8);

            }
          }
          if (pipe == 3){
           vr3++; 
           vr3_1=data[0]; 
           vr3_2=data[1];  
           vr3_3=data[2]; 
           vr3_4=data[3]; 
           vr3_5=data[4]; 
           vr3_6=data[5];
           vr3_7=data[6]; 
           vr3_8=data[7];
            if (mqw1 == 1){
             String nrf3_1 =  String(vr3_1);
             String nrf3_2 =  String(vr3_2);
             String nrf3_3 =  String(vr3_3);
             String nrf3_4 =  String(vr3_4);
             String nrf3_5 =  String(vr3_5);
             String nrf3_6 =  String(vr3_6); 
             String nrf3_7 =  String(vr3_7);
             String nrf3_8 =  String(vr3_8);
             mqttclient.publish("nrf/4/1",nrf3_1);
             mqttclient.publish("nrf/4/2",nrf3_2);
             mqttclient.publish("nrf/4/3",nrf3_3);
             mqttclient.publish("nrf/4/4",nrf3_4);
             mqttclient.publish("nrf/4/5",nrf3_5);
             mqttclient.publish("nrf/4/6",nrf3_6);
             mqttclient.publish("nrf/4/7",nrf3_7);
             mqttclient.publish("nrf/4/8",nrf3_8);
            }
          }
          if (pipe == 4){
           vr4++; 
           vr4_1=data[0]; 
           vr4_2=data[1];  
           vr4_3=data[2]; 
           vr4_4=data[3]; 
           vr4_5=data[4]; 
           vr4_6=data[5];
           vr4_7=data[6]; 
           vr4_8=data[7];
            if (mqw1 == 1){
             String nrf4_1 =  String(vr4_1);
             String nrf4_2 =  String(vr4_2);
             String nrf4_3 =  String(vr4_3);
             String nrf4_4 =  String(vr4_4);
             String nrf4_5 =  String(vr4_5);
             String nrf4_6 =  String(vr4_6); 
             String nrf4_7 =  String(vr4_7);
             String nrf4_8 =  String(vr4_8);
             mqttclient.publish("nrf/5/1",nrf4_1);
             mqttclient.publish("nrf/5/2",nrf4_2);
             mqttclient.publish("nrf/5/3",nrf4_3);
             mqttclient.publish("nrf/5/4",nrf4_4);
             mqttclient.publish("nrf/5/5",nrf4_5);
             mqttclient.publish("nrf/5/6",nrf4_6);
             mqttclient.publish("nrf/5/7",nrf4_7);
             mqttclient.publish("nrf/5/8",nrf4_8);
            }
          }
          if (pipe == 5){
           vr5++; 
           vr5_1=data[0]; 
           vr5_2=data[1];  
           vr5_3=data[2]; 
           vr5_4=data[3]; 
           vr5_5=data[4]; 
           vr5_6=data[5];
           vr5_7=data[6]; 
           vr5_8=data[7];
            if (mqw1 == 1){
             String nrf5_1 =  String(vr5_1);
             String nrf5_2 =  String(vr5_2);
             String nrf5_3 =  String(vr5_3);
             String nrf5_4 =  String(vr5_4);
             String nrf5_5 =  String(vr5_5);
             String nrf5_6 =  String(vr5_6); 
             String nrf5_7 =  String(vr5_7);
             String nrf5_8 =  String(vr5_8);
             mqttclient.publish("nrf/6/1",nrf5_1);
             mqttclient.publish("nrf/6/2",nrf5_2);
             mqttclient.publish("nrf/6/3",nrf5_3);
             mqttclient.publish("nrf/6/4",nrf5_4);
             mqttclient.publish("nrf/6/5",nrf5_5);
             mqttclient.publish("nrf/6/6",nrf5_6);
             mqttclient.publish("nrf/6/7",nrf5_7);
             mqttclient.publish("nrf/6/8",nrf5_8);
            }
          }
       }
     }   
   } 
}
