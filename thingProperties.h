// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char DEVICE_LOGIN_NAME[] = "bb1043ec-2f6e-4a06-961d-41ee9a6f2f3a";

const char SSID[] = "Nest";                             // Network SSID (name)
const char PASS[] = "pasacasa8966";                     // Network password (use for WPA, or use as key for WEP)
const char DEVICE_KEY[] = "T7ESHMVS8kv08v07qD6aL@DpI";  // Secret device password


float batt_pct;
int rssi;
float meat_temp1;
float meat_temp2;
float meat_temp3;
float meat_res1;
float meat_res2;
float meat_res3;



void initProperties() {

  ArduinoCloud.setBoardId(DEVICE_LOGIN_NAME);
  ArduinoCloud.setSecretDeviceKey(DEVICE_KEY);
  ArduinoCloud.addProperty(rssi, READ, 30 * SECONDS, NULL);
  ArduinoCloud.addProperty(batt_pct, READ, 10 * SECONDS, NULL);
  ArduinoCloud.addProperty(meat_temp1, READ, 10 * SECONDS, NULL);
  ArduinoCloud.addProperty(meat_temp2, READ, 10 * SECONDS, NULL);
  ArduinoCloud.addProperty(meat_temp3, READ, 10 * SECONDS, NULL);
}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
