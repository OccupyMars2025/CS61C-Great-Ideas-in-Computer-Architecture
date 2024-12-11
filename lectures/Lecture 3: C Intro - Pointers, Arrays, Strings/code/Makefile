# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra

# Program name and source file
# PROGRAM = study_pointer_and_array
PROGRAM = study_word_alignment
# SOURCE = study_pointer_and_array.c
SOURCE = study_word_alignment.c

# Default target
all: $(PROGRAM)

# Rule to build the program
$(PROGRAM): $(SOURCE)
	$(CC) $(CFLAGS) -o $@ $<

# Run the program
run: all
	./$(PROGRAM)

# Clean up generated files
clean:
	rm -f $(PROGRAM)

# Check for coding style issues or perform other checks
check:
	$(CC) $(CFLAGS) -fsyntax-only $(SOURCE)

.PHONY: all run clean check