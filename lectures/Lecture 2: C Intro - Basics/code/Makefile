CFLAGS = -Wall -Wextra -Werror

all:
	gcc hello_world.c
	./a.out

hello_world:
	gcc -o hello_world hello_world.c
	./hello_world

hello_numbers:
	# gcc -std=c99 hello_numbers.c
	gcc -std=c11 hello_numbers.c
	# gcc -std=c17 hello_numbers.c
	./a.out

compute_sines:
	gcc ${CFLAGS} -o compute_sines_table compute_sines_table.c -lm
	./compute_sines_table


.PHONY: all hello_world hello_numbers compute_sines