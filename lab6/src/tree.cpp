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
    this->checktype=Notype;
    var_name=-1;
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
    cout<<'\t'<<checktype2string();
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
    if(scope!=nullptr)
    return a+this->scope->attribute;
    else return a;
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

string TreeNode ::checktype2string()
{
    string a="类型：";
    switch(this->checktype)
    {
        case Integer:
            return a+"Integer";
        case Boolean:
            return a+"Boolean";
        case Char:
            return a+"Char";
        case String:
            return a+"String";
        default:
            return a+"";
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

	if(checkID(node->var_name,scope)!=-1)
		{cout<<"第"<<node->lineno<<"行变量"<<node->var_name<<"已占用"<<endl;return;}
	scope->item[scope->size].name=node->var_name;
    scope->item[scope->size].type=node->checktype;
    scope->item[scope->size].var_func=node->var_func;

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
        scope=root->scope;
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
					    insertID(t,scope);
				}
                else if(root->stype==STMT_FUNC_DECL)
                {
					    insertID(t,scope->father);
                }
                else if(root->stype==STMT_FUNC_DEF)
                {
                    if(checkID(t->var_name,scope->father)==-1)
					{
                        insertID(t,scope->father);
                    }
                }
				else{
					//查找
                   
                    table* wfield=nullptr;
                    wfield=search(t->var_name,scope);
                    if(wfield==nullptr)
                    {
                        cout<<"第"<<t->lineno<<"行"<<"变量"<<t->var_name<<"未声明"<<endl;
                        t->scope=nullptr;
                        t->workfield="";
                        t->checktype=Notype;
                    }
                    else{
                        t->scope=wfield;
                        t->workfield=scope->attribute;
                        t->var_func=0;
                        t->checktype=scope->item[checkID(t->var_name,wfield)].type;
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
                        if(checkID(m->var_name,scope)==-1)
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




bool TreeNode::type_check()
{
    //表达式+ - * / 关系表达式 assign，左右类型相同或者为char和int
    TreeNode * t=this->child;
    if(this->child==nullptr)return true;
    if(this->nodeType==NODE_EXPR)
    {
        switch(this->optype)
        {
            case OP_AND:
            case OP_OR:
            {
                if(t->checktype==Boolean&&t->sibling->checktype==Boolean)
                {
                    this->checktype=Boolean;
                    return true;
                }
                return false;
            }
            case OP_NOT:
            {
                if(t->checktype==Boolean)
                {
                    this->checktype=Boolean;
                    return true;
                }
                return false;
            }
            case OP_NEG:
            case OP_POS:
            {
                if(t->checktype==Integer)
                {
                    this->checktype=Integer;
                    return true;
                }
                return false;
            }
            case OP_ADD:
            case OP_SUB:
            case OP_MUL:
            case OP_DIV:
            case OP_MOD:
            {
                if((t->checktype==Integer||t->checktype==Char)&&(t->sibling->checktype==Integer||t->sibling->checktype==Char))
                {
                    this->checktype=Integer;
                    //this->printNodeInfo() ;
                    return true;
                }
                return false;
            }
            
            case OP_GREAT:
            case OP_LESS:
            case OP_GREAT_EQ:
            case OP_LESS_EQ:
            {
                if((t->checktype==Integer||t->checktype==Char)&&(t->sibling->checktype==Integer||t->sibling->checktype==Char))
                {
                    this->checktype=Boolean;
                    return true;
                }
                return false;
            }
            case OP_EQUAL://==
            case OP_NOT_EQ:
            {
                if((t->checktype==Integer||t->checktype==Char||t->checktype==Boolean)&&(t->sibling->checktype==Integer||t->sibling->checktype==Char||t->sibling->checktype==Boolean))
                {
                    this->checktype=Boolean;
                    return true;
                }
                return false;
            }
            default:
                return true;
            
        }
    }
    //if for while bool表达式
    else if(this->nodeType==NODE_STMT)
    {    
        switch(this->stype)
        {
            case STMT_WHILE:
            case STMT_IF:
            {
                if(t->checktype==Integer||t->checktype==Boolean||t->checktype==Char){
                    return true;
                }
                return false;
            }
            case STMT_FOR:
            {
                if(t->sibling->checktype==Integer||t->sibling->checktype==Boolean||t->sibling->checktype==Char){
                    return true;
                }
                return false;
            }
            case STMT_ASSIGN: 
            case STMT_ADD_ASSIGN:
            case STMT_SUB_ASSIGN:
            case STMT_MUL_ASSIGN:
            case STMT_DIV_ASSIGN:
            case STMT_MOD_ASSIGN:
            {
                if((t->checktype==Integer||t->checktype==Char)&&(t->sibling->checktype==Integer||t->sibling->checktype==Char))
                {
                    this->checktype=Integer;
                    return true;
                }
                return false;
            }
            case STMT_SELF_INC_R:
            case STMT_SELF_INC_L:
            case STMT_SELF_DEC_R:
            case STMT_SELF_DEC_L:
            {
                if(t->checktype==Integer||t->checktype==Char)
                {
                    this->checktype=t->checktype;
                    return true;
                }
                return false;
            }
            default:
                return true;
        }
    }
    return true;
}


// int TreeNode::typechecking()
// {
//     //遍历语法树
//     bool tempthis=this->type_chekc();
//     TreeNode* t=this->child;
//     while(t!=nullptr)
//     {
//         if(t->type_set_check()==0)
//             return 0;
//         t=t->sibling;
//     }
//     return 1;
// }f


int TreeNode::typechecking()
{
    TreeNode* t=this->child;
    while(t!=nullptr)
    {
        if(t->typechecking()==0)//失败
        {
            //t->printNodeInfo();
            cout<<"第"<<t->lineno<<"行结点"<<this->nodeID<<"类型检查失败"<<endl;
            return 0;
        }
        t=t->sibling;
    }
    if(this->type_check()==0)
    {
        //this->printNodeInfo();
        cout<<"第"<<this->lineno<<"行结点"<<this->nodeID<<"类型检查失败"<<endl;
            return 0;
    }
    return 1;
}