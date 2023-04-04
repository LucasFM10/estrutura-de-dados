$(CC) = gcc

all: list_implementation

list_implementation: main.o stack.o
	$(CC) main.o stack.o -o stack_implementation

main.o: main.c stack.h
	$(CC) -c main.c

list.o: stack.c stack.h
	$(CC) -c stack.c

Clean:
	rm *.o stack_implementation
