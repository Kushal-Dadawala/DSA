#include "stack.h"
#include <stdio.h>

void initialize(Stack *s) {
    s->top = -1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

int isFull(Stack *s) {
    return s->top == MAX_SIZE - 1;
}

void push(Stack *s, int value) {
    if (!isFull(s)) {
        s->top++;
        s->data[s->top] = value;
    } else {
        printf("Stack overflow! Cannot push %d\n", value);
    }
}

int pop(Stack *s) {
    if (!isEmpty(s)) {
        int value = s->data[s->top];
        s->top--;
        return value;
    } else {
        printf("Stack is empty. Cannot pop.\n");
        return -1; // Indicates an empty stack
    }
}
