#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

// Function to create a stack with a given capacity
struct Stack* createStack(int capacity) {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*)malloc(capacity * sizeof(int));
    return stack;
}

// Function to check if the stack is empty
int isEmpty(struct Stack* stack) {
    return (stack->top == -1);
}

// Function to push an element onto the stack
void push(struct Stack* stack, int item) {
    if (stack->top == stack->capacity - 1) {
        printf("Stack overflow\n");
        return;
    }
    stack->top = stack->top + 1;
    stack->array[stack->top] = item;
}

// Function to pop an element from the stack
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow\n");
        return -1; // Assuming -1 represents an error or sentinel value
    }
    return stack->array[stack->top--];
}

// Function to move a disk from one pole to another
void moveDisk(char fromPole, char toPole, int disk) {
    printf("Move disk %d from pole %c to pole %c\n", disk, fromPole, toPole);
}

// Recursive function to solve Tower of Hanoi
void towerOfHanoi(int n, struct Stack* source, struct Stack* auxiliary, struct Stack* destination, char sourcePole, char auxiliaryPole, char destinationPole) {
    if (n == 1) {
        int disk = pop(source);
        push(destination, disk);
        moveDisk(sourcePole, destinationPole, disk);
        return;
    }

    towerOfHanoi(n - 1, source, destination, auxiliary, sourcePole, destinationPole, auxiliaryPole);

    int disk = pop(source);
    push(destination, disk);
    moveDisk(sourcePole, destinationPole, disk);

    towerOfHanoi(n - 1, auxiliary, source, destination, auxiliaryPole, sourcePole, destinationPole);
}

