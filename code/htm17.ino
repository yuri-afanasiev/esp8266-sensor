void api17() {
     ws5 = server.arg("red").toInt();//Kрасный  
     ws6 = server.arg("green").toInt();//Зеленый   
     ws7 = server.arg("blue").toInt();//Синий    
     ws2812test();
     server.send(200, "text/plain", "OK");
}
bool save17() {
  StaticJsonBuffer<400> jsonBuffer;
  JsonObject& json = jsonBuffer.createObject();
  json["d5"] = ws5;//
  json["d6"] = ws6;//
  json["d7"] = ws7;//
  File htm17 = SPIFFS.open("/htm17.json", "w");
  if (!htm17) {   
    return false;
  }
  json.printTo(htm17);
  return true;
}

 void openfilehtm17() {
  File htm17 = SPIFFS.open("/htm17.json", "r");
  size_t size = htm17.size();
  std::unique_ptr<char[]> buf(new char[size]);
  htm17.readBytes(buf.get(), size);
  StaticJsonBuffer<200> jsonBuffer;
  JsonObject& json = jsonBuffer.parseObject(buf.get());
    
   ws5 = json["d5"];//   
   ws6 = json["d6"];// 
   ws7 = json["d7"];// 
} 

void htm17xml(){
String  url1="<?xml version='1.0'?>";
        url1+="<Donnees>"; 
        url1+="<q1>";
        url1+=ws1;// 
        url1+="</q1>";
        url1+="<q2>";
        url1+=ws2;// 
        url1+="</q2>";
        url1+="<q3>";
        url1+=ws3;//
        url1+="</q3>";
        url1+="<q4>";
        url1+=ws4;//
        url1+="</q4>";
        url1+="<q5>";
        url1+=ws5;//
        url1+="</q5>";
        url1+="<q6>";
        url1+=ws6;//
        url1+="</q6>";
        url1+="<q7>";
        url1+=ws7;//
        url1+="</q7>";
        url1+="</Donnees>"; 
server.send(200,"text/xml",url1);
}  
void ws2812test(){
      save17();//  запись в память модуля
      Adafruit_NeoPixel  pixels = Adafruit_NeoPixel(ws3,ws2, NEO_GRB + NEO_KHZ800);
      pixels.begin();
      t=0; 
      for(uint16_t i=0; i<ws3; i++) {
          pixels.setPixelColor(t,pixels.Color(ws5,ws6,ws7));  
          pixels.show(); 
          t++;
          
         }
}

void colorWipe(uint32_t c, uint8_t wait) {
     Adafruit_NeoPixel  pixels = Adafruit_NeoPixel(ws3,ws2, NEO_GRB + NEO_KHZ800);
     pixels.begin();
     for(uint16_t i=0; i<pixels.numPixels(); i++) {
     pixels.setPixelColor(i, c);
     pixels.show();
     delay(wait);
     }
}
void rainbow(uint8_t wait) {
     Adafruit_NeoPixel  pixels = Adafruit_NeoPixel(ws3,ws2, NEO_GRB + NEO_KHZ800);
     pixels.begin();
     uint16_t ii, jj;
     for(jj=0; jj<256; jj++) {
         for(ii=0; ii<ws3; ii++) {
             pixels.setPixelColor(i, Wheel((ii+jj) & 255));
            }
         pixels.show();
         delay(wait);
        }
}
// Slightly different, this makes the rainbow equally distributed throughout
void rainbowCycle() {//1
     Adafruit_NeoPixel  pixels = Adafruit_NeoPixel(ws3,ws2, NEO_GRB + NEO_KHZ800);
     pixels.begin();
     uint16_t ii, jj;
     for(jj=0; jj<256*5; jj++) { // 5 cycles of all colors on wheel
         for(ii=0; ii<ws3; ii++) {
             pixels.setPixelColor(ii, Wheel(((ii * 256 /ws3) + jj) & 255));
            }
        pixels.show();
        delay(20);
       }
}
//Theatre-style crawling lights.
void theaterChase(uint32_t c, uint8_t wait) {
      Adafruit_NeoPixel  pixels = Adafruit_NeoPixel(ws3,ws2, NEO_GRB + NEO_KHZ800);
      pixels.begin();
     for (int j=0; j<10; j++) {  //do 10 cycles of chasing
          for (int q=0; q < 3; q++) {
               for (int i=0; i < ws3; i=i+3) {
                    pixels.setPixelColor(i+q, c);    //turn every third pixel on
                   }
               pixels.show();
               delay(wait);
                for (int i=0; i < ws3; i=i+3) {
                     pixels.setPixelColor(i+q, 0);//turn every third pixel off
                    }
             }
         }
}
// Input a value 0 to 255 to get a color value.
// The colours are a transition r - g - b - back to r.
uint32_t Wheel(byte WheelPos) {
         Adafruit_NeoPixel  pixels = Adafruit_NeoPixel(ws3,ws2, NEO_GRB + NEO_KHZ800);
         pixels.begin();
         WheelPos = 255 - WheelPos;
         if(WheelPos < 85) {
            return pixels.Color(255 - WheelPos * 3, 0, WheelPos * 3);
           }
        if(WheelPos < 170) {
           WheelPos -= 85;
           return pixels.Color(0, WheelPos * 3, 255 - WheelPos * 3);
           }
      WheelPos -= 170;
      return pixels.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
}
void colorWipee(uint32_t c, uint8_t wait) {
     Adafruit_NeoPixel  pixels = Adafruit_NeoPixel(ws3,ws2, NEO_GRB + NEO_KHZ800);
     pixels.begin();
     for(int i=0;i<ws3;i++){
         pixels.setPixelColor(i, c);
         pixels.show();
         delay(wait);
        }
}

  
