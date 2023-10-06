
#ifndef QUEUE_H
#define QUEUE_H

typedef struct queue {
    int head;
    int tail;
    int size;
    int Q[];
} queue;

queue* new_queue(int size);
int is_empty(queue* q);
int is_full(queue* q);
void enqueue(queue* q, int x);
int dequeue(queue* q);
void display(queue* q);

#endif
