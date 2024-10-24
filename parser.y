%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define YYDEBUG 1
// Function prototypes
void yyerror(const char *s);
int yylex();
extern int yylineno; // Declare yylineno to keep track of line numbers
extern FILE *yyin;
extern FILE *tokenFile, *parserFile,*outputCPP;
extern FILE *yyout; // Declare yyout
%}

%union {
    int int_val;               // Integer value
    float float_val;           // Float value
    char *str_val;             // String value
}
%token LEFT_BRACE RIGHT_BRACE LEFT_PAR RIGHT_PAR COMMA COLON SEMICOLON QUESTION_MARK
%token LESS_THAN GREATER DOUBLE_EQUAL LESS_EQUAL GREATER_EQUAL NOT_EQUAL
%token SET IF ELSE LOOP FINALLY RETURN FUNCTION PRINT SIZE
%token INT FLOAT SMALL BIG VOID
%token LEFT_BRACKET RIGHT_BRACKET RIG_POINTER LF_POINTER
%token ADD SUB MUL DIV MOD EQUAL_OPERATOR
%token BIT_OR BIT_AND BIT_XOR BIT_NOT
%token LOG_OR LOG_AND LOG_NOT
%token <str_val> IDENTIFIER
%token <int_val> INTNUM
%token <float_val> FLOATNUM

%type <str_val> Variable_Declaration Type set_statements setUp LEFT_BRACKET RIGHT_BRACKET LEFT_BRACE RIGHT_BRACE COLON IdentifierList Identifier
%type <str_val> EQUAL_OPERATOR
%start Start

%left BIT_AND BIT_OR BIT_NOT BIT_XOR
%left EQUAL_OPERATOR NOT_EQUAL GREATER_EQUAL LESS_EQUAL GREATER LESS_THAN EQUAL
%left ADD SUB
%left LOG_AND LOG_OR LOG_NOT
%left MUL DIV MOD

%%
Start
    : header setUp session
    ;

header
    : {fprintf(outputCPP, "#include <bits/stdc++>\n");}
    ;

setUp
    : set_statements SEMICOLON
    | {$$ = strdup("");}
    ;

set_statements
    : SET INT BIG         { fprintf(outputCPP, "#define int long long\n"); } { fprintf(parserFile, "%d: Set Statement\n", yylineno); }
    | SET INT SMALL     { fprintf(outputCPP, "#define int int\n"); }       { fprintf(parserFile, "%d: Set Statement\n", yylineno); }
    | SET FLOAT SMALL   { fprintf(outputCPP, "#define float float\n"); }   { fprintf(parserFile, "%d: Set Statement\n", yylineno); }
    | SET FLOAT BIG     { fprintf(outputCPP, "#define float double\n"); }  { fprintf(parserFile, "%d: Set Statement\n", yylineno); };
    ;

session
    : session subsession 
    |
    ;
subsession
    : Variable_Declaration SEMICOLON
    | Assignment_Statement SEMICOLON
    ;

Variable_Declaration
    : Type IdentifierList         { fprintf(outputCPP, "%s %s;\n", $1, $2); }  { fprintf(parserFile, "%d: Variable Declaration\n", yylineno); }
    ;

Type
    : INT         { $$ = strdup("int"); }
    | FLOAT     { $$ = strdup("float"); }
    | LEFT_BRACKET Type RIGHT_BRACKET{$$ = (char *)malloc(strlen($2) + 50);
                                            sprintf($$,"vector<%s>", $2);
                                            free($2);}
    | LEFT_BRACE Type COLON Type RIGHT_BRACE{$$ = (char *)malloc(strlen($2)+strlen($4) + 50);
                                            sprintf($$,"map<%s,%s>", $2,$4);
                                            free($2);}
    ;

IdentifierList
    : Identifier{$$ = $1;}
    | Identifier COMMA IdentifierList{$$ = (char *)malloc(strlen($1)+strlen($3) + 50);
                                            sprintf($$,"%s, %s", $1,$3);}
    | {$$ = strdup("");}
    ;

Identifier
    : IDENTIFIER{$$ = $1;}
    | IDENTIFIER EQUAL_OPERATOR INTNUM{$$ = (char *)malloc(strlen($1) + 50);
                                            sprintf($$,"%s =%d", $1,$3);
                                            free($1);}
    | IDENTIFIER EQUAL_OPERATOR FLOATNUM{$$ = (char *)malloc(strlen($1) + 50);
                                            sprintf($$,"%s = %f", $1,$3);
                                            free($1);}
    ;

Assignment_Statement:
    rhs EQUAL_OPERATOR lhs;

rhs
    : refered_operater
    | IDENTIFIER
    ;

refered_operater
    : IDENTIFIER LEFT_BRACKET variable RIGHT_BRACKET
    ;

variable
    : IDENTIFIER
    | INTNUM
    | FLOATNUM
    ;

lhs 
    :
assignment_expression
	: conditional_expression
	| unary_expression assignment_operator assignment_expression
	;


%%

// Function to handle errors
void yyerror(const char *s) {
    fprintf(parserFile, "\nError: %s at line %d.\n", s, yylineno);
    fprintf(tokenFile, "\nError: %s at line %d.\n", s, yylineno);
    printf("Error: %s at line %d.\n", s, yylineno);
}

// Main function
int main(int argc, char *argv[]) {
    if (argc != 5) {  // Check for the correct number of arguments
        printf("Usage: %s <input file> <token file> <parser file> <output file>\n", argv[0]);
        return 1;
    }

    FILE* inputFile = fopen(argv[1], "r");
    if (inputFile == NULL) {
        perror("Error opening input file"); // Use perror for better error messages
        return 1;
    }

    tokenFile = fopen(argv[2], "w");
    if (!tokenFile) {
        perror("Failed to open token file");
        fclose(yyin); // Make sure to close the input file before exiting
        exit(EXIT_FAILURE);
    }
    parserFile = fopen(argv[3], "w");
    if (parserFile == NULL) {
        perror("Error opening parser file");
        fclose(inputFile);
        fclose(tokenFile);
        return 1;
    }

    outputCPP = fopen(argv[4], "w");
    if (outputCPP == NULL) {
        perror("Error opening output file");
        fclose(inputFile);
        fclose(tokenFile);
        fclose(parserFile);
        return 1;
    }
    yyin = inputFile;  
    yyout = tokenFile; 
    int parser_output = yyparse();  // Start parsing
    if (parser_output == 0) {
        printf("Parsing done successfully\n");
    } else {
        printf("Parsing failed at line no %d\n", yylineno);
    }

    // Cleanup: close all open files
    fclose(inputFile);
    fclose(tokenFile);
    fclose(parserFile);
    fclose(outputCPP);
    
    return 0;
}
