#ifndef FIELD_H
#define FIELD_H
#include "pch.h"
//#include "tree.h"

#define _CRT_SECURE_NO_WARNINGS

using namespace std;

#define	MAX_LAYER 15 //语句块层数最大值
#define MAX_ITEM_NUM 100 //每个作用域最多可以声明100个变量


class table {
public:
	table* father;//指向父作用域
	table* child,*sibling;
	int item[MAX_ITEM_NUM];//该作用域下，每个变量对应一个item元素，注意从1开始存储
	int index;//该表相对于父表的索引数,从0开始标号
	int num;//该表有几个子表
	int size;//当前已经存储了几个item
	string attribute;
	//全局变量，初值为0
	string lexms;//ID词素存储
	int lexmspointer;//词素数组下一位的索引（长度）
	table()//用于根的生成
	{
		father = NULL;
		child=NULL;
		sibling=NULL;
		index = 0;
		num = 0;
		size = 0;
		//scope = this;
		attribute="0";
		lexms="";
		lexmspointer=0;
	}
	table(table* f) {
		//对表f生成子表
		child=NULL;
		sibling=NULL;
		father = f;
		father->num++;
		this->index = father->num;
		size = 0;
		num = 0;
		char s[7];
		sprintf(s, "%d", this->index);
		attribute+=f->attribute+'_'+s;
		if(father->child==nullptr)
		{
			father->child=this;
		}
		else{
			table* t=f->child;
			for(;t->sibling!=nullptr;t=t->sibling);
			t->sibling=this;
		}
		lexms="";
		lexmspointer=0;
		//scope = this;//作用域切换
	}
	static table* scoperoot ;//生成根，用于存储全局变量和静态变量（静态变量待实现）
	static table* keyword ;//存储关键字
	static table* scope ;
	static void print(table* root);//打印符号表
	//static void insertID(TreeNode* root,table* scope);//向当前作用域插入IDint
};
#endif

int checkID(string yytext,table*scope);//在当前作用域查找是否存在该ID
table* search(string yytext,table*scope);//查找所在作用域
//void print_attribute(int item_number);//打印节点属性
//void insertID(string yytext);//向当前作用域插入IDint
//int lookupID(char* yytext);//在当前作用域查找是否存在该ID
//void insert_table::keyword(const char*);//插入关键字
//bool lookupKW(char*);//查找声明ID是否与table::keyword重名

