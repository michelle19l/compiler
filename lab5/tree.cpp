#include "tree.h"

int TreeNode::current_node_id=0;
void TreeNode::printAST()//打印语法树结点
{
	//中序遍历
	if(this==nullptr||this->stmtType==STMT_NULL)return;

	printNodeInfo();
	if(this->sibling!=nullptr)
		this->sibling->printAST();
	if(this->child!=nullptr)
		this->child->printAST();
}
void TreeNode::printNodeInfo()
{
	//打印行号、结点标号、结点类型、孩子
	cout<<lineno<<"\t@"<<nodeID<<'\t'<<nodeTypeInfo()<<"\tchildren:\t";
	for(TreeNode*t=this;t!=nullptr;t=t->sibling)
		cout<<" @"<<t->nodeID;
	cout<<endl;
	

}
TreeNode::TreeNode(int lines,NodeType type)
{
	//语句标号
	//具体类型和属性
	sibling=nullptr;
	child=nullptr;
	father=nullptr;
	nodeType=type;
	lineno=lines;
}
void TreeNode::addChild(TreeNode *temp)//将temp添加为this的子节点
{
	temp->father=this;
	this->child=temp;
}
void TreeNode::addSibling(TreeNode *temp)//将temp添加为this的右兄弟结点
{
	this->sibling=temp;
}

TreeNode::TreeNode(TreeNode* temp)
{
	this->sibling=temp->sibling;
	this->child=temp->child;
	this->father=temp->father;
}
void TreeNode::genNodeId()//从根节点开始逐个赋Id 实现方式同学们可以自行修改
{
	//if(this->father==nullptr) TreeNode::current_node_id=0;
	if(this==nullptr||this->stmtType==STMT_NULL)return;
	nodeID=current_node_id;
	cout<<current_node_id<<endl;
	if(this->child!=nullptr) cout<<"not em"<<endl;

	//if(t->sibling!=nullptr)cout<<"ccc"<<endl;
	for(TreeNode*t=this;t->sibling!=nullptr;t=t->sibling)
	{
		current_node_id++;
		t->genNodeId();
	}
	for(TreeNode*t=this;t->child!=nullptr;t=t->child)
	{
		current_node_id++;
		t->genNodeId();
	}
}
string TreeNode::nodeTypeInfo()
{return "";}
