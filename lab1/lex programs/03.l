%%

p.. {printf("\nThe text matched is %s and the length is %d\n",yytext,yyleng);}


%%
int yywrap(){return 1;}
int main(){yylex();}































/*

predict the output of the below
%%

a{2,} {printf("%s%d",yytext,yyleng);}


%%
int yywrap(){return 0;}
int main(){yylex();}


*/