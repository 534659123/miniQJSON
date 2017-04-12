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
#define DateBuff "D"   //定义数据负载区标签
#define OriginalName "F"  //定义源设备名称
#define TargetName "T"   //定义目标设备名称
class miniQ
{
	public:
		void begin();
		/*编码*/
		void Encoding(uint16_t _Operator,String SoName = "NULL",String desName = "NULL");   //编码
		void Encoding(uint16_t _Operator, uint8_t *date, int size, String SoName = "NULL", String desName = "NULL");   //编码 byte与byte数组
		void Encoding(uint16_t _Operator, uint8_t date, String SoName = "NULL", String desName = "NULL");   //编码 byte与byte数组
		//void Encoding(uint16_t _Operator,char date, uint8_t size,String SoName = "NULL",String desName = "NULL");   //编码 char
		void Encoding(uint16_t _Operator,int *date, int size, String SoName = "NULL", String desName = "NULL");   //编码
		void Encoding(uint16_t _Operator,int date, String SoName = "NULL", String desName = "NULL");   //编码
		void Encoding(uint16_t _Operator,float *date, int size, String SoName = "NULL", String desName = "NULL");   //编码
		void Encoding(uint16_t _Operator,float date, String SoName = "NULL", String desName = "NULL");   //编码
		void Encoding(uint16_t _Operator,long *date, int size, String SoName = "NULL", String desName = "NULL");   //编码
		void Encoding(uint16_t _Operator,long date, String SoName = "NULL", String desName = "NULL");   //编码
		void Encoding(uint16_t _Operator,uint16_t *date, int size, String SoName = "NULL", String desName = "NULL");   //编码
		void Encoding(uint16_t _Operator,uint16_t date, String SoName = "NULL", String desName = "NULL");   //编码
		void Encoding(uint16_t _Operator,uint32_t *date, int size, String SoName = "NULL", String desName = "NULL");   //编码
		void Encoding(uint16_t _Operator,uint32_t date, String SoName = "NULL", String desName = "NULL");   //编码
		void Encoding(uint16_t _Operator,String date,String SoName = "NULL",String desName = "NULL");   //编码 字符串
		
		
		/*解码*/
		void DateBuffing(String _JsonBuff);    //解码 传入
		uint16_t oper();   //返回操作符
		uint16_t DateSizeNum(); //返回数组负载的数组长度
		void Decoding(float *date);   //变量 float 数组
		void Decoding(float &date);   //变量 float
		void Decoding(int *date);   //变量 int 数组
		void Decoding(int &date);   //变量 int 
		void Decoding(long *date);   //变量 long 数组
		void Decoding(long &date);   //变量 long
		void Decoding(uint8_t *date); //变量 uint8数组
		void Decoding(uint8_t &date); //变量 uint8
		void Decoding(uint16_t *date); //变量 uint16数组
		void Decoding(uint16_t &date); //变量 uint16
		void Decoding(uint32_t *date); //变量 uint32数组
		void Decoding(uint32_t &date); //变量 uint32
		void Decoding(char *date); //字符串
		
		
		//void DateBuffOUT(String _JsonDate,f);   //变量可能性    char，short，int或long（有符号或无符号）
		
		String JsonBuff = "";

		
	private:
};



#endif