#include "miniQ.h"

void miniQ::begin()
{
	
}

/********************************************/
void miniQ::Encoding(uint16_t _Operator,String SoName = "NULL",String desName = "NULL")
{
	 JsonBuff = "";  //清空缓冲区
	 StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //创建缓冲区
	 JsonObject& miniQDate = jsonBuffer.createObject();   //创建对象
	 miniQDate[Operator] = _Operator;    //操作符
	 
	 /*具体负载业务*/
	 
	if(SoName != "NULL")
	{
		miniQDate[OriginalName] = SoName;  //源设备名
	}
	if(desName != "NULL")
	{
		miniQDate[TargetName] = desName;  //目标设备名称
	}
	 miniQDate.printTo(JsonBuff);
	
}
/********************************************/
//unit8_t 数组
void miniQ::Encoding(uint16_t _Operator,uint8_t* date, int size,String SoName = "NULL",String desName = "NULL")
{
	 JsonBuff = "";  //清空缓冲区
	 StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //创建缓冲区
	 JsonObject& miniQDate = jsonBuffer.createObject();   //创建对象
	 miniQDate[Operator] = _Operator;    //操作符
	 
	 /*具体负载业务*/

		 JsonArray& data = miniQDate.createNestedArray(DateBuff);  //创建嵌套数组
		 for(byte a = 0; a<size;a++)  //循环将外部数据读入
		 {
			 data.add(*(date + a));  //将数据依次存入嵌套数组中
		 }
	 
	 /*名称处理部分*/
	if(SoName != "NULL")
	{
		miniQDate[OriginalName] = SoName;  //源设备名
	}
	if(desName != "NULL")
	{
		miniQDate[TargetName] = desName;  //目标设备名称
	}
	
	 miniQDate.printTo(JsonBuff);
	 
}
/********************************************/
//unit8_t 
void miniQ::Encoding(uint16_t _Operator,uint8_t date,String SoName = "NULL",String desName = "NULL")
{
	 JsonBuff = "";  //清空缓冲区
	 StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //创建缓冲区
	 JsonObject& miniQDate = jsonBuffer.createObject();   //创建对象
	 miniQDate[Operator] = _Operator;    //操作符
	 
	 /*具体负载业务*/
	
	miniQDate[DateBuff] = date; //存入负载
	 
	 /*名称处理部分*/
	if(SoName != "NULL")
	{
		miniQDate[OriginalName] = SoName;  //源设备名
	}
	if(desName != "NULL")
	{
		miniQDate[TargetName] = desName;  //目标设备名称
	}
	
	 miniQDate.printTo(JsonBuff);
}
/****************************************************************************/
// int 数组类型
void miniQ::Encoding(uint16_t _Operator,int* date,int size, String SoName = "NULL", String desName = "NULL")
{
	 JsonBuff = "";  //清空缓冲区
	 StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //创建缓冲区
	 JsonObject& miniQDate = jsonBuffer.createObject();   //创建对象
	 miniQDate[Operator] = _Operator;    //操作符
	 
	 /*具体负载业务*/
	 	 JsonArray& data = miniQDate.createNestedArray(DateBuff);  //创建嵌套数组
		 for(byte a = 0; a<size;a++)  //循环将外部数据读入
		 {
			 data.add(*(date + a));  //将数据依次存入嵌套数组中
		 }

	 /*名称处理部分*/
	if(SoName != "NULL")
	{
		miniQDate[OriginalName] = SoName;  //源设备名
	}
	if(desName != "NULL")
	{
		miniQDate[TargetName] = desName;  //目标设备名称
	}
	
	 miniQDate.printTo(JsonBuff);	
}


/****************************************************************************/
// int 类型
void miniQ::Encoding(uint16_t _Operator,int date, String SoName = "NULL", String desName = "NULL")
{
	 JsonBuff = "";  //清空缓冲区
	 StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //创建缓冲区
	 JsonObject& miniQDate = jsonBuffer.createObject();   //创建对象
	 miniQDate[Operator] = _Operator;    //操作符
	 
	 /*具体负载业务*/
		 miniQDate[DateBuff] = date;
	 
	 /*名称处理部分*/
	if(SoName != "NULL")
	{
		miniQDate[OriginalName] = SoName;  //源设备名
	}
	if(desName != "NULL")
	{
		miniQDate[TargetName] = desName;  //目标设备名称
	}
	
	 miniQDate.printTo(JsonBuff);	
}



/****************************************************************************/
// float 数组类型
void miniQ::Encoding(uint16_t _Operator,float *date, int size, String SoName = "NULL", String desName = "NULL")
{
	 JsonBuff = "";  //清空缓冲区
	 StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //创建缓冲区
	 JsonObject& miniQDate = jsonBuffer.createObject();   //创建对象
	 miniQDate[Operator] = _Operator;    //操作符
	 
	 /*具体负载业务*/

	 JsonArray& data = miniQDate.createNestedArray(DateBuff);  //创建嵌套数组
	 for(byte a = 0; a<size;a++)  //循环将外部数据读入
	 {
		 data.add(double_with_n_digits(*(date + a),2));  //将数据依次存入嵌套数组中
	 }

	 
	 /*名称处理部分*/
	if(SoName != "NULL")
	{
		miniQDate[OriginalName] = SoName;  //源设备名
	}
	if(desName != "NULL")
	{
		miniQDate[TargetName] = desName;  //目标设备名称
	}
	
	 miniQDate.printTo(JsonBuff);	
}

/****************************************************************************/
// float 类型
void miniQ::Encoding(uint16_t _Operator,float date, String SoName = "NULL", String desName = "NULL")
{
	 JsonBuff = "";  //清空缓冲区
	 StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //创建缓冲区
	 JsonObject& miniQDate = jsonBuffer.createObject();   //创建对象
	 miniQDate[Operator] = _Operator;    //操作符
	 
	 /*具体负载业务*/

		miniQDate[DateBuff] = double_with_n_digits(date,2);
	 
	 /*名称处理部分*/
	if(SoName != "NULL")
	{
		miniQDate[OriginalName] = SoName;  //源设备名
	}
	if(desName != "NULL")
	{
		miniQDate[TargetName] = desName;  //目标设备名称
	}
	
	 miniQDate.printTo(JsonBuff);	
}


/****************************************************************************/
// long 数组类型
void miniQ::Encoding(uint16_t _Operator,long *date, int size, String SoName = "NULL", String desName = "NULL")
{
	 JsonBuff = "";  //清空缓冲区
	 StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //创建缓冲区
	 JsonObject& miniQDate = jsonBuffer.createObject();   //创建对象
	 miniQDate[Operator] = _Operator;    //操作符
	 
	 /*具体负载业务*/

		 JsonArray& data = miniQDate.createNestedArray(DateBuff);  //创建嵌套数组
		 for(byte a = 0; a<size;a++)  //循环将外部数据读入
		 {
			 data.add(*(date + a));  //将数据依次存入嵌套数组中
		 }

	 /*名称处理部分*/
	if(SoName != "NULL")
	{
		miniQDate[OriginalName] = SoName;  //源设备名
	}
	if(desName != "NULL")
	{
		miniQDate[TargetName] = desName;  //目标设备名称
	}
	
	 miniQDate.printTo(JsonBuff);	
}

/****************************************************************************/
// long 类型
void miniQ::Encoding(uint16_t _Operator,long date, String SoName = "NULL", String desName = "NULL")
{
	 JsonBuff = "";  //清空缓冲区
	 StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //创建缓冲区
	 JsonObject& miniQDate = jsonBuffer.createObject();   //创建对象
	 miniQDate[Operator] = _Operator;    //操作符
	 
	 /*具体负载业务*/

		miniQDate[DateBuff] = date;
	 
	 /*名称处理部分*/
	if(SoName != "NULL")
	{
		miniQDate[OriginalName] = SoName;  //源设备名
	}
	if(desName != "NULL")
	{
		miniQDate[TargetName] = desName;  //目标设备名称
	}
	
	 miniQDate.printTo(JsonBuff);	
}

/****************************************************************************/
// uint16 数组类型
void miniQ::Encoding(uint16_t _Operator,uint16_t *date, int size, String SoName = "NULL", String desName = "NULL")
{
	 JsonBuff = "";  //清空缓冲区
	 StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //创建缓冲区
	 JsonObject& miniQDate = jsonBuffer.createObject();   //创建对象
	 miniQDate[Operator] = _Operator;    //操作符
	 
	 /*具体负载业务*/

		 JsonArray& data = miniQDate.createNestedArray(DateBuff);  //创建嵌套数组
		 for(byte a = 0; a<size;a++)  //循环将外部数据读入
		 {
			 data.add(*(date + a));  //将数据依次存入嵌套数组中
		 }

	 /*名称处理部分*/
	if(SoName != "NULL")
	{
		miniQDate[OriginalName] = SoName;  //源设备名
	}
	if(desName != "NULL")
	{
		miniQDate[TargetName] = desName;  //目标设备名称
	}
	
	 miniQDate.printTo(JsonBuff);	
}

/****************************************************************************/
// uint16 类型
void miniQ::Encoding(uint16_t _Operator,uint16_t date, String SoName = "NULL", String desName = "NULL")
{
	 JsonBuff = "";  //清空缓冲区
	 StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //创建缓冲区
	 JsonObject& miniQDate = jsonBuffer.createObject();   //创建对象
	 miniQDate[Operator] = _Operator;    //操作符
	 
	 /*具体负载业务*/

		miniQDate[DateBuff] = date;
	 
	 /*名称处理部分*/
	if(SoName != "NULL")
	{
		miniQDate[OriginalName] = SoName;  //源设备名
	}
	if(desName != "NULL")
	{
		miniQDate[TargetName] = desName;  //目标设备名称
	}
	
	 miniQDate.printTo(JsonBuff);	
}


/****************************************************************************/
// uint32 数组类型
void miniQ::Encoding(uint16_t _Operator,uint32_t *date, int size, String SoName = "NULL", String desName = "NULL")
{
	 JsonBuff = "";  //清空缓冲区
	 StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //创建缓冲区
	 JsonObject& miniQDate = jsonBuffer.createObject();   //创建对象
	 miniQDate[Operator] = _Operator;    //操作符
	 
	 /*具体负载业务*/

		 JsonArray& data = miniQDate.createNestedArray(DateBuff);  //创建嵌套数组
		 for(byte a = 0; a<size;a++)  //循环将外部数据读入
		 {
			 data.add(*(date + a));  //将数据依次存入嵌套数组中
		 }

	 /*名称处理部分*/
	if(SoName != "NULL")
	{
		miniQDate[OriginalName] = SoName;  //源设备名
	}
	if(desName != "NULL")
	{
		miniQDate[TargetName] = desName;  //目标设备名称
	}
	
	 miniQDate.printTo(JsonBuff);	
}

/****************************************************************************/
// uint32 类型
void miniQ::Encoding(uint16_t _Operator,uint32_t date, String SoName = "NULL", String desName = "NULL")
{
	 JsonBuff = "";  //清空缓冲区
	 StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //创建缓冲区
	 JsonObject& miniQDate = jsonBuffer.createObject();   //创建对象
	 miniQDate[Operator] = _Operator;    //操作符
	 
	 /*具体负载业务*/

		miniQDate[DateBuff] = date;
	 
	 /*名称处理部分*/
	if(SoName != "NULL")
	{
		miniQDate[OriginalName] = SoName;  //源设备名
	}
	if(desName != "NULL")
	{
		miniQDate[TargetName] = desName;  //目标设备名称
	}
	
	 miniQDate.printTo(JsonBuff);	
}

/******************************************************************************/
//String
void miniQ::Encoding(uint16_t _Operator,String date,String SoName = "NULL",String desName = "NULL")
{
	JsonBuff = "";  //清空缓冲区
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //创建缓冲区
	JsonObject& miniQDate = jsonBuffer.createObject();   //创建对象
	miniQDate[Operator] = _Operator;    //操作符
	miniQDate[DateBuff] = date;
	/*名称处理部分*/
	if(SoName != "NULL")
	{
		miniQDate[OriginalName] = SoName;  //源设备名
	}
	if(desName != "NULL")
	{
		miniQDate[TargetName] = desName;  //目标设备名称
	}
	
	 miniQDate.printTo(JsonBuff);	
}
/*************************************************************************************/
//解码部分
/*************************************************************************************/

void miniQ::DateBuffing(String _JsonBuff)
{
	JsonBuff = "";
	JsonBuff =_JsonBuff;
}

// 返回操作码
uint16_t miniQ::oper()
{
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //创建缓冲区
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //创建 json对象（基于收到的数据）
	  if (root.success()) 
	  {   //判断对象是否符合标准
       uint16_t __Operator = root["O"];
       return __Operator;
     }
}

//返回负载数据的数组数量
uint16_t miniQ::DateSizeNum()
{
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //创建缓冲区
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //创建 json对象（基于收到的数据）
	  if (root.success()) 
	  {   //判断对象是否符合标准
       uint16_t __Operator = root["D"].size();
       return __Operator;
     }
}

// float 数组解码

void miniQ::Decoding(float *date)
{
	
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //创建缓冲区
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //创建 json对象（基于收到的数据）
	  if (root.success()) 
	  {   //判断对象是否符合标准
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

// float 解码

void miniQ::Decoding(float &date)
{
	
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //创建缓冲区
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //创建 json对象（基于收到的数据）
	  if (root.success()) 
	  {   //判断对象是否符合标准
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
	
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //创建缓冲区
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //创建 json对象（基于收到的数据）
	  if (root.success()) 
	  {   //判断对象是否符合标准
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

// int 解码

void miniQ::Decoding(int &date)
{
	
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //创建缓冲区
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //创建 json对象（基于收到的数据）
	  if (root.success()) 
	  {   //判断对象是否符合标准
       uint16_t __Operator = root["D"].size();
	   
	   if(__Operator == 0)
	   {
		  date = root["D"];
	   }
	
	   
	  }

}


/*************  long ******************/
/*  long 数组 */
void miniQ::Decoding(long *date)
{
	
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //创建缓冲区
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //创建 json对象（基于收到的数据）
	  if (root.success()) 
	  {   //判断对象是否符合标准
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

// long 解码

void miniQ::Decoding(long &date)
{
	
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //创建缓冲区
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //创建 json对象（基于收到的数据）
	  if (root.success()) 
	  {   //判断对象是否符合标准
       uint16_t __Operator = root["D"].size();
	   
	   if(__Operator == 0)
	   {
		  date = root["D"];
	   }
	
	  }
}
/*************  uint8 ******************/
/*  uint8_t 数组 */
void miniQ::Decoding(uint8_t *date)
{
	
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //创建缓冲区
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //创建 json对象（基于收到的数据）
	  if (root.success()) 
	  {   //判断对象是否符合标准
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

// uint8_t 解码

void miniQ::Decoding(uint8_t &date)
{
	
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //创建缓冲区
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //创建 json对象（基于收到的数据）
	  if (root.success()) 
	  {   //判断对象是否符合标准
       uint16_t __Operator = root["D"].size();
	   
	   if(__Operator == 0)
	   {
		  date = root["D"];
	   }
	
	  }
}
/*************  uint16 ******************/
/*  uint16_t 数组 */
void miniQ::Decoding(uint16_t *date)
{
	
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //创建缓冲区
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //创建 json对象（基于收到的数据）
	  if (root.success()) 
	  {   //判断对象是否符合标准
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

// uint16_t 解码

void miniQ::Decoding(uint16_t &date)
{
	
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //创建缓冲区
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //创建 json对象（基于收到的数据）
	  if (root.success()) 
	  {   //判断对象是否符合标准
       uint16_t __Operator = root["D"].size();
	   
	   if(__Operator == 0)
	   {
		  date = root["D"];
	   }
	
	  }
}

/*************  uint32 ******************/
/*  uint32_t 数组 */
void miniQ::Decoding(uint32_t *date)
{
	
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //创建缓冲区
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //创建 json对象（基于收到的数据）
	  if (root.success()) 
	  {   //判断对象是否符合标准
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

// uint32_t 解码

void miniQ::Decoding(uint32_t &date)
{
	
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //创建缓冲区
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //创建 json对象（基于收到的数据）
	  if (root.success()) 
	  {   //判断对象是否符合标准
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
	
	StaticJsonBuffer<JsonWorkBuff>  jsonBuffer;   //创建缓冲区
	JsonObject& root = jsonBuffer.parseObject(JsonBuff);   //创建 json对象（基于收到的数据）
	  if (root.success()) 
	  {   //判断对象是否符合标准
	    _temp = root["D"]; //获取数据
	    uint16_t __Operator = strlen(_temp);  //获取字符串长度
		for(uint16_t a =0;a < __Operator;a++)
		{
			*(date + a) = _temp[a];
		}
	   
	  }

}
