#ifndef STACK_H
#define STACK_H

// Structure to represent a stack
struct Stack {
    int capacity;
    int top;
    int* array;
};

// Function declarations
struct Stack* createStack(int capacity);
int isEmpty(struct Stack* stack);
void push(struct Stack* stack, int item);
int pop(struct Stack* stack);
void moveDisk(char fromPole, char toPole, int disk);
void towerOfHanoi(int n, struct Stack* source, struct Stack* auxiliary, struct Stack* destination, char sourcePole, char auxiliaryPole, char destinationPole);

#endif

