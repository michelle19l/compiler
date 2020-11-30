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
    if(this==nullptr)return;

}

void TreeNode::printNodeInfo() {

}

void TreeNode::printChildrenId() {

}

void TreeNode::printAST() {

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
            break;
        case NODE_TYPE:
            break;
        default:
            break;
    }
}

string TreeNode::sType2String(StmtType type) {
    return "?";
}


string TreeNode::nodeType2String (NodeType type){
    return "<>";
}
