# Define variables
CC = gcc
CFLAGS = -o parser 
BISON = bison
FLEX = flex

# Source files
PARSER = parser.y
LEXER = lexer.l

# Generated files
BISON_OUTPUT = parser.tab.c parser.tab.h
FLEX_OUTPUT = lex.yy.c
EXECUTABLE = parser
# Targets
all: $(EXECUTABLE)

$(FLEX_OUTPUT): $(LEXER)
	$(FLEX) $(LEXER)

$(BISON_OUTPUT): $(PARSER)
	$(BISON) -d $(PARSER)

parser: $(BISON_OUTPUT) $(FLEX_OUTPUT)
	$(CC) $(CFLAGS) $(BISON_OUTPUT) $(FLEX_OUTPUT)

run: $(EXECUTABLE)
	./$(EXECUTABLE) input.txt token.txt parser.txt output.cpp

clean:
	rm -f $(BISON_OUTPUT) $(FLEX_OUTPUT) parser
	
.PHONY: all clean
