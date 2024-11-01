# Define variables
CC = clang  # Change to gcc if you prefer
BISON = bison
FLEX = flex

# Source files
PARSER = ../src/parser.y
LEXER = ../src/lexer.l

# Generated files
BISON_OUTPUT = parser.tab.c parser.tab.h
FLEX_OUTPUT = lex.yy.c

# Targets
all: parser  # Make 'parser' the default target

# Build the lexer
$(FLEX_OUTPUT): $(LEXER)
	$(FLEX) -o $@ $(LEXER)

# Build the parser
$(BISON_OUTPUT): $(PARSER)
	$(BISON) -d -o parser.tab.c $(PARSER)

# Link everything together
parser: $(BISON_OUTPUT) $(FLEX_OUTPUT)
	$(CC) $(BISON_OUTPUT) $(FLEX_OUTPUT) 

# Run the parser with a specified test case
run:
	@echo "Please provide a test case number: make run3"
run%:
	@echo "Running parser with test case t$*"
	./a.out ../test/input/t$*.txt ../test/tokens/tokens$*.txt ../test/parsed/parsed$*.txt ../test/output/output$*.cpp
	@echo "Output generated for test case t$*"

# Clean up generated files
clean:
	rm -f $(BISON_OUTPUT) $(FLEX_OUTPUT) ./a.out parser.tab.h.gch

.PHONY: all clean run run%
