#ifndef TREE_H
#define TREE_H
#include<iostream>
#include<string>

using std::cerr;
using std::cout;
using std::endl;
using std::string;

#define MAX_CHILD 3



enum NodeType{
    NODE_CONST,//常量
    NODE_BOOL,//布尔类型
    NODE_VAR,//变量
    NODE_EXPR,//表达式
    NODE_TYPE,//类型
    NODE_STMT,//语句
    NODE_PROG,//程序，最开始
    NODE_OP//操作符
};

enum StmtType{
    STMT_IF,
    STMT_WHILE,
    STMT_DECL,
    STMT_ASSIGN,//赋值语句
    STMT_PRINTF,
    STMT_SCANF
};

enum OpType{
    OP_EQUAL,//=
    OP_NOT,//~
    OP_ADD,//&&
};

enum VarType{
    VAR_INTEGER,
    VAR_VOID
};

class TreeNode {
public:
    int nodeID;//结点标号
    NodeType nodeType;//

    TreeNode *child[MAX_CHILD];
    TreeNode *sibling = nullptr;
    TreeNode *father=nullptr;//父结点

    int int_val;bool bool_val;string var_name;string op;
    StmtType stmtType;OpType opType;VarType varType;
    // union{int int_val;bool bool_val;string var_name;string op;} attribute;//值,
    //         /*int_val保存常量值
    //           bool_val保存布尔值
    //           var_name保存 id名
    //           op保存操作符
    //           其余为0
    //         */
    // union{StmtType stmtType;OpType opType;VarType varType;} type;//具体类型
    
    /***
     * 以下的几个函数皆为在printAST过程中辅助输出使用
     * 同学们可以根据需要自己使用其他方法
    ***/

    static int current_node_id;
    TreeNode(NodeType type)
    {
        //语句标号
        //具体类型和属性
        for(int i=0;i<MAX_CHILD;i++)
            child[MAX_CHILD]=nullptr;
        sibling=nullptr;
        father=nullptr;
        nodeType=type;
    }
    void addChild(TreeNode *temp)//将temp添加为this的子节点
    {
        temp->father=this;
        for(int i=0;i<MAX_CHILD;i++)
            if(child[i]==nullptr)
                child[i]=temp;
    }
    void addSibling(TreeNode *temp)//将temp添加为this的右兄弟结点
    {
        this->sibling=temp;
        this->father->addChild(temp);
    }

    void genNodeId()//从根节点开始逐个赋Id 实现方式同学们可以自行修改
    {
        if(this->father==nullptr) current_node_id=0;
        this->nodeID=current_node_id;
        current_node_id++;
        for(int i=0;i<MAX_CHILD;i++)
        {
            if(this->child[i]!=nullptr)
            {
                this->child[i]->genNodeId();
            }
            else break;
        }
    }
    void printNodeInfo()
    {
        //打印行号、结点标号、结点类型、孩子
        cout<<"\t@"<<nodeID<<'\t'<<nodeTypeInfo()<<"\tchildren:\t";
        for(int i=0;i<MAX_CHILD;i++)
        {
            if(child[i]!=nullptr)
                cout<<'@'<<child[i]->nodeID<<" ";
            else
                break;
        }

    }
    void printNodeConnection(){}
    string nodeTypeInfo(){}
    void printAST()//打印语法树结点
    {
        //中序遍历
        if(this==nullptr)return;
        printNodeInfo();
        for(int i=0;i<MAX_CHILD;i++)
        {
            if(child[i]!=nullptr)
                child[i]->printNodeInfo();
            else break;
        }
    }
};
int TreeNode::current_node_id=0;
#endif