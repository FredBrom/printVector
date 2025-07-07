#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "printVector.h"

int main() {
    double *doubleVector;
    int sum = 0;
    size_t size = 5;

    doubleVector = malloc(sizeof(double) * size);
    if (doubleVector == NULL) {
        fprintf(stderr, "Cannot initialize vector.\n");
        return -1;
    }

    srand(time(NULL));

    for (int i=0; i<(int) size; i++) {
        doubleVector[i] = (double) rand() / RAND_MAX;
    }

    sum = print_vector_double(stdout, doubleVector, size, 4);
    printf("sum:%d char. \n", sum);

    return 0;
}
