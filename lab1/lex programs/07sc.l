%x COM
%{
int c;
%}

%%
"/*"          { BEGIN(COM);printf("Multi line comment pattern is active now\n");  }
<COM>"*/"    { BEGIN(INITIAL); printf("Multi line comment pattern has ended\n");  }
<COM>. c++;
\n ;
%%
int yywrap()
{ 
    return 1; 
}
int main(int argc) 
{   
     yylex();
     printf("No of characters in  the comment is %d",c);
     return 0;
}