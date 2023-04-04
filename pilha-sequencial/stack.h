#ifndef STACK_H
#define STACK_H

#define MAX_SIZE 10

#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int items[MAX_SIZE];
  int size;
  int top;
} Stack;

void initialize(Stack* stack);
int isEmpty(Stack* stack);
void push(Stack* stack, int item);
int pop(Stack* stack);
int size(Stack* stack);

#endif

