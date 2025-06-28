#include "printVector.h"
#include <stdio.h>

int printVectord(FILE *stream, double *vector, size_t size, int decFig) {
  /**
   *  print a vector of double on stream
   *  decFig defines the figures after decimal point
   */
  char template[10];

  if (stream == NULL || vector == NULL) {
    fprintf(stderr, "Stream or vector null.\n");
    return -1;
  }

  if ((decFig <= 0) || (decFig > 9)) {
    fprintf(stderr, "Decimal figures out of range.\n");
    return -1;
  }

  sprintf(template, "%%.%df", decFig);
  int sumChar = 0;

  fputc('[', stream);
  sumChar++;
  for (int i = 0; i < (int)size; i++) {
    if (i == ((int)size - 1)) {
      sumChar += fprintf(stream, template, vector[i]);
      sumChar += fprintf(stream, "]\n");
      continue;
    }
    sumChar += fprintf(stream, template, vector[i]);
    sumChar += fprintf(stream, ", ");
  }
  return sumChar;
}

int printVectors(FILE *stream, char **vector) {
  /**
   * print a vector of strings
   */
  int i = 0;
  int sumChar = 0;
  while (vector[i] != NULL) {
    if (i == 0) {
      sumChar += fprintf(stream, "[\"");
      sumChar += fprintf(stream, "%s\"", vector[i]);
      i++;
      continue;
    }
    sumChar += fprintf(stream, ", \"%s\"", vector[i]);
    i++;
  }
  sumChar += fprintf(stream, "]\n");
  return sumChar;
}

int printVectori(FILE *stream, int *vector, size_t size) {
  /**
   *  print a vector of integers
   */
  int sumChar = 0;
  sumChar = fprintf(stream, "[");
  for (int i = 0; i < (int)size; i++) {
    if (i == ((int)size - 1)) {
      sumChar = fprintf(stream, "%d]\n", vector[i]);
      continue;
    }
    sumChar = fprintf(stream, "%d, ", vector[i]);
  }
  return sumChar;
}

int printVectorf(FILE *stream, float *vector, size_t size, int decFig) {
  /**
   *  print a vector of float on stream
   *  decFig defines the figures after decimal point
   */
  char template[10];

  if (stream == NULL || vector == NULL) {
    fprintf(stderr, "Stream or vector null.\n");
    return -1;
  }

  if ((decFig <= 0) || (decFig > 9)) {
    fprintf(stderr, "Decimal figures out of range.\n");
    return -1;
  }

  sprintf(template, "%%.%df", decFig);
  int sumChar = 0;

  fputc('[', stream);
  sumChar++;
  for (int i = 0; i < (int)size; i++) {
    if (i == ((int)size - 1)) {
      sumChar += fprintf(stream, template, vector[i]);
      sumChar += fprintf(stream, "]\n");
      continue;
    }
    sumChar += fprintf(stream, template, vector[i]);
    sumChar += fprintf(stream, ", ");
  }
  return sumChar;
}