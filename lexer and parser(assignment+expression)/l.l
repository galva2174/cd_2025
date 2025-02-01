%{
#include "y.tab.h"
%}
/* Regular definitions */
digit	[0-9]
letter	[a-zA-Z]
id	{letter}({letter}|{digit})*
digits	{digit}+

%%
\/\/(.*) ; // ignore comments
[\t\n] ; // ignore whitespaces
"("		{return *yytext;}
")"		{return *yytext;}
"."         	{return *yytext;}
","         	{return *yytext;}
"*"         	{return *yytext;}
"+"         	{return *yytext;}
";"         	{return *yytext;}
"-"         	{return *yytext;}
"/"         	{return *yytext;}
"="         	{return *yytext;}
">"         	{return *yytext;}
"<"         	{return *yytext;}
{digits}	{
			return T_NUM;
		}
{id}        	{
			return T_ID;
				}
    /*.		{} // anything else => ignore*/
%%
int yywrap(){return 1;}