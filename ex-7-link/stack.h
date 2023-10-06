#ifndef STACK_H
#define STACK_H

struct Node {
    int data;
    struct Node* next;
};

struct Stack {
    struct Node* top;
};

struct Stack* createStack();
void push(struct Stack* stack, int data);
int pop(struct Stack* stack);
int peek(struct Stack* stack);
int isEmpty(struct Stack* stack);

#endif
