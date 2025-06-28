#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "printVector.h"

int main() {
    int *VectorInt;
    size_t size = 15;

    srand(time(NULL));

    VectorInt = malloc(sizeof(int) * size);
    if (VectorInt == NULL) {
        fprintf(stderr, "Cannot allocate vector.\n");
        return -1;
    }

    {
        for (int i=0; i<(int) size; i++) {
            VectorInt[i] = rand() % 100;
        }

        printVectori(stdout, VectorInt, size);
    }
    free(VectorInt);
    return 0;
}
