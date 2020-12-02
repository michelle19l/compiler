#include "common.h"
//先遍历得到作用域表
//再增添符号表项添加
void getField(TreeNode* root,table* scope)
{
	//cout<<"get"<<endl;
	//如果有孩子，则开始对该结点进行遍历添加
	if(root->child==nullptr)return;
	TreeNode*t=root->child;
	while(t!=nullptr)
	{
		//cout<<"-----";t->printSpecialInfo();cout<<endl;
		if(t->nodeType==NODE_STMT)
		{
			if(t->stype==STMT_BLOCK)
			{
				//cout<<"get a block"<<endl;
				table* newscope=new table(scope);
				getField(t,newscope);
			}
			else
			{
				getField(t,scope);
			}
		}
		t=t->sibling;
	}
}