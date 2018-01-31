void dhttest() {
  delay(2000);  
   h = dht.readHumidity();
   t = dht.readTemperature();
   float f = dht.readTemperature(true);  
     if (isnan(h) || isnan(t) || isnan(f)) {    
     return;
     }
}
void bh1750test() {
  delay(150);
  lux = lightMeter.readLightLevel(); 
}
void max6675test() { 
  delay(200);
  max6675_t = max6675_temperature.readCelsius(); 
}
void ina219test() {
  shuntvoltage = ina219.getShuntVoltage_mV();
  busvoltage = ina219.getBusVoltage_V();
  current_mA = ina219.getCurrent_mA();
  loadvoltage = busvoltage + (shuntvoltage / 1000);
  } 
  
void pzem004ttest() {
   v = pzem.voltage(ip);
   i = pzem.current(ip);  
   p = pzem.power(ip);  
   e = pzem.energy(ip);
   }

void dstest() {
       sensors.requestTemperatures();     
       sensors.getAddress(address,0);
       temp = sensors.getTempC(address); 
}

void htu21test() {
   htu21temp = htu.readTemperature();
   htu21hum  = htu.readHumidity();
}

void adc48test() {
  adc48a0 = ads48.readADC_SingleEnded(0);
  adc48a1 = ads48.readADC_SingleEnded(1);
  adc48a2 = ads48.readADC_SingleEnded(2);
  adc48a3 = ads48.readADC_SingleEnded(3);
 
}
void adc49test() {
  adc49a0 = ads49.readADC_SingleEnded(0);
  adc49a1 = ads49.readADC_SingleEnded(1);
  adc49a2 = ads49.readADC_SingleEnded(2);
  adc49a3 = ads49.readADC_SingleEnded(3);
}

void ccS811_test() {
    if(ccs.available()){
       if(!ccs.readData()){
          //Serial.print("CO2: ");
          //Serial.print(ccs.geteCO2());//CO2
          //Serial.print("ppm, TVOC: ");
         //Serial.print(ccs.getTVOC());//VOC
         //Serial.print("ppb");
         //Serial.println(" ");
         }else{
          //Serial.println("ERROR!");
          digitalWrite(n12, LOW);
          delay(2000);
          digitalWrite(n12, HIGH); 
          ccs.begin();
     }
}
}
//void hdc1080_test() {
    //Serial.print("T=");
    //Serial.print(hdc1080.readTemperature());//Temperature
    //Serial.print("C, RH=");
    //Serial.print(hdc1080.readHumidity());//Humidity
   //Serial.println("%");
//}

void bme280test() {
     BME280::TempUnit tempUnit(BME280::TempUnit_Celsius);
     BME280::PresUnit presUnit(BME280::PresUnit_torr);
     bme.read(bme280_pres, bme280_temp, bme280_hum, tempUnit, presUnit);

     //Serial.print("Temp: ");
     //Serial.print(bme280_temp);//Temperature
     //Serial.print("\t\tHumidity: ");
     //Serial.print(bme280_hum);//Humidity
     //Serial.print("% RH");
     //Serial.print("\t\tPressure: ");//Pressure
     //Serial.print(bme280_pres);
     //Serial.println("mmHg");
}



