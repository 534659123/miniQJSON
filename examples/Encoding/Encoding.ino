#include "miniQ.h"
miniQ miniQ;
String localComputerName = "arduinoNode";   //本设备名称
String targetComputerName = "IotServer";   //目标设备名称
void setup() 
{
  Serial.begin(9600);  // 初始化串口
  float temp = 32.2;  // 假设传感器读取温度为38摄氏度
  float Hum =  65.7;   // 袈裟传感器湿度为65.7%
  miniQ.Encoding(1,temp,localComputerName,targetComputerName); //编码温度指令
  Serial.println(miniQ.JsonBuff);  //发送编码完成的缓冲区数据
  miniQ.Encoding(2,Hum,localComputerName,targetComputerName); //编码湿度指令
  Serial.println(miniQ.JsonBuff);  //发送编码完成的缓冲区数据
   /*数组传输*/
  float sensor1[2] = {32.2,65.7}; //模拟一个温湿度传感器的两组数据
  miniQ.Encoding(1,sensor1,sizeof(sensor1)/ sizeof(sensor1[0]),localComputerName,targetComputerName);  // 自定义操作符，数组，数组长度，设备名称，目标设备名称
  Serial.println(miniQ.JsonBuff);  //发送编码完成的缓冲区数据
}

void loop() {
  // put your main code here, to run repeatedly:
}