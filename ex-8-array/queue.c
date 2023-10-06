
#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

queue* new_queue(int size) {
    queue* q = malloc(sizeof(queue) + size * sizeof(int));

    q->head = 1;
    q->tail = 1;
    q->size = size;

    return q;
}

int is_empty(queue* q) {
    return (q->tail == q->head);
}

int is_full(queue* q) {
    return (q->head == q->tail + 1);
}

void enqueue(queue* q, int x) {
    if (is_full(q)) {
        printf("Queue Overflow\n");
    } else {
        q->Q[q->tail] = x;
        if (q->tail == q->size) {
            q->tail = 1;
        } else {
            q->tail = q->tail + 1;
        }
    }
}

int dequeue(queue* q) {
    if (is_empty(q)) {
        printf("Underflow\n");
        return -1000;
    } else {
        int x = q->Q[q->head];
        if (q->head == q->size) {
            q->head = 1;
        } else {
            q->head = q->head + 1;
        }
        return x;
    }
}

void display(queue* q) {
    int i;
    for (i = q->head; i < q->tail; i++) {
        printf("%d\n", q->Q[i]);
        if (i == q->size) {
            i = 0;
        }
    }
}
