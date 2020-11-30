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

enum OperatorType
{
    OP_ASIGN=1,  // =
    OP_EQUAL,//==
};

enum StmtType {
    STMT_SKIP=1,//空语句
    STMT_DECL,//声明语句
}
;

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
    OperatorType optype;  // 如果是表达式
    Type* type;  // 变量、类型、表达式结点，有类型。
    StmtType stype;
    int int_val;
    char ch_val;
    bool b_val;
    string str_val;
    string var_name;

    static int current_node_id;
public:
    string nodeType2String ();
    // static string opType2String (OperatorType type);
    static string sType2String (StmtType type);

public:
    TreeNode(int lineno, NodeType type);
};

#endif