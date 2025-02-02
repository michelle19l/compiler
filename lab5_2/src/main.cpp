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

        getBlock(root,scope);
       
        getVarField(root,scope);

        table::print(scoperoot);
        //cout<<table::lexms<<endl;

        root->printAST();
    }
    return 0;
}