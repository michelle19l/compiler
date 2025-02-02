#ifndef TREE_H
#define TREE_H

#include "pch.h"
#include "type.h"
#include "field.h"

enum NodeType
{
    NODE_CONST=1, //常量
    NODE_VAR,//变量
    NODE_EXPR,//表达式
    NODE_TYPE,//类型

    NODE_STMT,//语句
    NODE_PROG,//程序
    NODE_PARAM,//参数
};

enum ConstType//常量
{
    CON_INT=1,
    CON_CHAR,
    CON_STRING,
};
enum OperatorType
{
    //OP_ASIGN=1,  // =
    OP_EQUAL,//==
    OP_GREAT,
    OP_LESS,
    OP_GREAT_EQ,
    OP_LESS_EQ,
    OP_NOT_EQ,

    OP_ADD,//+
    OP_SUB,
    OP_MUL,
    OP_DIV,
    OP_MOD,
    OP_NEG,//负号
    OP_POS,//正号
    OP_AND,
    OP_OR,
    OP_NOT,

    OP_ADDR,//&
    OP_VAL,//*
};

enum StmtType {
    STMT_SKIP=1,//空语句
    STMT_DEFINE,//定义语句
    STMT_ASSIGN,
    STMT_DECL,//声明
    STMT_WHILE,
    STMT_FOR,
    STMT_RET,
    STMT_PRT,//printf
    STMT_SCF,//scanf

    STMT_FUNC_DECL,
    STMT_FUNC_DEF,
    STMT_FUNC_USE,

    STMT_ADD_ASSIGN,
    STMT_SUB_ASSIGN,
    STMT_MUL_ASSIGN,
    STMT_DIV_ASSIGN,
    STMT_MOD_ASSIGN,

    STMT_SELF_INC_R,
    STMT_SELF_INC_L,
    STMT_SELF_DEC_R,
    STMT_SELF_DEC_L,

    STMT_IF_ELSE,//if语句
    STMT_IF,
    STMT_ELSE,

    STMT_BLOCK,//语句块
    
};

struct TreeNode {
public:
    int nodeID;  // 用于作业的序号输出
    int lineno;//行号
    NodeType nodeType;//结点类型

    TreeNode* child = nullptr;
    TreeNode* sibling = nullptr;
    //TreeNode* father=nullptr;

    void addChild(TreeNode*);
    void addSibling(TreeNode*);
    
    void printNodeInfo();
    void printChildrenId();

    void printAST(); // 先输出自己 + 孩子们的id；再依次让每个孩子输出AST。
    void printSpecialInfo();

    void genNodeId();

public:
    ConstType contype;
    OperatorType optype;  // 如果是表达式
    Type* type;  // 变量、类型、表达式结点，有类型。
    StmtType stype;
    int int_val;//整型
    string int_val_;//整型的字符串
    char ch_val;//字符
    bool b_val;//布尔
    string str_val;
    string var_name;
    int lex;//符号表结点指针
    string workfield;//变量作用域
    table* scope;//所属作用域


    static int current_node_id;
public:
    string nodeType2String ();//结点基本类型
    // static string opType2String (OperatorType type);
    string sType2String ();//语句类型
    string tType2String ();//int bool
    string cType2String();//常量
    string opType2String();//表达式
    string varName2String();//变量名
    string getfield();//作用域

public:
    TreeNode(int lineno, NodeType type);
    //TreeNode(){}
};
#endif

void insertID(TreeNode* root,table* scope);//向当前作用域插入IDint
//static int checkID(string yytext,table*scope);//在当前作用域查找是否存在该ID
void getBlock(TreeNode* root,table* scope);//根据ast得到作用域树
void getVarField(TreeNode* root,table*scope);//为变量分配作用域