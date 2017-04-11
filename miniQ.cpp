#include "miniQ.h"

void miniQ::begin()
{
	
}

/********************************************/
void miniQ::Encoding(uint16_t _Operator,String SoName = "NULL",String desName = "NULL")
{
	 JsonBuff = "";  //��ջ�����
	 StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	 JsonObject& miniQDate = jsonBuffer.createObject();   //��������
	 miniQDate[Operator] = _Operator;    //������
	 
	 /*���帺��ҵ��*/
	 
	if(SoName != "NULL")
	{
		miniQDate[OriginalName] = SoName;  //Դ�豸��
	}
	if(desName != "NULL")
	{
		miniQDate[TargetName] = desName;  //Ŀ���豸����
	}
	 miniQDate.printTo(JsonBuff);
	
}
/********************************************/
//unit8_t ����
void miniQ::Encoding(uint16_t _Operator,uint8_t* date, int size,String SoName = "NULL",String desName = "NULL")
{
	 JsonBuff = "";  //��ջ�����
	 StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	 JsonObject& miniQDate = jsonBuffer.createObject();   //��������
	 miniQDate[Operator] = _Operator;    //������
	 
	 /*���帺��ҵ��*/

		 JsonArray& data = miniQDate.createNestedArray(DateBuff);  //����Ƕ������
		 for(byte a = 0; a<size;a++)  //ѭ�����ⲿ���ݶ���
		 {
			 data.add(*(date + a));  //���������δ���Ƕ��������
		 }
	 
	 /*���ƴ�����*/
	if(SoName != "NULL")
	{
		miniQDate[OriginalName] = SoName;  //Դ�豸��
	}
	if(desName != "NULL")
	{
		miniQDate[TargetName] = desName;  //Ŀ���豸����
	}
	
	 miniQDate.printTo(JsonBuff);
	 
}
/********************************************/
//unit8_t 
void miniQ::Encoding(uint16_t _Operator,uint8_t date,String SoName = "NULL",String desName = "NULL")
{
	 JsonBuff = "";  //��ջ�����
	 StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	 JsonObject& miniQDate = jsonBuffer.createObject();   //��������
	 miniQDate[Operator] = _Operator;    //������
	 
	 /*���帺��ҵ��*/
	
	miniQDate[DateBuff] = date; //���븺��
	 
	 /*���ƴ�����*/
	if(SoName != "NULL")
	{
		miniQDate[OriginalName] = SoName;  //Դ�豸��
	}
	if(desName != "NULL")
	{
		miniQDate[TargetName] = desName;  //Ŀ���豸����
	}
	
	 miniQDate.printTo(JsonBuff);
}
/****************************************************************************/
// int ��������
void miniQ::Encoding(uint16_t _Operator,int* date,int size, String SoName = "NULL", String desName = "NULL")
{
	 JsonBuff = "";  //��ջ�����
	 StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	 JsonObject& miniQDate = jsonBuffer.createObject();   //��������
	 miniQDate[Operator] = _Operator;    //������
	 
	 /*���帺��ҵ��*/
	 	 JsonArray& data = miniQDate.createNestedArray(DateBuff);  //����Ƕ������
		 for(byte a = 0; a<size;a++)  //ѭ�����ⲿ���ݶ���
		 {
			 data.add(*(date + a));  //���������δ���Ƕ��������
		 }

	 /*���ƴ�����*/
	if(SoName != "NULL")
	{
		miniQDate[OriginalName] = SoName;  //Դ�豸��
	}
	if(desName != "NULL")
	{
		miniQDate[TargetName] = desName;  //Ŀ���豸����
	}
	
	 miniQDate.printTo(JsonBuff);	
}


/****************************************************************************/
// int ����
void miniQ::Encoding(uint16_t _Operator,int date, String SoName = "NULL", String desName = "NULL")
{
	 JsonBuff = "";  //��ջ�����
	 StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	 JsonObject& miniQDate = jsonBuffer.createObject();   //��������
	 miniQDate[Operator] = _Operator;    //������
	 
	 /*���帺��ҵ��*/
		 miniQDate[DateBuff] = date;
	 
	 /*���ƴ�����*/
	if(SoName != "NULL")
	{
		miniQDate[OriginalName] = SoName;  //Դ�豸��
	}
	if(desName != "NULL")
	{
		miniQDate[TargetName] = desName;  //Ŀ���豸����
	}
	
	 miniQDate.printTo(JsonBuff);	
}



/****************************************************************************/
// float ��������
void miniQ::Encoding(uint16_t _Operator,float *date, int size, String SoName = "NULL", String desName = "NULL")
{
	 JsonBuff = "";  //��ջ�����
	 StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	 JsonObject& miniQDate = jsonBuffer.createObject();   //��������
	 miniQDate[Operator] = _Operator;    //������
	 
	 /*���帺��ҵ��*/

	 JsonArray& data = miniQDate.createNestedArray(DateBuff);  //����Ƕ������
	 for(byte a = 0; a<size;a++)  //ѭ�����ⲿ���ݶ���
	 {
		 data.add(double_with_n_digits(*(date + a),2));  //���������δ���Ƕ��������
	 }

	 
	 /*���ƴ�����*/
	if(SoName != "NULL")
	{
		miniQDate[OriginalName] = SoName;  //Դ�豸��
	}
	if(desName != "NULL")
	{
		miniQDate[TargetName] = desName;  //Ŀ���豸����
	}
	
	 miniQDate.printTo(JsonBuff);	
}

/****************************************************************************/
// float ����
void miniQ::Encoding(uint16_t _Operator,float date, String SoName = "NULL", String desName = "NULL")
{
	 JsonBuff = "";  //��ջ�����
	 StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	 JsonObject& miniQDate = jsonBuffer.createObject();   //��������
	 miniQDate[Operator] = _Operator;    //������
	 
	 /*���帺��ҵ��*/

		miniQDate[DateBuff] = double_with_n_digits(date,2);
	 
	 /*���ƴ�����*/
	if(SoName != "NULL")
	{
		miniQDate[OriginalName] = SoName;  //Դ�豸��
	}
	if(desName != "NULL")
	{
		miniQDate[TargetName] = desName;  //Ŀ���豸����
	}
	
	 miniQDate.printTo(JsonBuff);	
}


/****************************************************************************/
// long ��������
void miniQ::Encoding(uint16_t _Operator,long *date, int size, String SoName = "NULL", String desName = "NULL")
{
	 JsonBuff = "";  //��ջ�����
	 StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	 JsonObject& miniQDate = jsonBuffer.createObject();   //��������
	 miniQDate[Operator] = _Operator;    //������
	 
	 /*���帺��ҵ��*/

		 JsonArray& data = miniQDate.createNestedArray(DateBuff);  //����Ƕ������
		 for(byte a = 0; a<size;a++)  //ѭ�����ⲿ���ݶ���
		 {
			 data.add(*(date + a));  //���������δ���Ƕ��������
		 }

	 /*���ƴ�����*/
	if(SoName != "NULL")
	{
		miniQDate[OriginalName] = SoName;  //Դ�豸��
	}
	if(desName != "NULL")
	{
		miniQDate[TargetName] = desName;  //Ŀ���豸����
	}
	
	 miniQDate.printTo(JsonBuff);	
}

/****************************************************************************/
// long ����
void miniQ::Encoding(uint16_t _Operator,long date, String SoName = "NULL", String desName = "NULL")
{
	 JsonBuff = "";  //��ջ�����
	 StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	 JsonObject& miniQDate = jsonBuffer.createObject();   //��������
	 miniQDate[Operator] = _Operator;    //������
	 
	 /*���帺��ҵ��*/

		miniQDate[DateBuff] = date;
	 
	 /*���ƴ�����*/
	if(SoName != "NULL")
	{
		miniQDate[OriginalName] = SoName;  //Դ�豸��
	}
	if(desName != "NULL")
	{
		miniQDate[TargetName] = desName;  //Ŀ���豸����
	}
	
	 miniQDate.printTo(JsonBuff);	
}

/****************************************************************************/
// uint16 ��������
void miniQ::Encoding(uint16_t _Operator,uint16_t *date, int size, String SoName = "NULL", String desName = "NULL")
{
	 JsonBuff = "";  //��ջ�����
	 StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	 JsonObject& miniQDate = jsonBuffer.createObject();   //��������
	 miniQDate[Operator] = _Operator;    //������
	 
	 /*���帺��ҵ��*/

		 JsonArray& data = miniQDate.createNestedArray(DateBuff);  //����Ƕ������
		 for(byte a = 0; a<size;a++)  //ѭ�����ⲿ���ݶ���
		 {
			 data.add(*(date + a));  //���������δ���Ƕ��������
		 }

	 /*���ƴ�����*/
	if(SoName != "NULL")
	{
		miniQDate[OriginalName] = SoName;  //Դ�豸��
	}
	if(desName != "NULL")
	{
		miniQDate[TargetName] = desName;  //Ŀ���豸����
	}
	
	 miniQDate.printTo(JsonBuff);	
}

/****************************************************************************/
// uint16 ����
void miniQ::Encoding(uint16_t _Operator,uint16_t date, String SoName = "NULL", String desName = "NULL")
{
	 JsonBuff = "";  //��ջ�����
	 StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	 JsonObject& miniQDate = jsonBuffer.createObject();   //��������
	 miniQDate[Operator] = _Operator;    //������
	 
	 /*���帺��ҵ��*/

		miniQDate[DateBuff] = date;
	 
	 /*���ƴ�����*/
	if(SoName != "NULL")
	{
		miniQDate[OriginalName] = SoName;  //Դ�豸��
	}
	if(desName != "NULL")
	{
		miniQDate[TargetName] = desName;  //Ŀ���豸����
	}
	
	 miniQDate.printTo(JsonBuff);	
}


/****************************************************************************/
// uint32 ��������
void miniQ::Encoding(uint16_t _Operator,uint32_t *date, int size, String SoName = "NULL", String desName = "NULL")
{
	 JsonBuff = "";  //��ջ�����
	 StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	 JsonObject& miniQDate = jsonBuffer.createObject();   //��������
	 miniQDate[Operator] = _Operator;    //������
	 
	 /*���帺��ҵ��*/

		 JsonArray& data = miniQDate.createNestedArray(DateBuff);  //����Ƕ������
		 for(byte a = 0; a<size;a++)  //ѭ�����ⲿ���ݶ���
		 {
			 data.add(*(date + a));  //���������δ���Ƕ��������
		 }

	 /*���ƴ�����*/
	if(SoName != "NULL")
	{
		miniQDate[OriginalName] = SoName;  //Դ�豸��
	}
	if(desName != "NULL")
	{
		miniQDate[TargetName] = desName;  //Ŀ���豸����
	}
	
	 miniQDate.printTo(JsonBuff);	
}

/****************************************************************************/
// uint32 ����
void miniQ::Encoding(uint16_t _Operator,uint32_t date, String SoName = "NULL", String desName = "NULL")
{
	 JsonBuff = "";  //��ջ�����
	 StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	 JsonObject& miniQDate = jsonBuffer.createObject();   //��������
	 miniQDate[Operator] = _Operator;    //������
	 
	 /*���帺��ҵ��*/

		miniQDate[DateBuff] = date;
	 
	 /*���ƴ�����*/
	if(SoName != "NULL")
	{
		miniQDate[OriginalName] = SoName;  //Դ�豸��
	}
	if(desName != "NULL")
	{
		miniQDate[TargetName] = desName;  //Ŀ���豸����
	}
	
	 miniQDate.printTo(JsonBuff);	
}

/******************************************************************************/
//String
void miniQ::Encoding(uint16_t _Operator,String date,String SoName = "NULL",String desName = "NULL")
{
	JsonBuff = "";  //��ջ�����
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	JsonObject& miniQDate = jsonBuffer.createObject();   //��������
	miniQDate[Operator] = _Operator;    //������
	miniQDate[DateBuff] = date;
	/*���ƴ�����*/
	if(SoName != "NULL")
	{
		miniQDate[OriginalName] = SoName;  //Դ�豸��
	}
	if(desName != "NULL")
	{
		miniQDate[TargetName] = desName;  //Ŀ���豸����
	}
	
	 miniQDate.printTo(JsonBuff);	
}
