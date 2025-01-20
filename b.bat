@ECHO OFF
CLS
ECHO Executing Parser file using the command bison -dy filename...

bison -dy p.y

ECHO Executing lex file using the command flex filename...

flex l.l

ECHO compiling y.tab.c and lex.yy.c to get a.exe(i.e., gcc y.tab.c lex.yy.c)
gcc y.tab.c lex.yy.c

ECHO running a.exe...

ECHO:

a.exe

ECHO:

PAUSE