%{
#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"
#include <string.h>

int line_number = 1;
int column = 1;

// Function to check if identifier is a keyword
int is_keyword(const char* str) {
    static const char* keywords[] = {
        "auto", "break", "case", "char", "const", "continue", "default", 
        "do", "double", "else", "enum", "extern", "float", "for", "goto",
        "if", "int", "long", "register", "return", "short", "signed",
        "sizeof", "static", "struct", "switch", "typedef", "union",
        "unsigned", "void", "volatile", "while", NULL
    };
    
    for (int i = 0; keywords[i] != NULL; i++) {
        if (strcmp(str, keywords[i]) == 0) {
            return 1;
        }
    }
    return 0;
}
%}

%option noyywrap
%x COMMENT

digit       [0-9]
letter      [a-zA-Z]
identifier  {letter}({letter}|{digit})*
number      {digit}+
whitespace  [ \t]+
newline     \n

%%
"/*"         { BEGIN(COMMENT); column += yyleng; }
<COMMENT>{
"*/"         { BEGIN(INITIAL); column += yyleng; }
\n           { line_number++; column = 1; }
.            { column += yyleng; }
}

"#include"   { column += yyleng; return T_INCLUDE; }
"<stdio.h>"  { column += yyleng; return T_STDIO; }
"int"        { column += yyleng; return T_INT; }
"char"       { column += yyleng; return T_CHAR; }
"for"        { column += yyleng; return T_FOR; }
"while"      { column += yyleng; return T_WHILE; }
"do"         { column += yyleng; return T_DO; }
"if"         { column += yyleng; return T_IF; }
"else"       { column += yyleng; return T_ELSE; }
"return"     { column += yyleng; return T_RETURN; }
"main"       { column += yyleng; return T_MAIN; }
"++"         { column += yyleng; return T_INC; }
"<="         { column += yyleng; return T_LE; }
">="         { column += yyleng; return T_GE; }
"=="         { column += yyleng; return T_EQ; }
"+"          { column += yyleng; return '+'; }
"-"          { column += yyleng; return '-'; }
"*"          { column += yyleng; return '*'; }
"/"          { column += yyleng; return '/'; }
"="          { column += yyleng; return '='; }
"<"          { column += yyleng; return '<'; }
">"          { column += yyleng; return '>'; }
","          { column += yyleng; return ','; }
";"          { column += yyleng; return ';'; }
"("          { column += yyleng; return '('; }
")"          { column += yyleng; return ')'; }
"{"          { column += yyleng; return '{'; }
"}"          { column += yyleng; return '}'; }
"["          { column += yyleng; return '['; }
"]"          { column += yyleng; return ']'; }

{identifier} {
    if(yyleng > 31) {
        printf("Warning: Identifier too long at line %d, truncating to 31 characters\n", line_number);
        yytext[31] = '\0';
    }
    
    // Check if identifier is a keyword
    if(is_keyword(yytext)) {
        printf("Error at line %d, column %d: Cannot use keyword '%s' as an identifier\n", 
               line_number, column, yytext);
        return -1;  // Return error token
    }
    
    yylval.strval = strdup(yytext);
    column += yyleng;
    return T_ID;
}

{number}    { 
    yylval.intval = atoi(yytext);
    column += yyleng;
    return T_NUM;
}

"//".*      { /* Single line comments - ignore */ }
{whitespace} { column += yyleng; }
{newline}   { line_number++; column = 1; }
.           { printf("Unrecognized character %s at line %d\n", yytext, line_number); }

%%
