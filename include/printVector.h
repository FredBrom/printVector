#ifndef PRINTVECTOR_H
#define PRINTVECTOR_H

#include <stdio.h>

int printVectord(FILE *stream, double *vector, size_t size, int decFig);

int printVectors(FILE *stream, char **vector);

int printVectori(FILE *stream, int *vector, size_t size);

int printVectorf(FILE *stream, float *vector, size_t size, int decFig);

#endif