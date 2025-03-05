%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symbol_table.h"

void yyerror(const char *s);
extern int yylex();
extern int line_number;
extern int column;
extern char* yytext;
int syntax_valid = 1;
DataType current_type;
%}

%union {
    int intval;
    char* strval;
    struct {
        int dims[3];
        int count;
    } array_dims;
}

%type <intval> Expr Term Condition

%token T_INCLUDE T_STDIO
%token T_INT T_CHAR T_FOR T_WHILE T_DO T_MAIN
%token T_IF T_ELSE T_RETURN
%token <strval> T_ID
%token <intval> T_NUM
%token T_INC T_LE T_GE T_EQ

/* Operator precedence and associativity */
%right '='
%left T_EQ
%left '<' '>' T_LE T_GE
%left '+' '-'
%left '*' '/'
%right T_INC
%nonassoc IFX
%nonassoc T_ELSE

%%

Program: Includes MainFunction
       {
           if(syntax_valid) {
               printf("\nSyntax is Valid!\n");
           } else {
               printf("\nSyntax is Invalid! Check errors above.\n");
           }
       }
       ;

Includes: T_INCLUDE T_STDIO
        | /* empty */
        ;

MainFunction: T_INT T_MAIN '(' ')'
            {
                init_symbol_table();
                enter_scope();
            }
            CompoundStmt
            {
                print_symbol_table();
                exit_scope();
                free_symbol_table();
            }
            ;

CompoundStmt: '{' StmtList '}'
            ;

StmtList: StmtList Stmt
        | /* empty */
        ;

Stmt: SimpleStmt ';'
    | CompoundStmt
    | SelectionStmt
    | IterationStmt
    ;

SimpleStmt: Declaration
         | Assignment
         | T_RETURN Expr
         | error { 
             syntax_valid = 0;
             YYABORT;
         }
         ;

Declaration: Type DeclList
          ;

Type: T_INT  { current_type = TYPE_INT; }
    | T_CHAR { current_type = TYPE_CHAR; }
    ;

DeclList: DeclList ',' SingleDecl
        | SingleDecl
        ;

SingleDecl: T_ID
          {
              if (!add_symbol($1, current_type, line_number)) {
                  yyerror("Variable already declared in this scope");
              }
              free($1);
          }
        | T_ID '=' Expr
          {
              if (!add_symbol($1, current_type, line_number)) {
                  yyerror("Variable already declared in this scope");
              }
              Symbol* sym = lookup_symbol($1);
              if (sym) {
                  // Store the initialization value
                  int value = $3;
                  update_symbol_value($1, &value);
                  sym->is_initialized = 1;
                  // Update the value string explicitly
                  sprintf(sym->value_str, "%d", value);
              }
              free($1);
          }
        | ArrayDecl
        ;

ArrayDecl: T_ID '[' T_NUM ']'
         {
             int dims[1] = {$3};
             if (!add_array_symbol($1, current_type == TYPE_INT ? TYPE_INT_ARRAY : TYPE_CHAR_ARRAY,
                                 line_number, dims, 1)) {
                 yyerror("Array already declared in this scope");
             }
             free($1);
         }
         | T_ID '[' T_NUM ']' '[' T_NUM ']'
         {
             int dims[2] = {$3, $6};
             if (!add_array_symbol($1, current_type == TYPE_INT ? TYPE_INT_ARRAY : TYPE_CHAR_ARRAY,
                                 line_number, dims, 2)) {
                 yyerror("Array already declared in this scope");
             }
             free($1);
         }
         | T_ID '[' T_NUM ']' '[' T_NUM ']' '[' T_NUM ']'
         {
             int dims[3] = {$3, $6, $9};
             if (!add_array_symbol($1, current_type == TYPE_INT ? TYPE_INT_ARRAY : TYPE_CHAR_ARRAY,
                                 line_number, dims, 3)) {
                 yyerror("Array already declared in this scope");
             }
             free($1);
         }
         | T_ID '[' T_NUM ']' '=' '{' ArrayInitList '}'
         {
             int dims[1] = {$3};
             if (!add_array_symbol($1, current_type == TYPE_INT ? TYPE_INT_ARRAY : TYPE_CHAR_ARRAY,
                                 line_number, dims, 1)) {
                 yyerror("Array already declared in this scope");
             }
             Symbol* sym = lookup_symbol($1);
             if (sym) sym->is_initialized = 1;
             free($1);
         }
         ;

ArrayInitList: ArrayInitList ',' T_NUM
             | T_NUM
             ;

Assignment: T_ID '=' Expr
         {
             Symbol* sym = lookup_symbol($1);
             if (!sym) {
                 yyerror("Undefined variable");
             } else {
                 add_symbol_use($1, line_number);
                 
                 switch(sym->type) {
                     case TYPE_INT: {
                         int value = $3;
                         update_symbol_value($1, &value);
                         sym->is_initialized = 1;
                         sprintf(sym->value_str, "%d", value);  
                         break;
                     }
                     case TYPE_CHAR: {
                         char value = (char)$3;
                         update_symbol_value($1, &value);
                         sym->is_initialized = 1;
                         break;
                     }
                     case TYPE_INT_ARRAY:
                     case TYPE_CHAR_ARRAY:
                         yyerror("Cannot assign scalar value to array");
                         break;
                     default:
                         yyerror("Invalid type for assignment");
                 }
             }
             free($1);
         }
         | ArrayAccess '=' Expr
         ;
         
ArrayAccess: T_ID '[' Expr ']'
          {
              Symbol* sym = lookup_symbol($1);
              if (!sym) {
                  yyerror("Undefined array");
              }
              add_symbol_use($1, line_number);
          }
          | T_ID '[' Expr ']' '[' Expr ']'
          {
              Symbol* sym = lookup_symbol($1);
              if (!sym) {
                  yyerror("Undefined array");
              }
              add_symbol_use($1, line_number);
          }
          | T_ID '[' Expr ']' '[' Expr ']' '[' Expr ']'
          {
              Symbol* sym = lookup_symbol($1);
              if (!sym) {
                  yyerror("Undefined array");
              }
              add_symbol_use($1, line_number);
          }
          ;

Expr: Term             { $$ = $1; }
    | Expr '+' Expr    { $$ = $1 + $3;}
    | Expr '-' Expr    { $$ = $1 - $3; }
    | Expr '*' Expr    { $$ = $1 * $3; }
    | Expr '/' Expr    { 
        if ($3 == 0) {
            yyerror("Division by zero");
            $$ = 0;
        } else {
            $$ = $1 / $3;
        }
    }
    | Expr T_EQ Expr   { $$ = ($1 == $3); }
    | Expr '<' Expr    { $$ = ($1 < $3); }
    | Expr '>' Expr    { $$ = ($1 > $3); }
    | Expr T_LE Expr   { $$ = ($1 <= $3); }
    | Expr T_GE Expr   { $$ = ($1 >= $3); }
    | '(' Expr ')'     { $$ = $2; }
    ;

Term: T_NUM
    {
        $$ = $1;
    }
    | T_ID
    {
        Symbol* sym = lookup_symbol($1);
        if (!sym) {
            yyerror("Undefined variable");
            $$ = 0;
        } else {
            add_symbol_use($1, line_number);
            switch(sym->type) {
                case TYPE_INT:
                    $$ = sym->value.int_val;
                    break;
                case TYPE_CHAR:
                    $$ = (int)sym->value.char_val;
                    break;
                default:
                    yyerror("Invalid type in expression");
                    $$ = 0;
            }
        }
        free($1);
    }
    | T_INC T_ID
    {
        Symbol* sym = lookup_symbol($2);
        if (!sym) {
            yyerror("Undefined variable");
            $$ = 0;
        } else {
            add_symbol_use($2, line_number);
            if (sym->type == TYPE_INT) {
                sym->value.int_val++;
                $$ = sym->value.int_val;
                sprintf(sym->value_str, "%d", sym->value.int_val);
            } else {
                yyerror("Invalid type for increment");
                $$ = 0;
            }
        }
        free($2);
    }
    | ArrayAccess      { $$ = 0; /* Array access value handling */ }
    ;
IterationStmt: WhileStmt
             | DoWhileStmt ';'
             | ForStmt
             ;

ForStmt: T_FOR '(' ForInit ';' Condition ';' Update ')' Stmt
       ;

ForInit: Assignment
       | Type T_ID '=' Expr
       {
           if (!add_symbol($2, current_type, line_number)) {
               yyerror("Variable already declared in this scope");
           }
           Symbol* sym = lookup_symbol($2);
           if (sym) {
               int value = $4;
               update_symbol_value($2, &value);
               sym->is_initialized = 1;
           }
           free($2);
       }
       | /* empty */
       ;
Condition: Expr     { $$ = $1; }
         | /* empty */ { $$ = 1; }  /* Default to true when condition is empty */
         ;

Update: T_INC T_ID
      {
          Symbol* sym = lookup_symbol($2);
          if (!sym) {
              yyerror("Undefined variable");
          }
          add_symbol_use($2, line_number);
          free($2);
      }
      | /* empty */
      ;

WhileStmt: T_WHILE '(' Condition ')' Stmt
         ;

DoWhileStmt: T_DO Stmt T_WHILE '(' Condition ')'
           ;

SelectionStmt: T_IF '(' Condition ')' Stmt %prec IFX
             | T_IF '(' Condition ')' Stmt T_ELSE Stmt
             ;

%%

void yyerror(const char *s) {
    syntax_valid = 0;
    fprintf(stderr, "\nError at line %d, column %d: %s\n", line_number, column, s);
    fprintf(stderr, "Near token: '%s'\n", yytext);
    exit(1);
}

int main() {
    printf("Starting syntax analysis...\n");
    int result = yyparse();
    return result;
}
