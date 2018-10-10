#include "miniQ.h"
miniQ miniQ;
String localComputerName = "arduinoNode";   //本设备名称
String targetComputerName = "IotServer";   //目标设备名称

String data = "{\"O\":1,\"D\":[32.20,65.70],\"F\":\"arduinoNode\",\"T\":\"IotServer\"}"; //模拟收到了其他模块的数据
void setup() 
{
  Serial.begin(9600);  // 初始化串口
  miniQ.dataBuffing(data);  //将字符串传入
  uint16_t O =  miniQ.oper();   //返回指令中的“O”的值，操作指令值
  Serial.print("O:");
  Serial.println(O);  //发送编码完成的缓冲区数据
  uint16_t DataLength = miniQ.dataSizeNum(); //传输数组的时候需要获取数组长度，如果是单个数据则不需要
  float data[DataLength];  //创建缓冲区
  miniQ.Decoding(data);
  Serial.print("D:");
  for(byte a=0;a<DataLength;a++)
  {
    Serial.print(data[a]);
    Serial.print("    ");   //数据间分隔
    }
    Serial.println();

}
void loop() {
  // put your main code here, to run repeatedly:
}