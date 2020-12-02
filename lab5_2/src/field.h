#include "pch.h"
#include "tree.h"

#define _CRT_SECURE_NO_WARNINGS

using namespace std;

#define	MAX_LAYER 15 //语句块层数最大值
#define MAX_ITEM_NUM 100 //每个作用域最多可以声明100个变量
#define KEYWORD_NUM 8 //关键字个数


class table {
public:
	table* father;//指向父作用域
	TreeNode item[MAX_ITEM_NUM];//该作用域下，每个变量对应一个item元素，注意从1开始存储
	int index;//该表相对于父表的索引数,从0开始标号
	int num;//该表有几个子表
	int size;//当前已经存储了几个item
	table()//用于根的生成
	{
		father = NULL;
		index = 0;
		num = 0;
		size = 0;
		//scope = this;
	}
	table(table* f) {
		//对表f生成子表
		father = f;
		father->num++;
		this->index = father->num;
		size = 0;
		num = 0;
		//scope = this;//作用域切换
	}
};



void getField(TreeNode* root,table* scope);//根据ast得到作用域树
