%{
#include<stdio.h>
int yyerror(char* s);
int yylex(); 
%}
%token T_ID T_NUM

%%
START : ASSGN	{ printf("Valid syntax\n");}

/* Grammar for assignment */
ASSGN : T_ID '=' E	
	;

/* Expression Grammar */
E : E '+' T 	
	| E '-' T 	
	| T 	
	;
	
	
T : T '*' F 	
	| T '/' F 	
	| F 
	;

F : '(' E ')'
	| T_ID 
	| T_NUM 	
	;

%%


/* error handling function */
int yyerror(char* s)
{
	printf("Error : %s",s);
}


/* main function - calls the yyparse() function which will in turn drive yylex() as well */
int main()
{
	printf("Enter Expression\n");
	yyparse();
	return 0;
}