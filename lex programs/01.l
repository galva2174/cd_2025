%{
int i;
%}

%%

.* {printf("Gayathri");}


%%
int yywrap(){return 1;}
int main(){yylex(); printf("Value of i is %d",i);return 0;}
/*To stop the flex, type ctrl+z followed by ctrl+d and enter*/