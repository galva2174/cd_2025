%{
	#include "quad_generation.c"
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>

	#define YYSTYPE char*

	void yyerror(char* s); 											// error handling function
	int yylex(); 													// declare the function performing lexical analysis
	extern int yylineno; 											// track the line number

	FILE* icg_quad_file;
	int temp_no = 1;
%}


%token T_ID T_NUM

/* specify start symbol */
%start START


%%
START : ASSGN	{ 
					printf("Valid syntax\n");
	 				YYACCEPT;										// If program fits the grammar, syntax is valid
	 			}

/* Grammar for assignment */
ASSGN : T_ID '=' E	{	quad_code_gen($$ , $3 , "=" , NULL); }	
	;

/* Expression Grammar */
E : E '+' T 		{$$ = new_temp(); quad_code_gen($$,$1, "+" , $3);}
	| E '-' T 	{$$ = new_temp(); quad_code_gen($$,$1, "-" , $3);}
	| T
	;
	
	
T : T '*' F 		{$$ = new_temp(); quad_code_gen($$,$1, "*" , $3);}
	| T '/' F 	{$$ = new_temp(); quad_code_gen($$,$1, "/" , $3);}
	| F
	;

F : '(' E ')' 		{$$ = $2;}
	| T_ID 		{$$=$1;}
	| T_NUM 	{$$=$1;}
	;

%%


/* error handling function */
void yyerror(char* s)
{
	printf("Error :%s at %d \n",s,yylineno);
}


/* main function - calls the yyparse() function which will in turn drive yylex() as well */
int main(int argc, char* argv[])
{
	icg_quad_file = fopen("icg_quad.txt","w");
	yyparse();
	fclose(icg_quad_file);
	return 0;
}
