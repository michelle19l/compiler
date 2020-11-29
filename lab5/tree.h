#ifndef TREE_H
#define TREE_H
#include"pch.h"

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
    STMT_NULL=1,//空语句
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

struct TreeNode {
public:
    int nodeID;//结点标号
    NodeType nodeType;//
    int lineno;//行号

    TreeNode *child=nullptr;
    TreeNode *sibling =nullptr;
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
    TreeNode(int lines,NodeType type);
    TreeNode(TreeNode* temp);
    void addChild(TreeNode *temp);//将temp添加为this的子节点
    
    void addSibling(TreeNode *temp);//将temp添加为this的右兄弟结点


    void genNodeId();//从根节点开始逐个赋Id 实现方式同学们可以自行修改

    void printNodeInfo();//打印单个结点的信息
    //void printNodeConnection(){}
    string nodeTypeInfo();//获取结点的属性信息；
    void printAST();//打印语法树结点
};

#endif