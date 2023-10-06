#include <stdio.h>
#include "stack.h"

int main() {
    Stack stack1, stack2;

    initialize(&stack1);
    initialize(&stack2);

    push(&stack1, 10);
    push(&stack1, 20);
    push(&stack1, 30);
    push(&stack2, 5);
  
    push(&stack2, 15);
    pop(&stack1);
    printf("Stack 1 contents:\n");
    while (!isEmpty(&stack1)) {
        printf("%d\n", pop(&stack1));
    }

    printf("Stack 2 contents:\n");
    while (!isEmpty(&stack2)) {
        printf("%d\n", pop(&stack2));
    }

    return 0;
}
