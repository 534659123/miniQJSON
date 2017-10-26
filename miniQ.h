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
#define dataBuff "D"   //�������ݸ�������ǩ
#define OriginalName "F"  //����Դ�豸����
#define TargetName "T"   //����Ŀ���豸����
class miniQ
{
	public:
		void begin();
		/*����*/
		void Encoding(uint16_t _Operator,String SoName,String desName);   //����
		void Encoding(uint16_t _Operator, uint8_t *data, int size, String SoName, String desName);   //���� byte��byte����
		void Encoding(uint16_t _Operator, uint8_t data, String SoName, String desName);   //���� byte��byte����
		//void Encoding(uint16_t _Operator,char data, uint8_t size,String SoName,String desName);   //���� char
		void Encoding(uint16_t _Operator,int *data, int size, String SoName, String desName);   //����
		void Encoding(uint16_t _Operator,int data, String SoName, String desName);   //����
		void Encoding(uint16_t _Operator,float *data, int size, String SoName, String desName);   //����
		void Encoding(uint16_t _Operator,float data, String SoName, String desName);   //����
		void Encoding(uint16_t _Operator,long *data, int size, String SoName, String desName);   //����
		void Encoding(uint16_t _Operator,long data, String SoName, String desName);   //����
		void Encoding(uint16_t _Operator,uint16_t *data, int size, String SoName, String desName);   //����
		void Encoding(uint16_t _Operator,uint16_t data, String SoName, String desName);   //����
		void Encoding(uint16_t _Operator,uint32_t *data, int size, String SoName, String desName);   //����
		void Encoding(uint16_t _Operator,uint32_t data, String SoName, String desName);   //����
		void Encoding(uint16_t _Operator,String data,String SoName,String desName);   //���� �ַ���
		
		
		/*����*/
		void dataBuffing(String _JsonBuff);    //���� ����
		uint16_t oper();   //���ز�����
		uint16_t dataSizeNum(); //�������鸺�ص����鳤��
		void Decoding(float *data);   //���� float ����
		void Decoding(float &data);   //���� float
		void Decoding(int *data);   //���� int ����
		void Decoding(int &data);   //���� int 
		void Decoding(long *data);   //���� long ����
		void Decoding(long &data);   //���� long
		void Decoding(uint8_t *data); //���� uint8����
		void Decoding(uint8_t &data); //���� uint8
		void Decoding(uint16_t *data); //���� uint16����
		void Decoding(uint16_t &data); //���� uint16
		void Decoding(uint32_t *data); //���� uint32����
		void Decoding(uint32_t &data); //���� uint32
		void Decoding(char *data); //�ַ���
		
		
		//void dataBuffOUT(String _Jsondata,f);   //����������    char��short��int��long���з��Ż��޷��ţ�
		
		String JsonBuff = "";

		
	private:
};



#endif