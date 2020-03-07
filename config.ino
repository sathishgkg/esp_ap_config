#include "config.h"


void pin_config()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);  
}

void Esp8266_Eeprom_Config(void)
{
      EEPROM.begin(512);
      delay(10);
#if Debugs      
      Serial.println("EEPROM Done");
#endif        
}      
