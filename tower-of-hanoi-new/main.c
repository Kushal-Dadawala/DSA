#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main() {
    int numDisks = 3; // Change this to the desired number of disks
    struct Stack* source = createStack(numDisks);
    struct Stack* auxiliary = createStack(numDisks);
    struct Stack* destination = createStack(numDisks);

    // Initialize the source stack with disks
    for (int i = numDisks; i >= 1; i--) {
        push(source, i);
    }

    char sourcePole = 'A';
    char auxiliaryPole = 'B';
    char destinationPole = 'C';

    towerOfHanoi(numDisks, source, auxiliary, destination, sourcePole, auxiliaryPole, destinationPole);

    free(source->array);
    free(auxiliary->array);
    free(destination->array);
    free(source);
    free(auxiliary);
    free(destination);

    return 0;
}
