%{
    #include "common.h"
    #define YYSTYPE TreeNode *  
    TreeNode* root;
    extern int lineno;
    int yylex();
    int yyerror( char const * );
%}

%token IF ELSE WHILE FOR RETURN
%token T_CHAR T_INT T_STRING T_BOOL T_INT_POINTER T_CHAR_POINTER T_VOID
%token PRINTF SCANF

%token LOP_ASSIGN ADD_ASSIGN SUB_ASSIGN MOD_ASSIGN DIV_ASSIGN MUL_ASSIGN

%token SEMICOLON COMMA POINT

%token LPAREN RPAREN LBRACK RBRACK LBRACE RBRACE


%token IDENTIFIER INTEGER CHAR BOOL STRING
%left LOP_EQ GREAT LESS GREAT_EQ LESS_EQ NOT_EQ



%left ADD SUB
%left MUL DIV MOD
%left OR
%left AND 
%right NOT
%right NEG POS

%token SELF_INC SELF_DEC
%right SELF_INC_R SELF_DEC_R
%left SELF_INC_L SELF_DEC_L

%right GET_ADDRESS GET_VALUE

%%

program
: statements {root = new TreeNode(0, NODE_PROG); root->addChild($1);root->type_set_check();}

statements
:  statement {$$=$1;}
|  statements statement {$$=$1; $$->addSibling($2);}

;

statement
: SEMICOLON  {$$ = new TreeNode(lineno, NODE_STMT); $$->stype = STMT_SKIP;}
| declaration SEMICOLON {$$ = $1;}
| eq_assign SEMICOLON {$$=$1;}
| if_else {$$=$1;}
| while {$$=$1;}
| printf SEMICOLON{$$=$1;}
| scanf SEMICOLON{$$=$1;}
| function_decl SEMICOLON {$$=$1;}
| function_def{$$=$1;}
| function_use SEMICOLON{$$=$1;}
| for {$$=$1;}
| opassign SEMICOLON {$$=$1;}
| return SEMICOLON{$$=$1;}
| block {$$=$1;}
;

return
: RETURN expr{
    $$=new TreeNode(lineno,NODE_STMT);
    $$->stype=STMT_RET;
    $$->addChild($2);
}
| RETURN bool_statements{
    $$=new TreeNode(lineno,NODE_STMT);
    $$->stype=STMT_RET;
    $$->addChild($2);
}
;



for
: FOR LPAREN declaration SEMICOLON bool_statements SEMICOLON assigns RPAREN block{
    $$=new TreeNode(lineno,NODE_STMT);
    $$->stype=STMT_FOR;
    $$->addChild($3);
    $$->addChild($5);
    $$->addChild($7);
    $$->addChild($9);
}
|FOR LPAREN SEMICOLON bool_statements SEMICOLON assigns RPAREN block{
    $$=new TreeNode(lineno,NODE_STMT);
    $$->stype=STMT_FOR;
    TreeNode* temp= new TreeNode(lineno,NODE_STMT);
    temp->stype=STMT_SKIP;
    $$->addChild(temp);
    $$->addChild($4);
    $$->addChild($6);
    $$->addChild($8);
}
;




function_decl
: T IDENTIFIER LPAREN  RPAREN{
    //函数声明
    $$=new TreeNode ($1->lineno,NODE_STMT);
    $$->stype=STMT_FUNC_DECL;
    $$->addChild($1);
    $$->addChild($2);
}
|T IDENTIFIER LPAREN params RPAREN{
    $$=new TreeNode ($1->lineno,NODE_STMT);
    $$->stype=STMT_FUNC_DECL;
    $$->addChild($1);
    $$->addChild($2);
    $$->addChild($4);
}
;
function_def
: T IDENTIFIER LPAREN params RPAREN block{
    $$=new TreeNode ($1->lineno,NODE_STMT);
    $$->stype=STMT_FUNC_DEF;
    $$->addChild($1);
    $$->addChild($2);
    $$->addChild($4);
    $$->addChild($6);
}
|  T IDENTIFIER LPAREN  RPAREN block{
    $$=new TreeNode ($1->lineno,NODE_STMT);
    $$->stype=STMT_FUNC_DEF;
    $$->addChild($1);
    $$->addChild($2);
    $$->addChild($5);
}

;
function_use
: IDENTIFIER LPAREN idlist RPAREN{
    $$=new TreeNode ($1->lineno,NODE_STMT);
    $$->stype=STMT_FUNC_USE;
    $$->addChild($1);
    $$->addChild($3);
}
|IDENTIFIER LPAREN  RPAREN{
    $$=new TreeNode ($1->lineno,NODE_STMT);
    $$->stype=STMT_FUNC_USE;
    $$->addChild($1);
}
;

params
: params COMMA param{
    $$=$1;
    $$->addSibling($3);
}
| param {
    $$=$1;
}
;

param
: T IDENTIFIER{
    $$ =new TreeNode (lineno,NODE_PARAM);
    $$->addChild($1);
    $$->addChild($2);
   
}
;



printf
: PRINTF LPAREN STRING RPAREN{//print("123");
    //直接打印字符串
    $$=new TreeNode(lineno,NODE_STMT);
    $$->stype=STMT_PRT;
    $$->addChild($3);
}
| PRINTF LPAREN STRING COMMA exprs RPAREN{
    $$=new TreeNode(lineno,NODE_STMT);
    $$->stype=STMT_PRT;
    $$->addChild($3);
    $$->addChild($5);
}
| PRINTF LPAREN idlist RPAREN{
    $$=new TreeNode(lineno,NODE_STMT);
    $$->stype=STMT_PRT;
    $$->addChild($3);
}
;

scanf
:SCANF LPAREN STRING COMMA address_idlist RPAREN{
    //直接打印字符串
    $$=new TreeNode(lineno,NODE_STMT);
    $$->stype=STMT_SCF;
    $$->addChild($3);
    $$->addChild($5);
}
;

address_idlist
: address_idlist COMMA get_address_id{
    $$=$1;
    $$->addSibling($3);
}
| get_address_id{
    $$=$1;
}
;

get_address_id
: GET_ADDRESS IDENTIFIER{
    $$=new TreeNode(lineno,NODE_EXPR);
    $$->optype=OP_ADDR;
    $$->addChild($2);
}
;

while
: WHILE LPAREN bool_statements RPAREN block{
    TreeNode *node=new TreeNode(lineno,NODE_STMT);
    node->stype=STMT_WHILE;
    node->addChild($3);
    node->addChild($5);
    $$=node;
}
;

block
: LBRACE statements RBRACE{
    $$=new TreeNode(lineno,NODE_STMT);
    $$->stype=STMT_BLOCK;
    $$->addChild($2);
}
| LBRACE RBRACE{
    $$=new TreeNode(lineno,NODE_STMT);
    $$->stype=STMT_BLOCK;
    TreeNode* temp=new TreeNode (lineno,NODE_STMT);
    temp->stype=STMT_SKIP;
    $$->addChild(temp);
}
;


if_else
: IF LPAREN bool_statements RPAREN  block  ELSE block {//if(..) {..} else{..}
    $$=new TreeNode(lineno,NODE_STMT);
    $$->stype=STMT_IF_ELSE;
    $$->addChild($3);//bool表达式
    
    TreeNode * temp=new TreeNode($5->lineno,NODE_STMT); //if后执行的语句
    temp->stype=STMT_IF;
    temp->addChild($5);
    
    TreeNode * t=new TreeNode ($7->lineno,NODE_STMT);//else后执行的语句
    t->stype=STMT_ELSE;
    t->addChild($7);//else后执行的语句
    
    $$->addChild(t);
    $$->addChild(temp);
    }
| IF LPAREN bool_statements RPAREN block {
    //if (..) {..}
    TreeNode *node=new TreeNode(lineno,NODE_STMT);
    node->stype=STMT_IF;
    node->addChild($3);//bool表达式
    node->addChild($5);
    $$=node;
}
;

bool_statements
:  LPAREN bool_statements RPAREN{ $$=$2;}
| bool_statements AND bool_statements{
    $$=new TreeNode(lineno,NODE_EXPR);
    $$->optype=OP_AND;
    $$->addChild($1);
    $$->addChild($3);
}
| bool_statements OR bool_statements{
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
| bool_statement GREAT bool_statement{
    $$=new TreeNode($1->lineno,NODE_EXPR);
    $$->optype=OP_GREAT;
    $$->addChild($1);
    $$->addChild($3);
}
| bool_statement LESS bool_statement{
    $$=new TreeNode($1->lineno,NODE_EXPR);
    $$->optype=OP_LESS;
    $$->addChild($1);
    $$->addChild($3);
}
| bool_statement GREAT_EQ bool_statement{
    $$=new TreeNode($1->lineno,NODE_EXPR);
    $$->optype=OP_GREAT_EQ;
    $$->addChild($1);
    $$->addChild($3);
}
| bool_statement LESS_EQ bool_statement{
    $$=new TreeNode($1->lineno,NODE_EXPR);
    $$->optype=OP_LESS_EQ;
    $$->addChild($1);
    $$->addChild($3);
}
| bool_statement LOP_EQ bool_statement{
    $$=new TreeNode($1->lineno,NODE_EXPR);
    $$->optype=OP_EQUAL;
    $$->addChild($1);
    $$->addChild($3);
}
| bool_statement NOT_EQ bool_statement{
    $$=new TreeNode($1->lineno,NODE_EXPR);
    $$->optype=OP_NOT_EQ;
    $$->addChild($1);
    $$->addChild($3);
}


;




declaration
: T eq_assigns{  // declare and init
    TreeNode* node = new TreeNode(lineno, NODE_STMT);
    node->stype = STMT_DEFINE;
    node->addChild($1);
    node->addChild($2);
    $$ = node;   
} 
| T idlist {
    $$= new TreeNode(lineno, NODE_STMT);
    $$->stype = STMT_DECL;
    $$->addChild($1);
    $$->addChild($2);
}

;

assigns
: assigns COMMA assign{
    $$=$1;
    $$->addSibling($3);
}
| assign{$$=$1;}
;

assign
: opassign{$$=$1;}
| eq_assign{$$=$1;}


eq_assigns
: eq_assigns COMMA eq_assign{
    $$=$1;
    $$->addSibling($3);
}
| eq_assign{$$=$1;}
;

eq_assign
: IDENTIFIER LOP_ASSIGN expr{
    $$ = new TreeNode($1->lineno,NODE_STMT);
    $$->stype=STMT_ASSIGN;
    $$->addChild($1);
    $$->addChild($3);
}
;


opassign
: IDENTIFIER ADD_ASSIGN expr{
    $$ = new TreeNode($1->lineno,NODE_STMT);
    $$->stype=STMT_ADD_ASSIGN;
    $$->addChild($1);
    $$->addChild($3);
}
|
IDENTIFIER SUB_ASSIGN expr{
    $$ = new TreeNode($1->lineno,NODE_STMT);
    $$->stype=STMT_SUB_ASSIGN;
    $$->addChild($1);
    $$->addChild($3);
}
|
IDENTIFIER MUL_ASSIGN expr{
    $$ = new TreeNode($1->lineno,NODE_STMT);
    $$->stype=STMT_MUL_ASSIGN;
    $$->addChild($1);
    $$->addChild($3);
}
|
IDENTIFIER DIV_ASSIGN expr{
    $$ = new TreeNode($1->lineno,NODE_STMT);
    $$->stype=STMT_DIV_ASSIGN;
    $$->addChild($1);
    $$->addChild($3);
}
|
IDENTIFIER MOD_ASSIGN expr{
    $$ = new TreeNode($1->lineno,NODE_STMT);
    $$->stype=STMT_MOD_ASSIGN;
    $$->addChild($1);
    $$->addChild($3);
}
| SELF_DEC %prec SELF_DEC_L IDENTIFIER {
    $$ = new TreeNode(lineno,NODE_STMT);
    $$->stype=STMT_SELF_DEC_L;
    $$->addChild($2);
}
| SELF_INC IDENTIFIER %prec SELF_INC_L{;
    $$ = new TreeNode(lineno,NODE_STMT);
    $$->stype=STMT_SELF_INC_L;
    $$->addChild($2);
}
| IDENTIFIER SELF_INC %prec SELF_INC_R{
    $$ = new TreeNode(lineno,NODE_STMT);
    $$->stype=STMT_SELF_INC_R;
    $$->addChild($2);
}
|IDENTIFIER SELF_DEC %prec SELF_DEC_R{
    $$ = new TreeNode(lineno,NODE_STMT);
    $$->stype=STMT_SELF_DEC_R;
    $$->addChild($2);
}
;

idlist
: idlist COMMA IDENTIFIER{
    $$=$1;
    $$->addSibling($3);
}
|  IDENTIFIER{
    $$=$1;
}
;

exprs
: exprs COMMA expr{
    $$=$1;
    $$->addSibling($3);
}
| expr{$$=$1;}
;

expr
: LPAREN expr RPAREN{
    $$= $2;
}
| expr ADD expr{
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
| SUB expr %prec NEG{
    
    $$=new TreeNode($1->lineno,NODE_EXPR);
    $$->optype=OP_NEG;
    $$->addChild($2);
}
| ADD expr %prec POS{
    $$=new TreeNode($1->lineno,NODE_EXPR);
    $$->optype=OP_POS;
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
| T_VOID {$$ = new TreeNode(lineno, NODE_TYPE); $$->type = TYPE_VOID;}
| T_STRING {$$ = new TreeNode(lineno, NODE_TYPE); $$->type = TYPE_STRING;}
| T_INT_POINTER {$$=new TreeNode(lineno,NODE_TYPE);$$->type=TYPE_INT_POINTER;}
| T_CHAR_POINTER{$$=new TreeNode(lineno,NODE_TYPE);$$->type=TYPE_CHAR_POINTER;}
;

%%

int yyerror(char const* message)
{
  cout << message << " at line " << lineno << endl;
  return -1;
}