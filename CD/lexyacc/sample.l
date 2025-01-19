%x COM
%{
int c;
%}
%%
"/*"		{BEGIN(COM);printf("Active");}
<COM>"*/"	{BEGIN(INITIAL);printf("ENDS");}
<COM>. c++;
\n;
%%
int yywrap(){
	return (1);
}
int main(int argc, char *argv[]){yylex();
printf("No of characters in the comment is %d",c);
return 0;
}