$(CC) = gcc

all: linked_implementation

linked_implementation: main.o linked.o
	$(CC) main.o linked.o -o linked_implementation

main.o: main.c linked.h
	$(CC) -c main.c

linked.o: linked.c linked.h
	$(CC) -c linked.c

Clean:
	rm *.o linked_implementation
