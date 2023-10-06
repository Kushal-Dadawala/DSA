
#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main() {
    queue* q = new_queue(10);
    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    enqueue(q, 40);
    enqueue(q, 50);
    display(q);

    printf("\n");

    dequeue(q);
    dequeue(q);
    display(q);

    printf("\n");

    enqueue(q, 60);
    enqueue(q, 70);
    display(q);

    return 0;
}
