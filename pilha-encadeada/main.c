#include <stdio.h>
#include "stack.h"

int main() {
    Stack stack;
    initialize(&stack);

    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);
    push(&stack, 4);
    push(&stack, 5);
    push(&stack, 6);

    printf("Stack size: %d\n", size(&stack));

    printf("Popped value: %d\n", pop(&stack));
    printf("Popped value: %d\n", pop(&stack));
    printf("Popped value: %d\n", pop(&stack));

    printf("Stack size: %d\n", size(&stack));

    push(&stack, 7);
    push(&stack, 8);

    printf("Stack size: %d\n", size(&stack));

    printf("Popped value: %d\n", pop(&stack));
    printf("Popped value: %d\n", pop(&stack));
    printf("Popped value: %d\n", pop(&stack));
    printf("Popped value: %d\n", pop(&stack));
    printf("Popped value: %d\n", pop(&stack));

    printf("Stack size: %d\n", size(&stack));

    // This will cause a stack underflow
    printf("Popped value: %d\n", pop(&stack));

    return 0;
}

