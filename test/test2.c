#include <stdio.h>
#include "printVector.h"

int main() {
    char *strings[] = {"banana", "apple", "peach", "orange", NULL};

    print_vector_string(stdout, strings);
    return 0;
}
