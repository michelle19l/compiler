#include "field.h"




//先遍历得到作用域表
//再增添符号表项添加



table* table::scoperoot = new table;//生成根，用于存储全局变量和静态变量（静态变量待实现）
table* table::keyword = new table;//存储关键字
table* table::scope = table::scoperoot;
//string table::lexms="";//存储id名
//int table::lexmspointer=0;




int checkID(string yytext,table*scope)//若当前作用域不能声明则返回0，否则返回1
{
	//int flag=1;
	//cout<<scope->size<<endl;
	//table* t=scope;
	for(int i=1;i<=scope->size;i++)
	{
		int index=1;
		int j=0;
		//cout<<lexms[scope->item[i]+j];
		for(;scope->lexms[scope->item[i]+j]!='#';j++)
		{	
			if(yytext[j]!=scope->lexms[scope->item[i]+j])
				{
					index=0;
					break;
				}
			}
		if(yytext[j]!=0)
		{
			index=0;
		}
		if (index==1)//找到相同的
		{
			//flag=0;//则该变量不可以声明
			return 0;
		}
	}
	return 1;//0表示该变量名已经被占用
}

table* search(string yytext,table*scope)
{
	table* t=scope;
	while(t!=nullptr)
	{
		if(!checkID(yytext,t))
		{
			//当前作用域中有
			return t;
		}
		t=t->father;
	}
	return nullptr;
}
void table::print(table* root)
{
	cout<<root->attribute<<" ";
	cout<<root->lexms<<endl;
	table* t=root->child;
	while(t!=nullptr)
	{
		print(t);
		t=t->sibling;
	}
}