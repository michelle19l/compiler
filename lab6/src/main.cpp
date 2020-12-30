#include "common.h"
#include <fstream>


extern TreeNode *root;
extern FILE *yyin;
extern int yyparse();

using namespace std;
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
    table* scoperoot=scope;
    if(root != NULL) {
        root->genNodeId();
        
       getBlock(root,scope);//获得作用域树
       
        getVarField(root,scope);//将变量加入作用域

        root->typechecking();//类型检查
        root->printAST();//打印语法树
        table::print(scoperoot);//打印符号表
        

       
    }
    return 0;
}