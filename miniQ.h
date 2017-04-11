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

#define JsonWorkBuff  300      //����json������������С
#define Operator "O"   //�����������ǩ
#define DateBuff "D"   //�������ݸ�������ǩ
#define OriginalName "F"  //����Դ�豸����
#define TargetName "T"   //����Ŀ���豸����
class miniQ
{
	public:
		void begin();
		/*����*/
		void Encoding(uint16_t _Operator,String SoName = "NULL",String desName = "NULL");   //����
		void Encoding(uint16_t _Operator, uint8_t *date, int size, String SoName = "NULL", String desName = "NULL");   //���� byte��byte����
		void Encoding(uint16_t _Operator, uint8_t date, String SoName = "NULL", String desName = "NULL");   //���� byte��byte����
		//void Encoding(uint16_t _Operator,char date, uint8_t size,String SoName = "NULL",String desName = "NULL");   //���� char
		void Encoding(uint16_t _Operator,int *date, int size, String SoName = "NULL", String desName = "NULL");   //����
		void Encoding(uint16_t _Operator,int date, String SoName = "NULL", String desName = "NULL");   //����
		void Encoding(uint16_t _Operator,float *date, int size, String SoName = "NULL", String desName = "NULL");   //����
		void Encoding(uint16_t _Operator,float date, String SoName = "NULL", String desName = "NULL");   //����
		void Encoding(uint16_t _Operator,long *date, int size, String SoName = "NULL", String desName = "NULL");   //����
		void Encoding(uint16_t _Operator,long date, String SoName = "NULL", String desName = "NULL");   //����
		void Encoding(uint16_t _Operator,uint16_t *date, int size, String SoName = "NULL", String desName = "NULL");   //����
		void Encoding(uint16_t _Operator,uint16_t date, String SoName = "NULL", String desName = "NULL");   //����
		void Encoding(uint16_t _Operator,uint32_t *date, int size, String SoName = "NULL", String desName = "NULL");   //����
		void Encoding(uint16_t _Operator,uint32_t date, String SoName = "NULL", String desName = "NULL");   //����
		void Encoding(uint16_t _Operator,String date,String SoName = "NULL",String desName = "NULL");   //���� �ַ���
		
		
		/*����*/
		//void Decoding();    //����
		
		String JsonBuff = "";

		
	private:
};



#endif