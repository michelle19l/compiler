%{
    #include "common.h"
    #define YYSTYPE TreeNode *  
    TreeNode* root;
    extern int lineno;
    int yylex();
    int yyerror( char const * );
%}

%token IF ELSE WHILE FOR RETURN
%token T_CHAR T_INT T_STRING T_BOOL 

%token LOP_ASSIGN 

%token SEMICOLON

%token LPAREN RPAREN LBRACK RBRACK LBRACE RBRACE

%token IDENTIFIER INTEGER CHAR BOOL STRING
%left LOP_EQ GREAT LESS GREAT_EQ LESS_EQ NOT_EQ



%left ADD SUB
%left MUL DIV MOD
%left OR
%left AND 
%right NOT
%right NEG


%%

program
: statements {root = new TreeNode(0, NODE_PROG); root->addChild($1);};

statements
:  statement {$$=$1;}
|  statements statement {$$=$1; $$->addSibling($2);}
| LBRACE statements RBRACE {
    $$=$2;
    //作用域
}
| LBRACE  RBRACE{
    $$=new TreeNode (lineno,NODE_STMT);
    $$->stype=STMT_SKIP;
}
;

statement
: SEMICOLON  {$$ = new TreeNode(lineno, NODE_STMT); $$->stype = STMT_SKIP;}
| declaration SEMICOLON {$$ = $1;}
| assign SEMICOLON {$$=$1;}
| if_else {$$=$1;}
| while {$$=$1;}
;




while
: WHILE bool_statements statements {
    TreeNode *node=new TreeNode(lineno,NODE_STMT);
    node->stype=STMT_WHILE;
    node->addChild($2);
    node->addChild($3);
    $$=node;
}
;

if_else
: IF bool_statements statements ELSE statements {//if(..) {} else{}
    TreeNode *node=new TreeNode(lineno,NODE_STMT);
    node->stype=STMT_IF;
    node->addChild($2);//bool表达式
    node->addChild($3);//if后执行的语句
    node->addChild($5);//else后执行的语句
    $$=node;
    }
| IF bool_statements statement {
    TreeNode *node=new TreeNode(lineno,NODE_STMT);
    node->stype=STMT_IF;
    node->addChild($2);//bool表达式
    node->addChild($3);//if后执行的语句
    $$=node;
}

;

bool_statements
:  LPAREN bool_statements RPAREN{ $$=$2;}
| bool_statements AND bool_statement{
    $$=new TreeNode(lineno,NODE_EXPR);
    $$->optype=OP_AND;
    $$->addChild($1);
    $$->addChild($3);
}
| bool_statements OR bool_statement{
    $$=new TreeNode ($1->lineno,NODE_EXPR);
    $$->optype=OP_OR;
    $$->addChild($1);
    $$->addChild($3);
}
| NOT bool_statements{
    $$ =new TreeNode($2->lineno,NODE_EXPR);
    $$->optype=OP_NOT;
    $$->addChild($2);
}
| bool_statement{$$=$1;}
;

bool_statement
: expr{$$=$1;}
| bool_statement GREAT expr{
    $$=new TreeNode($1->lineno,NODE_EXPR);
    $$->optype=OP_GREAT;
    $$->addChild($1);
    $$->addChild($3);
}
| bool_statement LESS expr{
    $$=new TreeNode($1->lineno,NODE_EXPR);
    $$->optype=OP_LESS;
    $$->addChild($1);
    $$->addChild($3);
}
| bool_statement GREAT_EQ expr{
    $$=new TreeNode($1->lineno,NODE_EXPR);
    $$->optype=OP_GREAT_EQ;
    $$->addChild($1);
    $$->addChild($3);
}
| bool_statement LESS_EQ expr{
    $$=new TreeNode($1->lineno,NODE_EXPR);
    $$->optype=OP_LESS_EQ;
    $$->addChild($1);
    $$->addChild($3);
}
| bool_statement LOP_EQ expr{
    $$=new TreeNode($1->lineno,NODE_EXPR);
    $$->optype=OP_EQUAL;
    $$->addChild($1);
    $$->addChild($3);
}
| bool_statement NOT_EQ expr{
    $$=new TreeNode($1->lineno,NODE_EXPR);
    $$->optype=OP_NOT_EQ;
    $$->addChild($1);
    $$->addChild($3);
}


;

assign
: IDENTIFIER LOP_ASSIGN expr{
    $$ = new TreeNode($1->lineno,NODE_STMT);
    $$->stype=STMT_ASSIGN;
    $$->addChild($1);
    $$->addChild($3);
}
;

declaration
: T IDENTIFIER LOP_ASSIGN expr{  // declare and init
    TreeNode* node = new TreeNode($1->lineno, NODE_STMT);
    node->stype = STMT_DEFINE;
    node->addChild($1);
    node->addChild($2);
    node->addChild($4);
    $$ = node;   
} 
| T IDENTIFIER {
    TreeNode* node = new TreeNode($1->lineno, NODE_STMT);
    node->stype = STMT_DECL;
    node->addChild($1);
    node->addChild($2);
    $$ = node;   
}
;

expr
: expr ADD expr{
    $$=new TreeNode($1->lineno,NODE_EXPR);
    $$->optype=OP_ADD;
    $$->addChild($1);
    $$->addChild($3);
}
| expr SUB expr{
    $$=new TreeNode($1->lineno,NODE_EXPR);
    $$->optype=OP_SUB;
    $$->addChild($1);
    $$->addChild($3);
}
| NEG expr{
    $$=new TreeNode($1->lineno,NODE_EXPR);
    $$->optype=OP_NEG;
    $$->addChild($2);
}
| expr MUL expr{
    $$=new TreeNode($1->lineno,NODE_EXPR);
    $$->optype=OP_MUL;
    $$->addChild($1);
    $$->addChild($3);
}
| expr DIV expr{
    $$=new TreeNode($1->lineno,NODE_EXPR);
    $$->optype=OP_DIV;
    $$->addChild($1);
    $$->addChild($3);
}
| expr MOD expr{
    $$=new TreeNode($1->lineno,NODE_EXPR);
    $$->optype=OP_MOD;
    $$->addChild($1);
    $$->addChild($3);
}
|IDENTIFIER {
    $$ = $1;
}
| INTEGER {
    $$ = $1;
}
| CHAR {
    $$ =$1;
}
| STRING {
    $$ = $1;
}
;

T: T_INT {$$ = new TreeNode(lineno, NODE_TYPE); $$->type = TYPE_INT;} 
| T_CHAR {$$ = new TreeNode(lineno, NODE_TYPE); $$->type = TYPE_CHAR;}
| T_BOOL {$$ = new TreeNode(lineno, NODE_TYPE); $$->type = TYPE_BOOL;}
| T_STRING {$$ = new TreeNode(lineno, NODE_TYPE); $$->type = TYPE_STRING;}
;

%%

int yyerror(char const* message)
{
  cout << message << " at line " << lineno << endl;
  return -1;
}