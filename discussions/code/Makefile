# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra

# Program name and source files
PROGRAM = study_questions_from_discussions
SOURCES = study_questions_from_discussions.c

# Object files (derived from sources)
OBJECTS = $(SOURCES:.c=.o)

# Default target
all: $(PROGRAM)

# Rule to build the program
$(PROGRAM): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

# Rule to compile .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

# Run the program
run: all
	./$(PROGRAM)

# Clean up generated files
clean:
	rm -f $(OBJECTS) $(PROGRAM)

# Check for coding style issues or perform other checks
check:
	$(CC) $(CFLAGS) -fsyntax-only $(SOURCES)

.PHONY: all run clean check