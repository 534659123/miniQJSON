/*
*简易的字符串编码范例
*迷你强
*chenglei1234@gmail.com
*/
#include <ArduinoJson.h>


void setup() {
  Serial.begin(9600);
}
void loop() 
{
	StaticJsonBuffer<200> jsonBuffer;   //创建缓冲区 200字节
	JsonObject& root = jsonBuffer.createObject();  //创建对象root
	root["sensor"] = 1;    //初始化字段sensor，值为1
	root["code"] = 5; 
	String data;       //创建字符串date
	root.printTo(data);   //将编码数据传入字符串
	Serial.print(data);   //在串口打印编码字符串
	delay(1000);
}