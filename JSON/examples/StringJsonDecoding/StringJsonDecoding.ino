/*
*简易的字符串解码范例
*迷你强
*chenglei1234@gmail.com
*/
#include <ArduinoJson.h>

void setup() {
  Serial.begin(9600);

}
void loop() 
{
	char json[] = "{\"sensor\":\"gps\",\"time\":1351824120,\"data\":[48.756080,2.302038]}";
	
	StaticJsonBuffer<200> jsonBuffer;   //创建缓冲区 200字节
	JsonObject& root = jsonBuffer.createObject();  //创建JSON对象root
	
	const char* sensor = root["sensor"];
	long time          = root["time"];
	double latitude    = root["data"][0];
	double longitude   = root["data"][1];
	
	Serial.print(sensor);
	Serial.print(",");
	Serial.print(time);
	Serial.print(",");
	Serial.print(latitude);
	Serial.print(",");
	Serial.println(longitude);
 
}