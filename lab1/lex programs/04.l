digit [0-9]
letter [_A-Za-z]
%%
void printf("Keyword : %s\n",yytext);
{letter}({letter}|{digit})* printf("Identifier : %s\n",yytext);
\".*\" printf("string : %s\n",yytext);
"//".*
. 
%%
int yywrap(){return 1;}
int main()
{
	yyin = fopen("hello.c", "r");
	yylex();
	fclose(yyin);
}





