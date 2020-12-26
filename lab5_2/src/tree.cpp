#include "tree.h"

int TreeNode::current_node_id=0;
void TreeNode::addChild(TreeNode* child) {
    
    if(this->child==nullptr)
        {this->child=child;}
    else
    {
        TreeNode* t=this->child;
        for(;t->sibling!=nullptr;t=t->sibling);
        t->sibling=child;
    }
}

void TreeNode::addSibling(TreeNode* sibling){
    TreeNode *p = this;
    while(p->sibling != nullptr)
    {
        p = p->sibling;
    }
    p->sibling = sibling;
}

TreeNode::TreeNode(int lineno, NodeType type) {
    this->lineno=lineno;
    this->nodeType=type;
    //sibling\child
    workfield="";
    scope=nullptr;
}

void TreeNode::genNodeId() {//自顶向下生成id
    this->nodeID=current_node_id;

    if(this->child!=nullptr)
     {;
        current_node_id++;
        this->child->genNodeId();
    }
    if(this->sibling!=nullptr)
     {
        current_node_id++;
        this->sibling->genNodeId();
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
    if(this->child!=nullptr)
        this->child->printAST();
    if(this->sibling!=nullptr)
        this->sibling->printAST();

}


// You can output more info...
void TreeNode::printSpecialInfo() {
    switch(this->nodeType){
        case NODE_CONST:
            {cout<<cType2String();break;}
        case NODE_VAR:
            {

                cout<<varName2String();
                //cout<<"xxx"<<endl;
                cout<<" "<<getfield();
                break;
            }
        case NODE_EXPR:
            {cout<<opType2String();break;}
        case NODE_STMT:
            {cout<<sType2String();break;}
        case NODE_TYPE://类型
           { 
                cout<<tType2String(); 
                break;
            }
        default:
            break;
    }
}


string TreeNode::getfield(){
    //return "field";
    //cout<<"+++"<<this->workfield<<endl;
    string a="field: ";
    return a+this->scope->attribute;
}

string TreeNode::sType2String() {
    switch(this->stype)
    {
        case STMT_SKIP:
            return "stmt: empty";
        case STMT_DEFINE:
            return "stmt: define";
        case STMT_ASSIGN:
            return "stmt: assign";
        case STMT_DECL://变量的声明或者定义
            return "stmt: declaration";
        case STMT_WHILE:
            return "stmt: while";
        case STMT_FOR:
            return "stmt: for";
        case STMT_RET:
            return "stmt: return";
        case STMT_PRT:
             return "stmt: printf";
        case STMT_SCF:
            return "stmt: scanf";

        case STMT_FUNC_DECL:
            return "stmt: func decalaration";
        case STMT_FUNC_DEF:
            return "stmt: func define";
        case STMT_FUNC_USE:
            return "stmt: func using";
        case STMT_ADD_ASSIGN:
            return "stmt: +=";
        case STMT_SUB_ASSIGN:
            return "stmt: -=";
        case STMT_MUL_ASSIGN:
            return "stmt: *=";
        case STMT_DIV_ASSIGN:
            return "stmt: /=";
        case STMT_MOD_ASSIGN:
            return "stmt: %=";
        case STMT_SELF_INC_R:
            return "stmt: ++ R";
        case STMT_SELF_INC_L:
            return "stmt: ++ L";
        case STMT_SELF_DEC_R:
            return "stmt: -- R";
        case STMT_SELF_DEC_L:
            return "stmt: -- L";
        case STMT_IF_ELSE:
            return "stmt: if_else";
        case STMT_IF:
            return "stmt: if";
        case STMT_ELSE:
            return "stmt: else";
        case STMT_BLOCK:
            return "stmt: block";
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
        case  NODE_PARAM:
                return "parameter";
        
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

string TreeNode::cType2String()
{
    string a="const: ";
    switch(this->contype){
        case CON_INT:
            return a+"int "+this->int_val_;
        case CON_CHAR:
            {
                return a+"char '"+this->ch_val+"'";
            }
        case CON_STRING:
            return a+"string \""+this->str_val+"\"";
        
        default:
            return "unknown const type";
    }
}

string TreeNode:: opType2String()
{
    string a="op: ";
    switch(this->optype)
    {
        case OP_EQUAL:
            return a+"==";
        case OP_GREAT:
            return a+">";
        case OP_LESS:
            return a+"<";
        case OP_GREAT_EQ:
            return a+">=";
        case OP_LESS_EQ:
            return a+"<=";
        case OP_NOT_EQ:
            return a+"!=";
        case OP_ADD:
            return a+"+";
        case OP_SUB:
            return a+"-（减）";
        case OP_MUL:
            return a+"*";
        case OP_DIV:
            return a+"/";
        case OP_MOD:
            return a+"%";
        case OP_NEG:
            return a+"- (负号)";
        case OP_POS:
            return a+"+ (正号)";
        case OP_AND:
            return a+"&&";
        case OP_OR:
            return a+"||";
        case OP_NOT:
            return a+"!";
        case OP_ADDR:
            return a+"&";
        case OP_VAL:
            return a+"*";
        default:
            return "unknown op";
    }
}
string TreeNode::varName2String()
{
    string a="var_name: ";
    return a+this->var_name;
}

void insertID(TreeNode* node,table* scope)//向当前作用域插入ID,
{
	//cout<<lexms<<endl;
    node->scope=scope;
    node->workfield=scope->attribute;

	if(checkID(node->var_name,scope)==0)
		{cout<<"第"<<node->lineno<<"行变量"<<node->var_name<<"已占用"<<endl;return;}
	scope->lexms+=node->var_name;
	scope->lexms+="#";
	scope->item[++scope->size] = scope->lexmspointer;//添加指针
	//cout<<"+++++"<<scope->attribute<<endl;
	scope->lexmspointer=scope->lexms.length();
	scope->size++;
	//node->workfield=scope->attribute;
	//cout<<"----"<<node->workfield<<endl;
}

void getBlock(TreeNode* root,table* scope)
{
	if (root==nullptr)return;
	TreeNode* t=root->child;
	while(t!=nullptr)
	{
		if(t->stype==STMT_BLOCK||t->stype==STMT_FOR||t->stype==STMT_FUNC_DEF||t->stype==STMT_FUNC_DECL)
		{
            //cout<<"block"<<endl;
			//cout<<"get a block"<<endl;
			table* newscope=new table(scope);
			t->workfield=newscope->attribute;
            //cout<<newscope->attribute<<endl;
			t->scope=newscope;
			//cout<<scope->attribute<<endl;
			getBlock(t,newscope);
			//cout<<"xx"<<endl;
		}
        else {
            getBlock(t,scope);
        }
		t=t->sibling;
	}
}

void getVarField(TreeNode* root,table*scope)
{
	if(root==nullptr)return;
	TreeNode* t=root->child;
	if(root->scope!=nullptr)
    {
        //cout<<"原"<<scope->attribute<<endl;
        scope=root->scope;
        //cout<<root->nodeID<<endl;
        //cout<<"现"<<scope->attribute<<endl;
    }
	while(t!=nullptr)
	{
		if(t->scope==nullptr)
		{
			if(t->nodeType==NODE_VAR)
			{
				if(root->nodeType==NODE_PARAM||root->stype==STMT_DECL)
				{//变量定义或者函数形参
					//直接加入作用域
                    //if(checkID(t->var_name,scope))
					    insertID(t,scope);
				}
                else if(root->stype==STMT_FUNC_DECL)
                {
					    insertID(t,scope->father);
                }
                else if(root->stype==STMT_FUNC_DEF)
                {
                    if(checkID(t->var_name,scope->father))
					    insertID(t,scope->father);
                }
				else{
					//查找
                   
                    table* wfield=search(t->var_name,scope);
                    if(wfield==nullptr)
                    {
                        cout<<"第"<<t->lineno<<"行"<<"变量"<<t->var_name<<"未声明"<<endl;
                    }
                    else{
                        t->scope=wfield;
                        t->workfield=scope->attribute;
                        //  cout<<"开始查找"<<endl;
                        //  cout<<t->workfield<<endl;
                    }
				}
			}
			else if(t->stype== STMT_ASSIGN&&root->stype==STMT_DEFINE)
			{//变量定义
				TreeNode* m=t->child;
				for(;m!=nullptr;m=m->sibling)
				{
					if(m->nodeType==NODE_VAR)
					{
						//加入作用域
                        if(checkID(m->var_name,scope))
                            insertID(m,scope);
                        else{
                            cout<<"第"<<m->lineno<<"行"<<"该变量名"<<m->var_name<<"已经占用"<<endl;
					}
				}
			}
		}
        }
        getVarField(t,scope);
        t=t->sibling;
    }	
}
