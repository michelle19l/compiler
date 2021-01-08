%option nounput
%{
#include "common.h"
#include "main.tab.h"  // yacc header
int lineno=1;
%}
BLOCKCOMMENT \/\*([^\*^\/]*|[\*^\/*]*|[^\**\/]*)*\*\/
LINECOMMENT \/\/[^\n]*
EOL	(\r\n|\r|\n)
WHILTESPACE [[:blank:]]

INTEGER ([1-9]|[0-9]*)|(0[0-9]*)|(0x[0-9]*)

CHAR (\'.?\')|(\'\\t\')|(\'\\n\')|(\'\\r\') 

STRING \".+\"

IDENTIFIER [[:alpha:]_][[:alpha:][:digit:]_]*
%%

{BLOCKCOMMENT}  /* do nothing */
{LINECOMMENT}  /* do nothing */


"int" return T_INT;
"bool" return T_BOOL;
"char" return T_CHAR;
"string" return T_STRING;
"void" return T_VOID;

"int*" return T_INT_POINTER;
"char*" return T_CHAR_POINTER;

"="  return LOP_ASSIGN;
"-=" return SUB_ASSIGN;
"+=" return ADD_ASSIGN;
"*=" return MUL_ASSIGN;
"/=" return DIV_ASSIGN;
"%=" return MOD_ASSIGN;

"++" return SELF_INC;
"--" return SELF_DEC;

"if" return IF;
"else" return ELSE;
"while" return WHILE;
"for" return FOR;
"return" return RETURN;

"printf" return PRINTF;
"scanf" return SCANF;


">" return GREAT;
"<" return LESS;
">=" return GREAT_EQ;
"<=" return LESS_EQ;
"==" return LOP_EQ;
"!=" return  NOT_EQ;

"&" return GET_ADDRESS;



"+" return ADD;
"-" return SUB;
"*" return MUL;
"/" return DIV;
"%" return MOD;

"&&" return AND;
"||" return OR;
"!" return NOT;


"(" return LPAREN;
")" return RPAREN;
"[" return LBRACK;
"]" return RBRACK;
"{" return LBRACE;
"}" return RBRACE;

"." return POINT;
"," return COMMA;
";" return  SEMICOLON;

{INTEGER} {
    TreeNode* node = new TreeNode(lineno, NODE_CONST);
    node->type = TYPE_INT;
    node->int_val = tovalue(yytext);
    node->int_val_=yytext;
    node->contype=CON_INT;
    yylval = node;
    node->checktype=Integer;
    return INTEGER;
}


{CHAR} {
    TreeNode* node = new TreeNode(lineno, NODE_CONST);
    node->type = TYPE_CHAR;
    node->int_val = yytext[1];
    node->ch_val=yytext[1];
    
    node->contype=CON_CHAR;
    yylval = node;
    node->checktype=Char;
    return CHAR;
}

{STRING} {
    TreeNode* node = new TreeNode(lineno, NODE_CONST);
    node->type = TYPE_STRING;
    int i=1;
    for(;yytext[i]!='\"';i++)
        node->str_val+=(char)yytext[i];
    node->str_val[i]='\0';
    node->contype=CON_STRING;
    yylval = node;
    node->checktype=String;
    return STRING;
}

{IDENTIFIER} {
    TreeNode* node = new TreeNode(lineno, NODE_VAR);
    node->var_name = string(yytext);
    yylval = node;
    return IDENTIFIER;
}





{WHILTESPACE} /* do nothing */

{EOL} lineno++;

. {
    cerr << "[line "<< lineno <<" ] unknown character:" << yytext << endl;
}
%%