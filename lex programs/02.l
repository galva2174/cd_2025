%%
aaa {printf("aaa matched");}

%%
int yywrap(){return 1;}
int main(){yylex();printf("END of program");return 0;}
/*To stop the flex, type ctrl+z followed by ctrl+d and enter*/