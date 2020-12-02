#include "field.h"




//先遍历得到作用域表
//再增添符号表项添加
void getField(TreeNode* root,table* scope)
{

	//如果有孩子，则开始对该结点进行遍历添加
	if(root->child==nullptr)return;
	TreeNode*t=root->child;
	while(t!=nullptr)
	{
		if(t->nodeType==NODE_STMT)
		{
			if(t->stype==STMT_BLOCK||t->stype==STMT_FOR||t->stype==STMT_FUNC_DEF)
			{
				
				//cout<<"get a block"<<endl;
				table* newscope=new table(scope);
				//cout<<"ddd "<<newscope->attribute<<endl;
				getField(t,newscope);
				//cout<<"xx"<<endl;
			}
			else
			{
				getField(t,scope);
			}
		}
		else if(t->nodeType==NODE_TYPE)
		{
			TreeNode* temp=t->sibling;//sibling是要插入符号表的内容
			if(root->stype==STMT_FUNC_DECL||root->stype==STMT_FUNC_DEF)
			{
				temp->workfield=scope->father->attribute;
				table::insertID(temp,scope->father);
				cout<<"scope "<<scope->attribute<<endl;
				cout<<"scope->father "<<scope->father->attribute<<endl;
				
			}
			
			else {
				if(temp->stype==STMT_ASSIGN)
				temp=temp->child;
			//temp->printSpecialInfo();
			//cout<<"scope "<<scope->attribute<<endl;
			//cout<<"before"<<temp->workfield<<endl;
			// while(temp!=nullptr)
			// 	{
					temp->workfield=scope->attribute;
					table::insertID(temp,scope);
				// }
			//cout<<"after"<<temp->workfield<<endl;
			//temp->printSpecialInfo();
			}
		}
		t=t->sibling;
	}
}




table* table::scoperoot = new table;//生成根，用于存储全局变量和静态变量（静态变量待实现）
table* table::keyword = new table;//存储关键字
table* table::scope = table::scoperoot;
string table::lexms="0";//存储id名
int table::lexmspointer=0;



// void print_attribute(int item_number)//打印节点属性
// {
// 	// int a[MAX_LAYER];//语句块层数最大值
// 	// a[0] = item_number;//末位为在该表下的index
// 	// int len = 0;
// 	// for (table* d = table::scope; d; d = d->father)
// 	// 	a[++len] = d->index;//逐层加入索引
// 	// for (int i = len; i > 0; i--)
// 	// 	output << a[i] << "-";
// 	// output << "++"<<a[0] << endl;
// }


// int table::lookupID(char* yytext)//在当前作用域查找是否存在该ID,如果有，则返回索引，如果没有则返回0
// {
// 	// if ( table::scope->size)
// 	// 	for (int i = 1; i <=  table::scope->size; i++)
// 	// 	{
// 	// 		char a[100];
// 	// 		int j;
// 	// 		for (j = 0; lexms[j]!=0;j++)
// 	// 		{
// 	// 			a[j] = *(lexms +  table::scope->item[i].lex+j);
// 	// 		}
// 	// 		a[j] = 0;
// 	// 		if (!(strcmp(yytext, a)))
// 	// 			return i;
// 	// 	}
// 	// return 0;
// }

void table::insertID(TreeNode* &node,table* scope)//向当前作用域插入ID,
{
	
	lexms+=node->var_name;
	scope->item[++ table::scope->size] = lexmspointer;//添加指针
	//cout<<"+++++"<<scope->attribute<<endl;

	//node->workfield=scope->attribute;
	//cout<<"----"<<node->workfield<<endl;
}
