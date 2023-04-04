#include "stack.h"

void initialize(Stack* stack) {
    stack->top = NULL;
    stack->size = 0;
}

int isEmpty(Stack* stack) {
    return stack->top == NULL;
}

void push(Stack* stack, int item) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Stack Overflow\n");
        return;
    }
    newNode->data = item;
    newNode->next = stack->top;
    stack->top = newNode;
    stack->size++;
}

int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow\n");
        return -1;
    }
    Node* temp = stack->top;
    int item = temp->data;
    stack->top = temp->next;
    free(temp);
    stack->size--;
    return item;
}

int size(Stack* stack) {
    return stack->size;
}

