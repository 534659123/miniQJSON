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
		//void Decoding();    //解码
		
		String JsonBuff = "";

		
	private:
};



#endif