#include <stdio.h>
#include "queue.h"

int main() {
    struct Queue* queue = createQueue();

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);

    printf("Front element: %d\n", peek(queue));
    printf("%d dequeued from the queue.\n", dequeue(queue));
    printf("%d dequeued from the queue.\n", dequeue(queue));

    printf("Is the queue empty? %s\n", isEmpty(queue) ? "Yes" : "No");

    return 0;
}
