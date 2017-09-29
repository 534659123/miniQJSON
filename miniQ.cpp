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
void miniQ::Encoding(uint16_t _Operator,uint8_t* data, int size,String SoName = "NULL",String desName = "NULL")
{
	 JsonBuff = "";  //��ջ�����
	 StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	 JsonObject& miniQDate = jsonBuffer.createObject();   //��������
	 miniQDate[Operator] = _Operator;    //������
	 
	 /*���帺��ҵ��*/

		 JsonArray& Data = miniQDate.createNestedArray(DateBuff);  //����Ƕ������
		 for(byte a = 0; a<size;a++)  //ѭ�����ⲿ���ݶ���
		 {
			 Data.add(*(data + a));  //���������δ���Ƕ��������
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
void miniQ::Encoding(uint16_t _Operator,uint8_t data,String SoName = "NULL",String desName = "NULL")
{
	 JsonBuff = "";  //��ջ�����
	 StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	 JsonObject& miniQDate = jsonBuffer.createObject();   //��������
	 miniQDate[Operator] = _Operator;    //������
	 
	 /*���帺��ҵ��*/
	
	miniQDate[DateBuff] = data; //���븺��
	 
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
void miniQ::Encoding(uint16_t _Operator,int* data,int size, String SoName = "NULL", String desName = "NULL")
{
	 JsonBuff = "";  //��ջ�����
	 StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	 JsonObject& miniQDate = jsonBuffer.createObject();   //��������
	 miniQDate[Operator] = _Operator;    //������
	 
	 /*���帺��ҵ��*/
	 	 JsonArray& Data = miniQDate.createNestedArray(DateBuff);  //����Ƕ������
		 for(byte a = 0; a<size;a++)  //ѭ�����ⲿ���ݶ���
		 {
			 Data.add(*(data + a));  //���������δ���Ƕ��������
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
void miniQ::Encoding(uint16_t _Operator,int data, String SoName = "NULL", String desName = "NULL")
{
	 JsonBuff = "";  //��ջ�����
	 StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	 JsonObject& miniQDate = jsonBuffer.createObject();   //��������
	 miniQDate[Operator] = _Operator;    //������
	 
	 /*���帺��ҵ��*/
		 miniQDate[DateBuff] = data;
	 
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
void miniQ::Encoding(uint16_t _Operator,float *data, int size, String SoName = "NULL", String desName = "NULL")
{
	 JsonBuff = "";  //��ջ�����
	 StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	 JsonObject& miniQDate = jsonBuffer.createObject();   //��������
	 miniQDate[Operator] = _Operator;    //������
	 
	 /*���帺��ҵ��*/

	 JsonArray& Data = miniQDate.createNestedArray(DateBuff);  //����Ƕ������
	 for(byte a = 0; a<size;a++)  //ѭ�����ⲿ���ݶ���
	 {
		 Data.add(double_with_n_digits(*(data + a),2));  //���������δ���Ƕ��������
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
void miniQ::Encoding(uint16_t _Operator,float data, String SoName = "NULL", String desName = "NULL")
{
	 JsonBuff = "";  //��ջ�����
	 StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	 JsonObject& miniQDate = jsonBuffer.createObject();   //��������
	 miniQDate[Operator] = _Operator;    //������
	 
	 /*���帺��ҵ��*/

		miniQDate[DateBuff] = double_with_n_digits(data,2);
	 
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
void miniQ::Encoding(uint16_t _Operator,long *data, int size, String SoName = "NULL", String desName = "NULL")
{
	 JsonBuff = "";  //��ջ�����
	 StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	 JsonObject& miniQDate = jsonBuffer.createObject();   //��������
	 miniQDate[Operator] = _Operator;    //������
	 
	 /*���帺��ҵ��*/

		 JsonArray& Data = miniQDate.createNestedArray(DateBuff);  //����Ƕ������
		 for(byte a = 0; a<size;a++)  //ѭ�����ⲿ���ݶ���
		 {
			 Data.add(*(data + a));  //���������δ���Ƕ��������
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
void miniQ::Encoding(uint16_t _Operator,long data, String SoName = "NULL", String desName = "NULL")
{
	 JsonBuff = "";  //��ջ�����
	 StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	 JsonObject& miniQDate = jsonBuffer.createObject();   //��������
	 miniQDate[Operator] = _Operator;    //������
	 
	 /*���帺��ҵ��*/

		miniQDate[DateBuff] = data;
	 
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
void miniQ::Encoding(uint16_t _Operator,uint16_t *data, int size, String SoName = "NULL", String desName = "NULL")
{
	 JsonBuff = "";  //��ջ�����
	 StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	 JsonObject& miniQDate = jsonBuffer.createObject();   //��������
	 miniQDate[Operator] = _Operator;    //������
	 
	 /*���帺��ҵ��*/

		 JsonArray& Data = miniQDate.createNestedArray(DateBuff);  //����Ƕ������
		 for(byte a = 0; a<size;a++)  //ѭ�����ⲿ���ݶ���
		 {
			 Data.add(*(data + a));  //���������δ���Ƕ��������
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
void miniQ::Encoding(uint16_t _Operator,uint16_t data, String SoName = "NULL", String desName = "NULL")
{
	 JsonBuff = "";  //��ջ�����
	 StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	 JsonObject& miniQDate = jsonBuffer.createObject();   //��������
	 miniQDate[Operator] = _Operator;    //������
	 
	 /*���帺��ҵ��*/

		miniQDate[DateBuff] = data;
	 
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
void miniQ::Encoding(uint16_t _Operator,uint32_t *data, int size, String SoName = "NULL", String desName = "NULL")
{
	 JsonBuff = "";  //��ջ�����
	 StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	 JsonObject& miniQDate = jsonBuffer.createObject();   //��������
	 miniQDate[Operator] = _Operator;    //������
	 
	 /*���帺��ҵ��*/

		 JsonArray& Data = miniQDate.createNestedArray(DateBuff);  //����Ƕ������
		 for(byte a = 0; a<size;a++)  //ѭ�����ⲿ���ݶ���
		 {
			 Data.add(*(data + a));  //���������δ���Ƕ��������
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
void miniQ::Encoding(uint16_t _Operator,uint32_t data, String SoName = "NULL", String desName = "NULL")
{
	 JsonBuff = "";  //��ջ�����
	 StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	 JsonObject& miniQDate = jsonBuffer.createObject();   //��������
	 miniQDate[Operator] = _Operator;    //������
	 
	 /*���帺��ҵ��*/

		miniQDate[DateBuff] = data;
	 
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
void miniQ::Encoding(uint16_t _Operator,String data,String SoName = "NULL",String desName = "NULL")
{
	JsonBuff = "";  //��ջ�����
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	JsonObject& miniQDate = jsonBuffer.createObject();   //��������
	miniQDate[Operator] = _Operator;    //������
	miniQDate[DateBuff] = data;
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
       uint16_t __Operator = root[DateBuff].size();
       return __Operator;
     }
}

// float �������

void miniQ::Decoding(float *data)
{
	
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //���� json���󣨻����յ������ݣ�
	  if (root.success()) 
	  {   //�ж϶����Ƿ���ϱ�׼
       uint16_t __Operator = root[DateBuff].size();
	   
	   if(__Operator != 0)
	   {
		   for(uint16_t a =0;a < __Operator;a++)
		   {
			   *(data + a) = root[DateBuff][a];
		   }
	   }else
	   {
		   //*data = root[DateBuff];
	   }
	   
	  }

}

// float ����

void miniQ::Decoding(float &data)
{
	
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //���� json���󣨻����յ������ݣ�
	  if (root.success()) 
	  {   //�ж϶����Ƿ���ϱ�׼
       uint16_t __Operator = root[DateBuff].size();
	   
	   if(__Operator == 0)
	   {
		  data = root[DateBuff];
	   }
	
	   
	  }

}


/*  int */
void miniQ::Decoding(int *data)
{
	
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //���� json���󣨻����յ������ݣ�
	  if (root.success()) 
	  {   //�ж϶����Ƿ���ϱ�׼
       uint16_t __Operator = root[DateBuff].size();
	   
	   if(__Operator != 0)
	   {
		   for(uint16_t a =0;a < __Operator;a++)
		   {
			   *(data + a) = root[DateBuff][a];
		   }
	   }else
	   {
		   //*data = root[DateBuff];
	   }
	   
	  }

}

// int ����

void miniQ::Decoding(int &data)
{
	
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //���� json���󣨻����յ������ݣ�
	  if (root.success()) 
	  {   //�ж϶����Ƿ���ϱ�׼
       uint16_t __Operator = root[DateBuff].size();
	   
	   if(__Operator == 0)
	   {
		  data = root[DateBuff];
	   }
	
	   
	  }

}


/*************  long ******************/
/*  long ���� */
void miniQ::Decoding(long *data)
{
	
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //���� json���󣨻����յ������ݣ�
	  if (root.success()) 
	  {   //�ж϶����Ƿ���ϱ�׼
       uint16_t __Operator = root[DateBuff].size();
	   
	   if(__Operator != 0)
	   {
		   for(uint16_t a =0;a < __Operator;a++)
		   {
			   *(data + a) = root[DateBuff][a];
		   }
	   }else
	   {
		   //*data = root[DateBuff];
	   }
	   
	  }

}

// long ����

void miniQ::Decoding(long &data)
{
	
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //���� json���󣨻����յ������ݣ�
	  if (root.success()) 
	  {   //�ж϶����Ƿ���ϱ�׼
       uint16_t __Operator = root[DateBuff].size();
	   
	   if(__Operator == 0)
	   {
		  data = root[DateBuff];
	   }
	
	  }
}
/*************  uint8 ******************/
/*  uint8_t ���� */
void miniQ::Decoding(uint8_t *data)
{
	
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //���� json���󣨻����յ������ݣ�
	  if (root.success()) 
	  {   //�ж϶����Ƿ���ϱ�׼
       uint16_t __Operator = root[DateBuff].size();
	   
	   if(__Operator != 0)
	   {
		   for(uint16_t a =0;a < __Operator;a++)
		   {
			   *(data + a) = root[DateBuff][a];
		   }
	   }else
	   {
		   //*data = root[DateBuff];
	   }
	   
	  }

}

// uint8_t ����

void miniQ::Decoding(uint8_t &data)
{
	
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //���� json���󣨻����յ������ݣ�
	  if (root.success()) 
	  {   //�ж϶����Ƿ���ϱ�׼
       uint16_t __Operator = root[DateBuff].size();
	   
	   if(__Operator == 0)
	   {
		  data = root[DateBuff];
	   }
	
	  }
}
/*************  uint16 ******************/
/*  uint16_t ���� */
void miniQ::Decoding(uint16_t *data)
{
	
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //���� json���󣨻����յ������ݣ�
	  if (root.success()) 
	  {   //�ж϶����Ƿ���ϱ�׼
       uint16_t __Operator = root[DateBuff].size();
	   
	   if(__Operator != 0)
	   {
		   for(uint16_t a =0;a < __Operator;a++)
		   {
			   *(data + a) = root[DateBuff][a];
		   }
	   }else
	   {
		   //*data = root[DateBuff];
	   }
	   
	  }

}

// uint16_t ����

void miniQ::Decoding(uint16_t &data)
{
	
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //���� json���󣨻����յ������ݣ�
	  if (root.success()) 
	  {   //�ж϶����Ƿ���ϱ�׼
       uint16_t __Operator = root[DateBuff].size();
	   
	   if(__Operator == 0)
	   {
		  data = root[DateBuff];
	   }
	
	  }
}

/*************  uint32 ******************/
/*  uint32_t ���� */
void miniQ::Decoding(uint32_t *data)
{
	
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //���� json���󣨻����յ������ݣ�
	  if (root.success()) 
	  {   //�ж϶����Ƿ���ϱ�׼
       uint16_t __Operator = root[DateBuff].size();
	   
	   if(__Operator != 0)
	   {
		   for(uint16_t a =0;a < __Operator;a++)
		   {
			   *(data + a) = root[DateBuff][a];
		   }
	   }else
	   {
		   //*data = root[DateBuff];
	   }
	   
	  }

}

// uint32_t ����

void miniQ::Decoding(uint32_t &data)
{
	
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //���� json���󣨻����յ������ݣ�
	  if (root.success()) 
	  {   //�ж϶����Ƿ���ϱ�׼
       uint16_t __Operator = root[DateBuff].size();
	   
	   if(__Operator == 0)
	   {
		  data = root[DateBuff];
	   }
	
	  }
}

/*************  String ******************/

void miniQ::Decoding(char *data)
{
	const char* _temp;
	
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //����������
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //���� json���󣨻����յ������ݣ�
	  if (root.success()) 
	  {   //�ж϶����Ƿ���ϱ�׼
	    _temp = root[DateBuff]; //��ȡ����
	    uint16_t __Operator = strlen(_temp);  //��ȡ�ַ�������
		for(uint16_t a =0;a < __Operator;a++)
		{
			*(data + a) = _temp[a];
		}
	   
	  }

}
