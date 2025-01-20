%Start COM
%{
int c;
%}
%%
"/*"          { BEGIN(COM);printf("Multi line comment pattern is active now\n");  }
<COM>"*/"    { BEGIN(INITIAL); printf("Multi line comment pattern has ended\n");  }
. c++;
\n ;
%%
int yywrap()
{ 
    return (1); 
}
int main() 
{   
     yylex();
     printf("No of characters is %d",c);
    return 0;
}  