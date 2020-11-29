%option noyywrap
%{
    //main.l词法分析文件 通过flex编译后生成lex.yy.cc 在文件中引用common.h来使用自定义语法树结点的方法 引用main.tab.hh来使用语法分析过程中声明的token 配合语法分析器使用 生成的整个过程通过yylex()进行调用
    #include"common.h"
    #include"main.tab.hh"
    int lines=0;
%}

INTEGER [0-9]+
ID [[:alpha:]_][[:alpha:][:digit:]_]*

EOL (\r\n|\n)
WHITE [\t ]
%%

"true" {
    TreeNode *node = new TreeNode(lines,NODE_BOOL);
    node->bool_val = true;
    yylval = node;
    return TRUE;
}
"false" {
    TreeNode *node = new TreeNode(lines,NODE_BOOL);
    node->bool_val = false;
    yylval = node;
    return FALSE;
}

"int" return INT;
"void" return VOID;

"if" return IF;
"while" return WHILE;
"else" return ELSE;

"printf" return PRINTF;
"scanf" return SCANF;

"=" return ASSIGN;

"+" return ADD;

"!" return NOT;
"==" return EQUAL;

";" return SEMICOLON;
"(" return LPAREN;
")" return RPAREN;
"{" return LBRACE;
"}" return RBRACE;

{INTEGER} {
    TreeNode *node = new TreeNode(lines,NODE_CONST);
    node->int_val = atoi(yytext);
    yylval = node;
    return INTEGER;
}
{ID} {
    TreeNode *node = new TreeNode(lines,NODE_VAR);
    node->var_name = string(yytext);
    yylval = node;
    return ID;
}
{EOL} {lines++;}
{WHITE}

%%