void device_setup(void)
{
  pin_config();
  Esp8266_Eeprom_Config();
  Esp_server();
}
