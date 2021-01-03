#include "tree.h"

int TreeNode::current_node_id=0;
int TreeNode::current_offset=-12;
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
    set=0;
}



void TreeNode::genNodeId() {//自顶向下生成id
    this->nodeID=current_node_id;
    char tmp[20];sprintf(tmp,"L_%d",this->nodeID);
    this->label=tmp;
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
    if(this->nodeType==NODE_VAR||this->nodeType==NODE_EXPR)
        cout<<'\t'<<offset;
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
            {cout<<"const: "+cType2String();break;}
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
        case OP_FUNC_USE:
            return a+"function";
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

int insertID(TreeNode* node,table* scope)//向当前作用域插入ID,
{
    node->scope=scope;
    node->workfield=scope->attribute;

    if(node->var_name!="")
	if(checkID(node->var_name,scope)!=-1)
		{cout<<"第"<<node->lineno<<"行变量"<<node->var_name<<"已占用"<<endl;return -1;}
            scope->item[scope->size].offset=node->offset;
            scope->item[scope->size].name=node->var_name;
            scope->item[scope->size].int_val=node->int_val;
            //cout<<"-----"<<node->int_val<<endl;
            scope->item[scope->size].char_val=node->ch_val;
            //scope->item[scope->size].str_val=node->str_val;
        scope->item[scope->size].str_val=node->str_val;


    
    scope->item[scope->size].label=node->label;
    scope->item[scope->size].type=node->checktype;
    scope->item[scope->size].var_func=node->var_func;
    scope->item[scope->size].set=node->set;
    //scope->item[scope->size].head=node->head;//参数列表
	scope->size++;
    int t=scope->size-1;

    //scope=temp;
    return t;
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
    root->genoffset();
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
                    t->set=-1;//未设置初值

					insertID(t,scope);
				}
                else if(root->stype==STMT_FUNC_DECL)
                {
                    if(checkID(t->var_name,scope->father)==-1)
					{
                        int index=insertID(t,scope->father);
                        if(t->sibling!=nullptr)
                        {
                        TreeNode*m=t->sibling->child;
                        if(m!=nullptr)
                        {
                            scope->father->item[index].head=new checktypelink;
                            checktypelink* link=scope->father->item[index].head;
                            for(;m!=nullptr;m=m->sibling)
                            {
                                if(m->nodeType==NODE_TYPE)
                                {
                                    link->param=m->checktype;
                                    link->next=new checktypelink;
                                }
                            }
                        }
                        }
                    }
                }
                else if(root->stype==STMT_FUNC_DEF)
                {
                    if(checkID(t->var_name,scope->father)==-1)
					{
                        int index=insertID(t,scope->father);
                        if(t->sibling!=nullptr)
                        {
                        TreeNode*m=t->sibling->child;
                        if(m!=nullptr)
                        {
                            scope->father->item[index].head=new checktypelink;
                            checktypelink* link=scope->father->item[index].head;
                            for(;m!=nullptr;m=m->sibling)
                            {
                                if(m->nodeType==NODE_TYPE)
                                {
                                    link->param=m->checktype;
                                    link->next=new checktypelink;
                                }
                            }
                        }
                        }
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

                        int index=checkID(t->var_name,wfield);
                        t->checktype=wfield->item[index].type;
                        t->offset=wfield->item[index].offset;
                        switch(t->checktype)
                        {
                            case Integer:
                            {
                                t->int_val=wfield->item[index].int_val;
                                break;
                            }
                            case Char:
                            {
                                t->ch_val=wfield->item[index].char_val;
                                break;
                            }
                            case String:
                            {
                                t->str_val=wfield->item[index].str_val;
                                break;
                            }
                        }
                    }
				 }
			}
			else if(t->stype== STMT_ASSIGN&&root->stype==STMT_DEFINE)
			{//变量定义
                TreeNode* m=t->child;
				if(m->nodeType!=NODE_VAR)
                    m=m->sibling;
                if(checkID(m->var_name,scope)==-1)
                {
                    if(scope->attribute=="0")
                    {
                        switch(m->checktype)
                        {
                            case Integer:
                            {
                                m->int_val=m->sibling->int_val;
                                break;
                            }
                            case Char:
                            {
                                m->ch_val=m->sibling->ch_val;
                                break;
                            }
                            case String:
                            {
                                m->str_val=m->sibling->str_val;
                                break;
                            }
                        }
                    }
                    insertID(m,scope);
                }
                else{
                    cout<<"第"<<m->lineno<<"行"<<"该变量名"<<m->var_name<<"已经占用"<<endl;
                
				// for(;t!=nullptr;t=t->sibling)
				// {
                //     TreeNode* m=t->child;
				// 	if(m->nodeType==NODE_VAR)
				// 	{
				// 		//加入作用域
                //         if(checkID(m->var_name,scope)==-1)
                //             insertID(m,scope);
                //         else{
                //             cout<<"第"<<m->lineno<<"行"<<"该变量名"<<m->var_name<<"已经占用"<<endl;
				// 	}
				// }
			}
		}
        }
        if (t->contype)
        {
            if(t->contype==CON_STRING)
            {
                //添加至全局常量表
                t->var_func=2;
                insertID(t,table::conststringtable);
                insertID(t,scope);
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
                if(t->checktype==Integer&&t->sibling->checktype==Integer)
                {
                    this->checktype=Integer;
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
                if(t->checktype==t->sibling->checktype)
                {
                    this->checktype=Boolean;
                    return true;
                }
                return false;
            }
            case OP_FUNC_USE:
            {
                this->checktype=t->checktype;
                return true;
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
                if(t->checktype==Integer||t->checktype==Boolean){
                    return true;
                }
                return false;
            }
            case STMT_FOR:
            {
                if(t->sibling->checktype==Integer||t->sibling->checktype==Boolean||t->sibling->checktype==Integer){
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
                if(t->checktype==t->sibling->checktype)
                {
                    this->checktype=t->checktype;
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
            cout<<"第"<<t->lineno<<"行结点"<<this->nodeID<<"类型检查失败"<<endl;
            return 0;
        }
        t=t->sibling;
    }
    if(this->type_check()==0)
    {
        cout<<"第"<<this->lineno<<"行结点"<<this->nodeID<<"类型检查失败"<<endl;
            return 0;
    }
    return 1;
}






void TreeNode::asmout(ofstream& asmout)
{
    asmconst(asmout);
    asmstatic();
    TreeNode* t=this->child;
    for(;t!=nullptr;t=t->sibling)
    { 
        if(t->stype==STMT_FUNC_DEF)
        {
            t->asmfunc();
        }
    }
}


void TreeNode:: asmfunc()
{
    cout<<"\t.text"<<endl;cout<<"\t.globl\t"<<this->child->sibling->var_name<<""<<endl;cout<<"\t.type\t"<<this->child->sibling->var_name<<",@function"<<endl;cout<<""<<this->child->sibling->var_name<<":"<<endl;


    if(this->child->sibling->var_name=="main")//主函数
    {
        cout<<"\tleal\t4(%esp), %ecx"<<endl;cout<<"\tandl\t$-16, %esp"<<endl;cout<<"\tpushl\t-4(%ecx)"<<endl;cout<<"\tpushl\t%ebp"<<endl;cout<<"\tmovl\t%esp, %ebp"<<endl;cout<<"\tpushl\t%ecx"<<endl;cout<<"\tsubl\t$"<<(this->scope->size+1)*4+100<<", %esp"<<endl;cout<<""<<endl;  
        
        this->child->sibling->sibling->asmstmt();
        cout<<endl;
        cout<<"\tmovl\t$0, %eax"<<endl;
        cout<<"\tmovl\t-4(%ebp), %ecx"<<endl;cout<<"\tleave"<<endl;cout<<"\tleal\t-4(%ecx), %esp"<<endl;cout<<"\tret"<<endl;cout<<"\t.section\t.note.GNU-stack,\"\",@progbits"<<endl;


        // cout<<"\tpushl\t%ebp"<<endl;
        // cout<<"\tmovl\t%esp, %ebp"<<endl;
        // cout<<"\tsubl\t$"<<(scope->size+1)*4<<", %esp"<<endl;
        // this->child->sibling->sibling->asmstmt();
        
        
        // //cout<<"\tmovl\t$0, %eax"<<endl;
        // cout<<"\tleave"<<endl;
        // cout<<"\tret"<<endl;
        // cout<<"\t.section\t.note.GNU-stack,\"\",@progbits"<<endl;
        
    }

    
}

void TreeNode:: asmstmt()
{
    TreeNode*t=this->child;
    while(t!=nullptr)
    {
        t->asmstmt();
        t=t->sibling;
    }
    if(nodeType==NODE_CONST)
    {
        // cout<<"\tmovl\t";
        // if(this->sibling->nodeType==contype)
        // {
        //     cout<<"$"<<this->setval();
        // }
        // else cout<<this->asmnode();
        // cout<<", %eax"<<endl;
    }
    switch(this->stype)
    {
        case STMT_PRT:
        {
            this->asmprintf();
            break;
        }
        case STMT_RET:
        {
            this->asmret();
        }
        //case STMT_DEFINE:
        case STMT_ASSIGN:
        {
            if(this->child->scope->attribute!="0")
            {
                //非局部变量
                //this->rightparam();
                cout<<"\tmovl\t"<<this->child->sibling->setval()<<", %eax"<<endl;
                this->child->asmsetvalue();
                
            }
            break;
        }

        default:
            break;
    }
    switch(this->optype)
    {
        case OP_ADD:
        {
            this->asmop();
            break;
        }
        default:
            break;
    }
    cout<<endl;
}

void TreeNode::asmconst(ofstream& asmout)
{
    cout<<"	.section	.rodata"<<endl;//
    for(int i=0;i<table::conststringtable->size;i++)
    {
        cout<<table::conststringtable->item[i].label<<":"<<endl;;
        cout<<"\t.string \""<<table::conststringtable->item[i].str_val<<"\""<<endl;;
    }
}


string TreeNode::setval()
{
    string a="";
    val=0;
    if(this->nodeType==NODE_CONST)
    {
        
        if(int_val)
            {val=int_val;}
        else if(ch_val)
        {
            val=(int)ch_val;
        }
        else if (b_val)
        {
            val=(int)b_val;
        }
        
        char tmp[20];
        sprintf(tmp,"$%d",val);
        a=tmp;
    }
    else if(this->nodeType==NODE_EXPR||this->nodeType==NODE_VAR)
    {
        char tmp[20];
        sprintf(tmp,"%d",offset);
        a=tmp;
        a+="(%ebp)";
    }
    return a;
}


TreeNode* TreeNode::leftsibling()
{
    TreeNode* t=this;
    for(;t->sibling!=this;t=t->sibling){
        if(t==nullptr)
            return nullptr;
    }
    return t;
}
int TreeNode::pushparam()//将参数从右至左压栈
{   
    TreeNode* t=this->sibling;
    int count=0;
    if(t!=nullptr)
    {
        count=t->pushparam();
    }
    count++;
    if(this->scope->attribute=="0")//全局
    {
        cout<<"\tmovl\t"<<this->var_name<<", %eax"<<endl;
    }
    else 
    {
        cout<<"\tmovl\t"<<asmnode()<<", %eax"<<endl;
    }
    cout<<"\tpushl\t%eax"<<endl;
    return count;
}
void TreeNode::asmprintf()
{
    cout<<"\tsubl\t$12, %esp"<<endl;
    int count=this->child->sibling->pushparam();
    count*=4;

    cout<<"\tpushl\t$"<<this->child->label<<""<<endl;;
    cout<<"\tcall\tprintf\n\taddl\t$"<<12+count+4<<", %esp"<<endl;
}

 string TreeNode::asmnode()
 {
    string a="";
    char tmp[20];sprintf(tmp,"%d",this->offset);
    a=tmp;
    a+="(%ebp)";
    return a;
 }



void TreeNode::asmret()
{
    cout<<"\tmovl\t";
    if(this->child->nodeType==NODE_CONST)
    {
        cout<<"$";
        switch(this->child->contype)
        {
            case CON_INT:
            {
                cout<<this->int_val;
                break;
            }
            case CON_CHAR:
            {
                cout<<this->ch_val;
                break;
            }
            case CON_STRING:
            {
                cout<<this->str_val;
                break;
            }
            default:
            {
                break;
            }
        }
    }
    else 
    {
        cout<<this->child->offset<<"(%ebp)";
    }
    cout<<", %eax"<<endl;
}










void TreeNode:: genoffset()
{
    if(this->nodeType==NODE_EXPR)
    {
        current_offset-=4;
        this->offset=current_offset;
    }
    else if(this->nodeType==NODE_STMT)
    {
        if(this->stype==STMT_DEFINE)
        {
            TreeNode* t=this->child;
            for(;t!=nullptr;t=t->sibling)
            {
                if(t->child!=nullptr)
                {
                    current_offset-=4;
                    t->child->offset=current_offset;
                }
            }
        }
        else if(this->stype==STMT_DECL)
        {
            TreeNode* t=this->child->sibling;
            for(;t!=nullptr;t=t->sibling)
            {
                current_offset-=4;
                t->offset=current_offset;
            }
        }
        else if(this->stype==STMT_FUNC_DEF)
        {
            current_offset=-12;
        }
    }
    
}

void TreeNode::asmstatic()//打印全局变量
{
    cout<<"\t.text"<<endl;
    cout<<"\t.data"<<endl;
    for(int i=0;i<table::scoperoot->size;i++)
    {
        if(table::scoperoot->item[i].var_func==1)
            continue;
        if(set==0)
        {//定义
            cout<<"\t.globl\t"<<table::scoperoot->item[i].name<<endl;
            switch(table::scoperoot->item[i].type)
            {
                case Integer:
                {
                    cout<<"\t.align 4"<<endl;
                    cout<<"\t.type\t"<<table::scoperoot->item[i].name<<", @object"<<endl;
                    cout<<table::scoperoot->item[i].name<<":"<<endl;
                    cout<<"\t.long\t"<<table::scoperoot->item[i].int_val<<endl;
                    break;
                }
                case Char:
                {
                    cout<<"\t.type\t"<<table::scoperoot->item[i].name<<", @object"<<endl;
                    cout<<table::scoperoot->item[i].name<<":"<<endl;
                    cout<<"\t.byte\t"<<(int)table::scoperoot->item[i].char_val<<endl;
                }
                default:
                    break;
            }
        }
        else{
            //声明
            cout<<"\t.comm"<<table::scoperoot->item[i].name;
            switch(table::scoperoot->item[i].type)
            {
                case Integer:
                { 
                    cout<<"4,4"<<endl;
                    break;
                }
                case Char:
                {
                    cout<<"1,1"<<endl;
                    break;
                }
                default:
                    break;
            }
        }
    }
}


void TreeNode::asmsetvalue()
{//movl	%eax, -12(%ebp)
    cout<<"\tmovl\t";
    if(this->sibling->nodeType==contype)
    {
        cout<<"$"<<this->sibling->setval();
    }
    else cout<<"%eax";
    cout<<", "<<this->asmnode();
    cout<<endl;
}


void TreeNode::leftparam()
{   
    cout<<"\tmovl\t";
    cout<<this->child->setval();
    cout<<", %eax"<<endl;
    
}

void TreeNode::rightparam()
{   
    cout<<"\tmovl\t";
    cout<<this->child->sibling->setval();
    
    cout<<", %edx"<<endl;

}

void TreeNode:: asmop()
{
    //当前结点是操作符
    switch(this->optype)
    {
        case OP_ADD:
        {
            this->leftparam();
            this->rightparam();
            cout<<"\taddl\t%edx, %eax"<<endl;
            cout<<"\tmovl\t%eax, "<<this->asmnode()<<endl;
        }
    }
}