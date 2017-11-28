#ifndef MINIQ_H_
#define MINIQ_H_

#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#ifndef JSON_H_
#define JSON_H_
#include <JSON/ArduinoJson.h>
#endif

#define JsonWorkBuff  300      //定义json工作缓冲区大小
#define Operator "O"   //定义操作符标签
#define DataBuff "D"   //定义数据负载区标签
#define OriginalName "F"  //定义源设备名称
#define TargetName "T"   //定义目标设备名称
class miniQ
{
	public:
		void begin();
		/*编码*/
		void Encoding(uint16_t _Operator,String SoName,String desName);   //编码
		void Encoding(uint16_t _Operator, uint8_t *data, int size, String SoName, String desName);   //编码 byte与byte数组
		void Encoding(uint16_t _Operator, uint8_t data, String SoName, String desName);   //编码 byte与byte数组
		//void Encoding(uint16_t _Operator,char data, uint8_t size,String SoName,String desName);   //编码 char
		void Encoding(uint16_t _Operator,int *data, int size, String SoName, String desName);   //编码
		void Encoding(uint16_t _Operator,int data, String SoName, String desName);   //编码
		void Encoding(uint16_t _Operator,float *data, int size, String SoName, String desName);   //编码
		void Encoding(uint16_t _Operator,float data, String SoName, String desName);   //编码
		void Encoding(uint16_t _Operator,long *data, int size, String SoName, String desName);   //编码
		void Encoding(uint16_t _Operator,long data, String SoName, String desName);   //编码
		void Encoding(uint16_t _Operator,uint16_t *data, int size, String SoName, String desName);   //编码
		void Encoding(uint16_t _Operator,uint16_t data, String SoName, String desName);   //编码
		void Encoding(uint16_t _Operator,uint32_t *data, int size, String SoName, String desName);   //编码
		void Encoding(uint16_t _Operator,uint32_t data, String SoName, String desName);   //编码
		void Encoding(uint16_t _Operator,String data,String SoName,String desName);   //编码 字符串
		
		
		/*解码*/
		void dataBuffing(String _JsonBuff);    //解码 传入
		uint16_t oper();   //返回操作符
		uint16_t dataSizeNum(); //返回数组负载的数组长度
		void Decoding(float *data);   //变量 float 数组
		void Decoding(float &data);   //变量 float
		void Decoding(int *data);   //变量 int 数组
		void Decoding(int &data);   //变量 int 
		void Decoding(long *data);   //变量 long 数组
		void Decoding(long &data);   //变量 long
		void Decoding(uint8_t *data); //变量 uint8数组
		void Decoding(uint8_t &data); //变量 uint8
		void Decoding(uint16_t *data); //变量 uint16数组
		void Decoding(uint16_t &data); //变量 uint16
		void Decoding(uint32_t *data); //变量 uint32数组
		void Decoding(uint32_t &data); //变量 uint32
		void Decoding(char *data); //字符串
		
		
		//void dataBuffOUT(String _Jsondata,f);   //变量可能性    char，short，int或long（有符号或无符号）
		
		String JsonBuff = "";

		
	private:
};



#endif