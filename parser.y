%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define YYDEBUG 1
// Function prototypes
void yyerror(const char *s);
int yylex();
extern int yylineno; 
extern FILE *yyin;
extern FILE *tokenFile, *parserFile,*outputCPP;
extern FILE *yyout; // Declare yyout
%}

%union {
    int int_val;               
    float float_val;           
    char *str_val;             
}
%token <str_val> LEFT_BRACE RIGHT_BRACE LEFT_PAR RIGHT_PAR COMMA COLON SEMICOLON QUESTION_MARK
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

%type <str_val> Variable_Declaration Type set_statements setUp  IdentifierList Identifier final
%type <str_val> Assignment_Statement rhs lhs func_call terminal_expression variable expression  
%type <str_val> session subsession push_pop_statements if_else_statements loop func_declaration func_declarations func_dec_argument func_dec_arguments func_call_arguments
%type <str_val> ifelse_statements 
%start Start

%left BIT_AND BIT_OR BIT_NOT BIT_XOR 
%left EQUAL_OPERATOR NOT_EQUAL GREATER_EQUAL LESS_EQUAL GREATER LESS_THAN DOUBLE_EQUAL
%left ADD SUB
%left LOG_AND LOG_OR LOG_NOT
%left MUL DIV MOD

%%
Start
    : header setUp {fprintf(outputCPP, "%sint main(){\n",$2);}session {fprintf(outputCPP, "%s}\n",$4);}
    ;

header
    : {fprintf(outputCPP, "#include <bits/stdcpp++>\n");}
    ;

setUp
    : set_statements SEMICOLON func_declarations { 
          $$ = (char *)malloc(1024 * sizeof(char));
          sprintf($$, "%s%s", $1, $3);
      }
    | func_declarations {
          $$ = (char *)malloc(1024 * sizeof(char));
          sprintf($$, "%s", $1);
      }
    ;


func_declarations
    : func_declarations func_declaration { $$ = (char*) malloc(strlen($1) + strlen($2) + 2);
      sprintf($$, "%s%s\n", $1, $2);
      free($1);
      free($2); }
    |{ $$=strdup("");}
    ; 
    
set_statements
    : SET INT BIG       { fprintf(outputCPP, "#define int long long\n"); } { fprintf(parserFile, "%d: Set Statement\n", yylineno); }
    | SET INT SMALL     { fprintf(outputCPP, "#define int int\n"); }       { fprintf(parserFile, "%d: Set Statement\n", yylineno); }
    | SET FLOAT SMALL   { fprintf(outputCPP, "#define float float\n"); }   { fprintf(parserFile, "%d: Set Statement\n", yylineno); }
    | SET FLOAT BIG     { fprintf(outputCPP, "#define float double\n"); }  { fprintf(parserFile, "%d: Set Statement\n", yylineno); };
    ;

session
    : session subsession 
     {
      $$ = (char*) malloc(strlen($1) + strlen($2) + 2);
      sprintf($$, "%s%s\n", $1, $2);
      free($1);
      free($2);
    }
    | { $$=strdup("");}
    ;
subsession
    : expression SEMICOLON 
    {
    $$ = (char *)malloc(1024 * sizeof(char));
    sprintf($$, "%s;\n", $1);
    free($1);
    }
    | Variable_Declaration SEMICOLON 
    {
    $$ = (char *)malloc(1024 * sizeof(char));
    sprintf($$, "%s\n", $1);
    free($1);
    }
    | func_call SEMICOLON 
    {
    $$ = (char *)malloc(1024 * sizeof(char));
    sprintf($$, "%s\n", $1);
    free($1);
    }
    | push_pop_statements SEMICOLON 
    {
    $$ = (char *)malloc(1024 * sizeof(char));
    sprintf($$, "%s\n", "push_pop_statements");
    }
    | if_else_statements 
    {
    $$ = (char *)malloc(1024 * sizeof(char));
    sprintf($$, "%s\n", $1);
    free($1);
    }
    | loop 
    {
    $$ = (char *)malloc(1024 * sizeof(char));
    sprintf($$, "%s\n", $1);
    free($1);
    }
    ;
Variable_Declaration
    : Type IdentifierList
    {
    $$ = (char *)malloc(1024 * sizeof(char));
    sprintf($$, "%s %s;", $1, $2);
    }

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
    | Identifier COMMA IdentifierList {$$ = (char *)malloc(strlen($1)+strlen($3) + 50);
                                            sprintf($$,"%s, %s", $1,$3);}
    | {$$ = strdup("");}
    ;

Identifier
    : IDENTIFIER{$$ = $1;}
    | IDENTIFIER EQUAL_OPERATOR INTNUM {$$ = (char *)malloc(strlen($1) + 50);
                                            sprintf($$,"%s = %d", $1,$3);
                                            free($1);}
    | IDENTIFIER EQUAL_OPERATOR FLOATNUM {$$ = (char *)malloc(strlen($1) + 50);
                                            sprintf($$,"%s = %f", $1,$3);
                                            free($1);}
    ;

Assignment_Statement
    : rhs EQUAL_OPERATOR lhs 
      { 
          $$ = (char *)malloc(strlen($1) + strlen($3) + 50);
          sprintf($$, "%s = %s", $1, $3);
          free($1);
          free($3);
      }
    ;

rhs
    : variable {$$= $1;}
    ;

lhs 
    : func_call {$$ = $1;}
    | terminal_expression {$$ = $1;}
    ;

func_call
    : IDENTIFIER LEFT_PAR func_call_arguments RIGHT_PAR 
    {
        $$ = (char *)malloc(1024);
        sprintf($$,"%s(%s)", $1,$3);
    }
    ;

func_call_arguments
    : expression COMMA func_call_arguments
    {
        $$ = (char *)malloc(1024);
        sprintf($$,"%s,%s", $1,$3);
    }
    | expression{$$ = $1;}
    | {$$ =strdup("");}
    ;

push_pop_statements
    : IDENTIFIER LF_POINTER LEFT_BRACKET expression RIGHT_BRACKET   
    {
        $$ = (char *)malloc(1024);
        sprintf($$,"%s.push_back(%s);", $1,$4);
    }
    | LEFT_BRACKET expression RIGHT_BRACKET RIG_POINTER IDENTIFIER 
    {
        $$ = (char *)malloc(1024);
        sprintf($$,"%s.insert(%s.begin(), %s);", $5,$5,$2);
    }
    | IDENTIFIER RIG_POINTER LEFT_BRACKET expression RIGHT_BRACKET
    {
        $$ = (char *)malloc(1024);
        sprintf($$,"%s = %s.back();\n %s.pop_back()", $4,$1,$1);
    }
    | IDENTIFIER RIG_POINTER LEFT_BRACKET  RIGHT_BRACKET
    {
        $$ = (char *)malloc(1024);
        sprintf($$,"%s.pop_back()",$1);
    }
    | LEFT_BRACKET RIGHT_BRACKET LF_POINTER IDENTIFIER
    {
        $$ = (char *)malloc(1024);
        sprintf($$,"%s.erase(%s.begin());",$4,$4);
    }
    ;

expression
    : Assignment_Statement {$$ = $1;}
    | terminal_expression {$$ = $1;}
    ;

terminal_expression
    : variable
      {
          $$ = (char *)malloc(strlen($1) + 1);
          strcpy($$, $1);
      }
    | LEFT_BRACE terminal_expression RIGHT_BRACE
      {
          $$ = (char *)malloc(strlen($2) + 3);
          sprintf($$, "{%s}", $2);
          free($2);
      }
    | LEFT_PAR terminal_expression RIGHT_PAR
      {
          $$ = (char *)malloc(strlen($2) + 3);
          sprintf($$, "(%s)", $2);
          free($2);
      }
    | BIT_NOT terminal_expression
      {
          $$ = (char *)malloc(strlen($2) + 5);
          sprintf($$, "~%s", $2);
          free($2);
      }
    | LOG_NOT terminal_expression
      {
          $$ = (char *)malloc(strlen($2) + 5);
          sprintf($$, "!%s", $2);
          free($2);
      }
    | ADD terminal_expression
      {
          $$ = (char *)malloc(strlen($2) + 2);
          sprintf($$, "+%s", $2);
          free($2);
      }
    | SUB terminal_expression
      {
          $$ = (char *)malloc(strlen($2) + 2);
          sprintf($$, "-%s", $2);
          free($2);
      }
    | terminal_expression BIT_AND terminal_expression
      {
          $$ = (char *)malloc(strlen($1) + strlen($3) + 4);
          sprintf($$, "%s & %s", $1, $3);
          free($1); free($3);
      }
    | terminal_expression BIT_OR terminal_expression
      {
          $$ = (char *)malloc(strlen($1) + strlen($3) + 4);
          sprintf($$, "%s | %s", $1, $3);
          free($1); free($3);
      }
    | terminal_expression BIT_XOR terminal_expression
      {
          $$ = (char *)malloc(strlen($1) + strlen($3) + 4);
          sprintf($$, "%s ^ %s", $1, $3);
          free($1); free($3);
      }
    | terminal_expression DOUBLE_EQUAL terminal_expression
      {
          $$ = (char *)malloc(strlen($1) + strlen($3) + 5);
          sprintf($$, "%s == %s", $1, $3);
          free($1); free($3);
      }
    | terminal_expression ADD terminal_expression
      {
          $$ = (char *)malloc(strlen($1) + strlen($3) + 4);
          sprintf($$, "%s + %s", $1, $3);
          free($1); free($3);
      }
    | terminal_expression SUB terminal_expression
      {
          $$ = (char *)malloc(strlen($1) + strlen($3) + 4);
          sprintf($$, "%s - %s", $1, $3);
          free($1); free($3);
      }
    | terminal_expression MUL terminal_expression
      {
          $$ = (char *)malloc(strlen($1) + strlen($3) + 4);
          sprintf($$, "%s * %s", $1, $3);
          free($1); free($3);
      }
    | terminal_expression DIV terminal_expression
      {
          $$ = (char *)malloc(strlen($1) + strlen($3) + 4);
          sprintf($$, "%s / %s", $1, $3);
          free($1); free($3);
      }
    | terminal_expression MOD terminal_expression
      {
          $$ = (char *)malloc(strlen($1) + strlen($3) + 4);
          sprintf($$, "%s %% %s", $1, $3);
          free($1); free($3);
      }
    | terminal_expression NOT_EQUAL terminal_expression
      {
          $$ = (char *)malloc(strlen($1) + strlen($3) + 5);
          sprintf($$, "%s != %s", $1, $3);
          free($1); free($3);
      }
    | terminal_expression GREATER_EQUAL terminal_expression
      {
          $$ = (char *)malloc(strlen($1) + strlen($3) + 5);
          sprintf($$, "%s >= %s", $1, $3);
          free($1); free($3);
      }
    | terminal_expression LESS_EQUAL terminal_expression
      {
          $$ = (char *)malloc(strlen($1) + strlen($3) + 5);
          sprintf($$, "%s <= %s", $1, $3);
          free($1); free($3);
      }
    | terminal_expression GREATER terminal_expression
      {
          $$ = (char *)malloc(strlen($1) + strlen($3) + 4);
          sprintf($$, "%s > %s", $1, $3);
          free($1); free($3);
      }
    | terminal_expression LESS_THAN terminal_expression
      {
          $$ = (char *)malloc(strlen($1) + strlen($3) + 4);
          sprintf($$, "%s < %s", $1, $3);
          free($1); free($3);
      }
    | terminal_expression LOG_AND terminal_expression
      {
          $$ = (char *)malloc(strlen($1) + strlen($3) + 5);
          sprintf($$, "%s && %s", $1, $3);
          free($1); free($3);
      }
    | terminal_expression LOG_OR terminal_expression
      {
          $$ = (char *)malloc(strlen($1) + strlen($3) + 5);
          sprintf($$, "%s || %s", $1, $3);
          free($1); free($3);
      }
    ;

variable
    : IDENTIFIER {$$ = (char *)malloc(50);sprintf($$,"%s", $1);}
    | INTNUM{$$ = (char *)malloc(50);sprintf($$,"%d", $1);}
    | FLOATNUM{$$ = (char *)malloc(50);sprintf($$,"%f", $1);}
    | IDENTIFIER LEFT_BRACKET expression RIGHT_BRACKET{$$ = (char *)malloc(strlen($1)+strlen($3) + 50);
                                            sprintf($$,"%s[%s]", $1,$3);
                                            free($1);free($3);}
    | SIZE LEFT_BRACKET expression RIGHT_BRACKET{$$ = (char *)malloc(strlen($3) + 50);
                                            sprintf($$,"sizeof(%s)",$3);
                                            free($3);}
    ;

if_else_statements
    :LESS_THAN expression QUESTION_MARK session ifelse_statements GREATER 
    {
        $$ = (char *)malloc(1024);
        sprintf($$,"if(%s)\n{\n%s\n}\n%s", $2,$4,$5);
        free($2);free($4);
    }
    ;

ifelse_statements
    : expression QUESTION_MARK session ifelse_statements
    {
        $$ = (char *)malloc(1024);
        sprintf($$,"elseif(%s)\n{\n%s\n}\n%s", $1,$3,$4);
        free($1);free($4);
    }
    | ELSE COLON session 
    {
        $$ = (char *)malloc(1024);
        sprintf($$,"else\n{\n%s\n}\n", $3);
    }
    | {$$=strdup("");};
    ;

loop
    : LOOP LEFT_PAR Type IdentifierList SEMICOLON expression SEMICOLON expression  RIGHT_PAR COLON LESS_THAN session GREATER final 
    { 
        $$ = (char*)malloc(1024); 
        sprintf($$, "%s %s\nfor (%s ; %s ; %s) \n{\nHello%s\n}\n%s", $3,$4,$4,$6, $8,$12,$14); 
    }
    ;

final
    : FINALLY COLON LESS_THAN session GREATER
    { 
        $$ = $4;
    }
    |   {$$=strdup("");}
    ;

func_declaration
    : FUNCTION IDENTIFIER LEFT_PAR func_dec_arguments SEMICOLON Type RIGHT_PAR 
    LESS_THAN session GREATER 
   {
    $$ = (char *)malloc(1024 * sizeof(char));  
    sprintf($$, "%s %s(%s) {\n%s}\n", $6, $2, $4, $9); 

    free($6);
    free($2);
    free($4);
    free($9);
    }

    |  FUNCTION IDENTIFIER LEFT_PAR func_dec_arguments SEMICOLON RIGHT_PAR
    LESS_THAN session GREATER 
   {
    $$ = (char *)malloc(1024 * sizeof(char));
    sprintf($$, "void %s(%s) {\n%s}\n", $2, $4, $8);
    free($2);
    free($4);
    free($8);
}

    ;

func_dec_arguments
    : func_dec_argument COMMA func_dec_arguments {
        $$ = (char *)malloc(strlen($1) + strlen($3) + 3); 
        sprintf($$, "%s, %s", $1, $3); 
    }
    | func_dec_argument {$$ = $1;}
    | {$$ = strdup("");}
    ;

func_dec_argument
    : Type Identifier 
    {
      $$ = (char*)malloc(strlen($1) + strlen($2) + 2);
      sprintf($$, "%s %s", $1, $2);
    }
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
