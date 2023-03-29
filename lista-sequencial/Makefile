$(CC) = gcc

all: list_implementation

list_implementation: main.o list.o
	$(CC) main.o list.o -o list_implementation

main.o: main.c list.h
	$(CC) -c main.c

list.o: list.c list.h
	$(CC) -c list.c

Clean:
	rm *.o list_implementation
