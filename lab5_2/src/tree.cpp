#include "tree.h"

int TreeNode::current_node_id=0;
void TreeNode::addChild(TreeNode* child) {
    if(this->child==nullptr)
        this->child=child;
    else
    {
        TreeNode* t=this->child;
        for(;t->sibling!=nullptr;t=t->sibling);
        t->sibling=child;
    }
}

void TreeNode::addSibling(TreeNode* sibling){
    this->sibling=sibling;
}

TreeNode::TreeNode(int lineno, NodeType type) {
    this->lineno=lineno;
    this->nodeType=type;
    //sibling\child
}

void TreeNode::genNodeId() {//自顶向下生成id
    this->nodeID=current_node_id;
    if(this->sibling!=nullptr)
     {
        current_node_id++;
        this->sibling->genNodeId();
    }
    if(this->child!=nullptr)
     {
        current_node_id++;
        this->child->genNodeId();
    }
    return;
}

void TreeNode::printNodeInfo() {
    cout<<lineno<<"\t@"<<nodeID<<"\t"<<nodeType2String()<<"\tchildren:";
    printChildrenId();
    cout<<'\t';
    printSpecialInfo();
    cout<<endl;
}

void TreeNode::printChildrenId() {
    for(TreeNode*t=this->child;t!=nullptr;t=t->sibling)
        cout<<" @"<<t->nodeID;
}

void TreeNode::printAST() {
    this->printNodeInfo();
    if(this->sibling!=nullptr)
        this->sibling->printAST();
    if(this->child!=nullptr)
        this->child->printAST();
}


// You can output more info...
void TreeNode::printSpecialInfo() {
    switch(this->nodeType){
        case NODE_CONST:
            break;
        case NODE_VAR:
            break;
        case NODE_EXPR:
            break;
        case NODE_STMT:
            {
                cout<<sType2String();
                break;
            }
        case NODE_TYPE:
           { 
                cout<<tType2String(); 
                break;
            }
        default:
            break;
    }
}

string TreeNode::sType2String() {
    switch(this->stype)
    {
        case STMT_DECL://变量的声明或者定义
            return "declaration";
        case STMT_DEFINE:
            return "define";
        default:
            return "unknown stmt";
    }
}


string TreeNode::nodeType2String (){
    switch(this->nodeType)
    {
        case  NODE_CONST://常量
                return "const";
        case  NODE_VAR://变量
                return "variable";
        case  NODE_EXPR://表达式
                return "expression";
        case  NODE_TYPE://类型
                return "type";

        case  NODE_STMT://语句
                return "statement";
        case  NODE_PROG://程序
                return "program";
        
        default:
                return "unknown nodetype";
    }
    return "unknown__";
}

// string opType2String (OperatorType type){
//      return "a";
//  }


//Type::getTypeInfo()
string TreeNode::tType2String ()
{
    string a="type: ";
    return a+type->getTypeInfo();
}