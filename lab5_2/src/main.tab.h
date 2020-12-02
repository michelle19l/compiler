/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_SRC_MAIN_TAB_H_INCLUDED
# define YY_YY_SRC_MAIN_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IF = 258,
    ELSE = 259,
    WHILE = 260,
    FOR = 261,
    RETURN = 262,
    T_CHAR = 263,
    T_INT = 264,
    T_STRING = 265,
    T_BOOL = 266,
    T_INT_POINTER = 267,
    T_CHAR_POINTER = 268,
    T_VOID = 269,
    PRINTF = 270,
    SCANF = 271,
    LOP_ASSIGN = 272,
    ADD_ASSIGN = 273,
    SUB_ASSIGN = 274,
    MOD_ASSIGN = 275,
    DIV_ASSIGN = 276,
    MUL_ASSIGN = 277,
    SEMICOLON = 278,
    COMMA = 279,
    POINT = 280,
    LPAREN = 281,
    RPAREN = 282,
    LBRACK = 283,
    RBRACK = 284,
    LBRACE = 285,
    RBRACE = 286,
    IDENTIFIER = 287,
    INTEGER = 288,
    CHAR = 289,
    BOOL = 290,
    STRING = 291,
    LOP_EQ = 292,
    GREAT = 293,
    LESS = 294,
    GREAT_EQ = 295,
    LESS_EQ = 296,
    NOT_EQ = 297,
    ADD = 298,
    SUB = 299,
    MUL = 300,
    DIV = 301,
    MOD = 302,
    OR = 303,
    AND = 304,
    NOT = 305,
    NEG = 306,
    POS = 307,
    SELF_INC = 308,
    SELF_DEC = 309,
    SELF_INC_R = 310,
    SELF_DEC_R = 311,
    SELF_INC_L = 312,
    SELF_DEC_L = 313,
    GET_ADDRESS = 314,
    GET_VALUE = 315
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_MAIN_TAB_H_INCLUDED  */
