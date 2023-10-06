#include <stdio.h>
#include "stack.h"

int main() {
    struct Stack* stack = createStack();

    push(stack, 10);
    push(stack, 20);
    push(stack, 30);

    printf("Top element: %d\n", peek(stack));
    printf("%d popped from the stack.\n", pop(stack));
    printf("%d popped from the stack.\n", pop(stack));

    printf("Is the stack empty? %s\n", isEmpty(stack) ? "Yes" : "No");

    return 0;
}
