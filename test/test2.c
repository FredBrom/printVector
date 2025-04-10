#include <stdio.h>
#include "printVector.h"

int main() {
    char *strings[] = {"banana", "apple", "peach", "orange", NULL};

    printVectors(stdout, strings);
    return 0;
}