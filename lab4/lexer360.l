%{
    #define YYSTYPE char*
    #include <unistd.h>
    #include "parser.tab.h"
    #include <stdio.h>
    #include <string.h>
    extern void yyerror(const char *);
%}

/* Regular definitions */
digit [0-9]
letter [a-zA-Z]
id {letter}({letter}|{digit})*
digits {digit}+
opFraction (\.{digits})?
opExponent ([Ee][+-]?{digits})?
number {digits}{opFraction}{opExponent}
%option yylineno
%option noyywrap

%%
\/\/(.*) ; 
[\t\n] ;
"(" {return *yytext;}
")" {return *yytext;}
"." {return *yytext;}
"," {return *yytext;}
"*" {return *yytext;}
"+" {return *yytext;}
";" {return *yytext;}
"-" {return *yytext;}
"/" {return *yytext;}
"=" {return *yytext;}
">" {return *yytext;}
"<" {return *yytext;}
{number} {
    yylval = strdup(yytext);
    return T_NUM;
}
{id} {
    yylval = strdup(yytext);
    return T_ID;
}
. {}
%%