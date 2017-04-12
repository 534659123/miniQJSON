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
/*************************************************************************************/
//���벿��
/*************************************************************************************/

void miniQ::DateBuffing(String _JsonBuff)
{
	JsonBuff = "";
	JsonBuff =_JsonBuff;
}

// ���ز�����
uint16_t miniQ::oper()
{
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //���� json���󣨻����յ������ݣ�
	  if (root.success()) 
	  {   //�ж϶����Ƿ���ϱ�׼
       uint16_t __Operator = root["O"];
       return __Operator;
     }
}

//���ظ������ݵ���������
uint16_t miniQ::DateSizeNum()
{
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //���� json���󣨻����յ������ݣ�
	  if (root.success()) 
	  {   //�ж϶����Ƿ���ϱ�׼
       uint16_t __Operator = root["D"].size();
       return __Operator;
     }
}

// float �������

void miniQ::Decoding(float *date)
{
	
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //���� json���󣨻����յ������ݣ�
	  if (root.success()) 
	  {   //�ж϶����Ƿ���ϱ�׼
       uint16_t __Operator = root["D"].size();
	   
	   if(__Operator != 0)
	   {
		   for(uint16_t a =0;a < __Operator;a++)
		   {
			   *(date + a) = root["D"][a];
		   }
	   }else
	   {
		   //*date = root["D"];
	   }
	   
	  }

}

// float ����

void miniQ::Decoding(float &date)
{
	
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //���� json���󣨻����յ������ݣ�
	  if (root.success()) 
	  {   //�ж϶����Ƿ���ϱ�׼
       uint16_t __Operator = root["D"].size();
	   
	   if(__Operator == 0)
	   {
		  date = root["D"];
	   }
	
	   
	  }

}


/*  int */
void miniQ::Decoding(int *date)
{
	
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //���� json���󣨻����յ������ݣ�
	  if (root.success()) 
	  {   //�ж϶����Ƿ���ϱ�׼
       uint16_t __Operator = root["D"].size();
	   
	   if(__Operator != 0)
	   {
		   for(uint16_t a =0;a < __Operator;a++)
		   {
			   *(date + a) = root["D"][a];
		   }
	   }else
	   {
		   //*date = root["D"];
	   }
	   
	  }

}

// int ����

void miniQ::Decoding(int &date)
{
	
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //���� json���󣨻����յ������ݣ�
	  if (root.success()) 
	  {   //�ж϶����Ƿ���ϱ�׼
       uint16_t __Operator = root["D"].size();
	   
	   if(__Operator == 0)
	   {
		  date = root["D"];
	   }
	
	   
	  }

}


/*************  long ******************/
/*  long ���� */
void miniQ::Decoding(long *date)
{
	
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //���� json���󣨻����յ������ݣ�
	  if (root.success()) 
	  {   //�ж϶����Ƿ���ϱ�׼
       uint16_t __Operator = root["D"].size();
	   
	   if(__Operator != 0)
	   {
		   for(uint16_t a =0;a < __Operator;a++)
		   {
			   *(date + a) = root["D"][a];
		   }
	   }else
	   {
		   //*date = root["D"];
	   }
	   
	  }

}

// long ����

void miniQ::Decoding(long &date)
{
	
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //���� json���󣨻����յ������ݣ�
	  if (root.success()) 
	  {   //�ж϶����Ƿ���ϱ�׼
       uint16_t __Operator = root["D"].size();
	   
	   if(__Operator == 0)
	   {
		  date = root["D"];
	   }
	
	  }
}
/*************  uint8 ******************/
/*  uint8_t ���� */
void miniQ::Decoding(uint8_t *date)
{
	
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //���� json���󣨻����յ������ݣ�
	  if (root.success()) 
	  {   //�ж϶����Ƿ���ϱ�׼
       uint16_t __Operator = root["D"].size();
	   
	   if(__Operator != 0)
	   {
		   for(uint16_t a =0;a < __Operator;a++)
		   {
			   *(date + a) = root["D"][a];
		   }
	   }else
	   {
		   //*date = root["D"];
	   }
	   
	  }

}

// uint8_t ����

void miniQ::Decoding(uint8_t &date)
{
	
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //���� json���󣨻����յ������ݣ�
	  if (root.success()) 
	  {   //�ж϶����Ƿ���ϱ�׼
       uint16_t __Operator = root["D"].size();
	   
	   if(__Operator == 0)
	   {
		  date = root["D"];
	   }
	
	  }
}
/*************  uint16 ******************/
/*  uint16_t ���� */
void miniQ::Decoding(uint16_t *date)
{
	
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //���� json���󣨻����յ������ݣ�
	  if (root.success()) 
	  {   //�ж϶����Ƿ���ϱ�׼
       uint16_t __Operator = root["D"].size();
	   
	   if(__Operator != 0)
	   {
		   for(uint16_t a =0;a < __Operator;a++)
		   {
			   *(date + a) = root["D"][a];
		   }
	   }else
	   {
		   //*date = root["D"];
	   }
	   
	  }

}

// uint16_t ����

void miniQ::Decoding(uint16_t &date)
{
	
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //���� json���󣨻����յ������ݣ�
	  if (root.success()) 
	  {   //�ж϶����Ƿ���ϱ�׼
       uint16_t __Operator = root["D"].size();
	   
	   if(__Operator == 0)
	   {
		  date = root["D"];
	   }
	
	  }
}

/*************  uint32 ******************/
/*  uint32_t ���� */
void miniQ::Decoding(uint32_t *date)
{
	
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //���� json���󣨻����յ������ݣ�
	  if (root.success()) 
	  {   //�ж϶����Ƿ���ϱ�׼
       uint16_t __Operator = root["D"].size();
	   
	   if(__Operator != 0)
	   {
		   for(uint16_t a =0;a < __Operator;a++)
		   {
			   *(date + a) = root["D"][a];
		   }
	   }else
	   {
		   //*date = root["D"];
	   }
	   
	  }

}

// uint32_t ����

void miniQ::Decoding(uint32_t &date)
{
	
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //���� json���󣨻����յ������ݣ�
	  if (root.success()) 
	  {   //�ж϶����Ƿ���ϱ�׼
       uint16_t __Operator = root["D"].size();
	   
	   if(__Operator == 0)
	   {
		  date = root["D"];
	   }
	
	  }
}

/*************  String ******************/

void miniQ::Decoding(char *date)
{
	const char* _temp;
	
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //���� json���󣨻����յ������ݣ�
	  if (root.success()) 
	  {   //�ж϶����Ƿ���ϱ�׼
	    _temp = root["D"]; //��ȡ����
	    uint16_t __Operator = strlen(_temp);  //��ȡ�ַ�������
		for(uint16_t a =0;a < __Operator;a++)
		{
			*(date + a) = _temp[a];
		}
	   
	  }

}
