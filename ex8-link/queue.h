#ifndef QUEUE_H
#define QUEUE_H

struct Node {
    int data;
    struct Node* next;
};

struct Queue {
    struct Node* front;
    struct Node* rear;
};

struct Queue* createQueue();
void enqueue(struct Queue* queue, int data);
int dequeue(struct Queue* queue);
int peek(struct Queue* queue);
int isEmpty(struct Queue* queue);

#endif
