#ifndef TREE_H
#define TREE_H

#include "pch.h"
#include "type.h"

enum NodeType
{
    NODE_CONST=1, //常量
    NODE_VAR,//变量
    NODE_EXPR,//表达式
    NODE_TYPE,//类型

    NODE_STMT,//语句
    NODE_PROG,//程序
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
    STMT_IF,//if语句
    STMT_WHILE,
    STMT_FOR,
    STMT_RET,
    STMT_PRT,//printf
    STMT_SCF,//scanf
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

    static int current_node_id;
public:
    string nodeType2String ();//结点基本类型
    // static string opType2String (OperatorType type);
    string sType2String ();//语句类型
    string tType2String ();//int bool
    string cType2String();//常量
    string opType2String();//表达式
    string varName2String();//变量名

public:
    TreeNode(int lineno, NodeType type);
};

#endif