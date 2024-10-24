%{
#include <stdio.h>
#include <stdlib.h>

int yylex(void);  // Declare the yylex function
void yyerror(const char *s);  // Declare the yyerror function
%}

%token DING DONG DELL
%start rhyme
%%
rhyme : sound place '\n'
{
    printf("string valid\n");
    exit(0);
};

sound : DING DONG ;
place : DELL ;
%%
#include "lex.yy.c"

int yywrap() {
    return 1;
}

void yyerror(const char *s) {  // Explicitly declare return type
    printf("%s\n", s);
}

int main() {  // Explicitly declare return type
    return yyparse();  // Return value of yyparse
}
