#define BLYNK_TEMPLATE_ID "TMPL3dMXtU8po"
#define BLYNK_TEMPLATE_NAME "voltmeter"
#define BLYNK_AUTH_TOKEN "5evSF58EQXdINuEJe0wRo9lelxErsSL8"

#include "MapFloat.h"
#define BLYNK_PRINT Serial
#include <WiFi.h>




#define value A0


char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "You shall not password";//
char pass[] = "Parley$404$";//



float voltagevalue;
float totalvoltagevalue;
float valuepc817;
float voltagecaliber = 0.00; // add value to calibrate voltage




void setup() {
  
Serial.begin(115200);
pinMode(value, INPUT);
Blynk.begin(auth, ssid, pass);
delay(10);
}

void loop() {
  
Blynk.run();


valuepc817 = analogRead(value);

if (valuepc817 >= 0 && valuepc817 < 10){

voltagevalue = mapFloat(valuepc817, 0, 10, 0, 0); 
totalvoltagevalue = voltagevalue + voltagecaliber;
}


else if (valuepc817 >= 10 && valuepc817 < 24){

voltagevalue = mapFloat(valuepc817, 10, 24, 2, 3); 
totalvoltagevalue = voltagevalue + voltagecaliber;
}


else if (valuepc817 >= 24 && valuepc817 < 51){

voltagevalue = mapFloat(valuepc817, 24, 51, 3, 4); 
totalvoltagevalue = voltagevalue + voltagecaliber;
}

else if (valuepc817 >= 51 && valuepc817 < 89){

voltagevalue = mapFloat(valuepc817, 51, 89, 4, 5); 
totalvoltagevalue = voltagevalue + voltagecaliber;
}

else if (valuepc817 >= 89 && valuepc817 < 140){

voltagevalue = mapFloat(valuepc817, 89, 140, 5, 6); 
totalvoltagevalue = voltagevalue + voltagecaliber;
}

else if (valuepc817 >= 140 && valuepc817 < 200){

voltagevalue = mapFloat(valuepc817, 140, 200, 6, 7); 
totalvoltagevalue = voltagevalue + voltagecaliber;
}

else if (valuepc817 >= 200 && valuepc817 < 268){

voltagevalue = mapFloat(valuepc817, 200, 268, 7, 8); 
totalvoltagevalue = voltagevalue + voltagecaliber;
}

else if (valuepc817 >= 268 && valuepc817 < 343){

voltagevalue = mapFloat(valuepc817, 268, 343, 8, 9); 
totalvoltagevalue = voltagevalue + voltagecaliber;
}

else if (valuepc817 >= 343 && valuepc817 < 429){

voltagevalue = mapFloat(valuepc817, 343, 429, 9, 10); 
totalvoltagevalue = voltagevalue + voltagecaliber;
}


else if (valuepc817 >= 429 && valuepc817 < 519){

voltagevalue = mapFloat(valuepc817, 429, 519, 10, 11); 
totalvoltagevalue = voltagevalue + voltagecaliber;
}

else if (valuepc817 >= 519 && valuepc817 < 613){

voltagevalue = mapFloat(valuepc817, 519, 613, 11, 12); 
totalvoltagevalue = voltagevalue + voltagecaliber;
}


else if (valuepc817 >= 613 && valuepc817 < 714){

voltagevalue = mapFloat(valuepc817, 613, 714, 12, 13); 
totalvoltagevalue = voltagevalue + voltagecaliber;
}


else if (valuepc817 >= 714 && valuepc817 < 820){

voltagevalue = mapFloat(valuepc817, 714, 820, 13, 14); 
totalvoltagevalue = voltagevalue + voltagecaliber;
}

else if (valuepc817 >= 820 && valuepc817 < 922){

voltagevalue = mapFloat(valuepc817, 820, 922, 14, 15); 
totalvoltagevalue = voltagevalue + voltagecaliber;
}


else if (valuepc817 >= 922 && valuepc817 < 1018){

voltagevalue = mapFloat(valuepc817, 922, 1018, 15, 16); 
totalvoltagevalue = voltagevalue + voltagecaliber;
}

else if (valuepc817 >= 1018 && valuepc817 <= 1024){

voltagevalue = mapFloat(valuepc817, 1018, 1024, 16, 17); 
totalvoltagevalue = voltagevalue + voltagecaliber;
}


Serial.print("A0 value: ");
Serial.println(valuepc817);

Blynk.virtualWrite(V0, totalvoltagevalue); 
Serial.print("voltage value: ");
Serial.println(totalvoltagevalue,2);  
delay(1000);
}
