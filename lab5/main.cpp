#include"main.tab.hh"
#include"common.h"
#include<fstream>
using namespace std;
extern TreeNode *root;
extern FILE *yyin;
extern int yyparse();
int main ()
{
    yyin=fopen("/test/input.c","r");
    yyparse();//进行语法分析
    if(root){//若存在语法树结点
        root->genNodeId();//将整棵语法树赋予id
        cout<<"root"<<root->nodeID<<endl;
        root->printAST();//打印相关信息
    }

}
int yyerror(char const* message)
{
  cout << message << endl;
  return -1;
}