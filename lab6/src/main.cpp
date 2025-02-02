#include "common.h"
#include <fstream>


extern TreeNode *root;
extern FILE *yyin;
extern int yyparse();

using namespace std;
ofstream asmout("asmout.s");
int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        FILE *fin = fopen(argv[1], "r");
        if (fin != nullptr)
        {
            yyin = fin;
        }
        else
        {
            cerr << "failed to open file: " << argv[1] << endl;
        }
    }
    yyparse();


    table* scope=new table;
    table:: scoperoot=scope;
    if(root != NULL) {
        root->genNodeId();
        
       getBlock(root,scope);//获得作用域树
       
       if(!getVarField(root,scope))
            {cout<<"作用域检查出错";return 0;//将变量加入作用域
            }

        if(!root->typechecking())
            {//return 0;//类型检查
            cout<<"类型检查出错";
            return 0;
            }
        //root->printAST();//打印语法树

        TreeNode* t=root->child;
        while(t!=nullptr)
        {t->recursivegenlabel();t=t->sibling;}
        //table::print(table::scoperoot);//打印符号表
        //table::print(table::conststringtable);
        //table::print(table::functable);
        root->asmout(asmout);

       
    }
    return 0;
}