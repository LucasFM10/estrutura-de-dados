#include "stack.h"

void initialize(Stack* stack) {
    stack->size = 0;
    stack->top = -1;
}

int isEmpty(Stack* stack) {
    return stack->top == -1;
}

void push(Stack* stack, int item) {
    if (stack->top == MAX_SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack->items[++stack->top] = item;
    stack->size++;
}

int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow\n");
        return -1;
    }
    stack->size--;
    return stack->items[stack->top--];
}

int size(Stack* stack) {
    return stack->size;
}

