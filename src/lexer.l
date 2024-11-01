%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "../build/parser.tab.h"
    int yylex();
    int yywrap();

    extern int yylineno;
    extern FILE *yyin;
    
    FILE *tokenFile, *parserFile,*outputCPP;
    void token_info(int lineno, const char* token, const char* type);
%}

%%
"{"                           { token_info(yylineno, yytext, "PUNCTUATION"); return LEFT_BRACE; }
"}"                           { token_info(yylineno, yytext, "PUNCTUATION"); return RIGHT_BRACE; }
","                           { token_info(yylineno, yytext, "PUNCTUATION"); return COMMA; }
":"                           { token_info(yylineno, yytext, "PUNCTUATION"); return COLON; }
";"                           { token_info(yylineno, yytext, "PUNCTUATION"); return SEMICOLON; }
"?"                           { token_info(yylineno, yytext, "PUNCTUATION"); return QUESTION_MARK; }
"("                           { token_info(yylineno, yytext, "PUNCTUATION"); return LEFT_PAR; }
")"                           { token_info(yylineno, yytext, "PUNCTUATION"); return RIGHT_PAR; }
"<"                           { token_info(yylineno, yytext, "PUNCTUATION : COMPARISON OPERATOR"); return LESS_THAN; }
">"                           { token_info(yylineno, yytext, "PUNCTUATION : COMPARISON OPERATOR"); return GREATER; }


"set"                         { token_info(yylineno, yytext, "RESERVED WORD"); return SET; }
"if"                          { token_info(yylineno, yytext, "RESERVED WORD"); return IF; }
"else"                        { token_info(yylineno, yytext, "RESERVED WORD"); return ELSE; }
"loop"                        { token_info(yylineno, yytext, "RESERVED WORD"); return LOOP; }
"finally"                     { token_info(yylineno, yytext, "RESERVED WORD"); return FINALLY; }
"return"                      { token_info(yylineno, yytext, "RESERVED WORD"); return RETURN; }
"func"                        { token_info(yylineno, yytext, "RESERVED WORD"); return FUNCTION; }
"print"                       { token_info(yylineno, yytext, "RESERVED WORD"); return PRINT; }
"size"                        { token_info(yylineno, yytext, "RESERVED WORD"); return SIZE; }

"int"                         { token_info(yylineno, yytext, "TYPE"); return INT; }
"float"                       { token_info(yylineno, yytext, "TYPE"); return FLOAT; }
"small"                       { token_info(yylineno, yytext, "TYPE"); return SMALL; }
"big"                         { token_info(yylineno, yytext, "TYPE"); return BIG; }
"void"                        { token_info(yylineno, yytext, "TYPE"); return VOID; }

"=="                          { token_info(yylineno, yytext, "COMPARISON OPERATOR"); return DOUBLE_EQUAL; }
"<="                          { token_info(yylineno, yytext, "COMPARISON OPERATOR"); return LESS_EQUAL; }
">="                          { token_info(yylineno, yytext, "COMPARISON OPERATOR"); return GREATER_EQUAL; }
"<>"                          { token_info(yylineno, yytext, "COMPARISON OPERATOR"); return NOT_EQUAL; }

"["                           { token_info(yylineno, yytext, "PUNCTUATION : ACCESS OPERATOR"); return LEFT_BRACKET; }
"]"                           { token_info(yylineno, yytext, "PUNCTUATION : ACCESS OPERATOR"); return RIGHT_BRACKET; }
"->"                          { token_info(yylineno, yytext, "ACCESS OPERATOR"); return RIG_POINTER; }
"<-"                          { token_info(yylineno, yytext, "ACCESS OPERATOR"); return LF_POINTER; }

"+"                           { token_info(yylineno, yytext, "ARITHMETIC OPERATOR"); return ADD; }
"-"                           { token_info(yylineno, yytext, "ARITHMETIC OPERATOR"); return SUB; }
"*"                           { token_info(yylineno, yytext, "ARITHMETIC OPERATOR"); return MUL; }
"/"                           { token_info(yylineno, yytext, "ARITHMETIC OPERATOR"); return DIV; }
"%"                           { token_info(yylineno, yytext, "ARITHMETIC OPE RATOR"); return MOD; }
"="                           { token_info(yylineno, yytext, "ARITHMETIC OPERATOR"); return EQUAL_OPERATOR; }

"|"                           { token_info(yylineno, yytext, "BITWISE OPERATOR"); return BIT_OR; }
"&"                           { token_info(yylineno, yytext, "BITWISE OPERATOR"); return BIT_AND; }
"^"                           { token_info(yylineno, yytext, "BITWISE OPERATOR"); return BIT_XOR; }
"~"                           { token_info(yylineno, yytext, "BITWISE OPERATOR"); return BIT_NOT; }

"or"                          { token_info(yylineno, yytext, "LOGICAL OPERATOR"); return LOG_OR; }
"and"                         { token_info(yylineno, yytext, "LOGICAL OPERATOR"); return LOG_AND; }
"not"                         { token_info(yylineno, yytext, "LOGICAL OPERATOR"); return LOG_NOT; }

[0-9]+                        { token_info(yylineno, yytext, "CONSTANT"); yylval.int_val = atoi(yytext); return INTNUM; }
[0-9]+(\.[0-9]+)              { token_info(yylineno, yytext, "CONSTANT"); yylval.float_val= atof(yytext); return FLOATNUM; }

[A-Za-z_][A-Za-z_0-9]*        { token_info(yylineno, yytext, "IDENTIFIER"); yylval.str_val = strdup(yytext); return IDENTIFIER; }

\#[^\n]*                      ; // Ignore comments starting with #

\n                            { yylineno++; } // Handle newlines

.                             ; // Ignore any other character

%%

void token_info(int lineno, const char* token, const char* type) {
   if (!tokenFile) {
    fprintf(stderr, "Error: tokenFile is not initialized\n");
        exit(EXIT_FAILURE);
    } else {
        fprintf(tokenFile, "%d : %s : %s\n", lineno, type, token);
    }
}
int yywrap() {
    return 1; // End of input
}
