#ifndef PRINTVECTOR_H
#define PRINTVECTOR_H

#include <stdio.h>

/**
 * Print Vector double function
 *
 * @brief Print a vector of double in python style [ 3.14, 2.19, ... ]
 * @return if success return the number of chars writed on stream, on failure return -1
 * @param stream file stream to be writed on
 * @param vector a pointer to a vector of doubles
 * @param size number of elements on the vector
 * @param decFig integer with the number of decimal figures to print, must be an integer between 0 and 9
 */
int print_vector_double(FILE *stream, double *vector, size_t size, int decFig);

/**
 * Prints a NULL terminated vector of strings ["name1", "name2", ... ]
 * @brief Print a NULL terminated vector of NULL terminated strings
 * @return return the number of chars writed on stream 
 * @param stream file stream to be writed on
 * @param vector pointer to first element of vector, that is a char string
 */
int print_vector_string(FILE *stream, char **vector);

/**
 * @brief Prints a vector of int
 * @param stream file to be writed on
 * @param vector a vector of ints
 * @param size number of elements on the vector
 */
int print_vector_int(FILE *stream, int *vector, size_t size);

/**
 * Print Vector float function
 *
 * @brief Print a vector of float in python style [ 3.14, 2.19, ... ]
 * @return if success return the number of chars writed on stream, on failure return -1
 * @param stream file stream to be writed on
 * @param vector a pointer to a vector of floats
 * @param size number of elements on the vector
 * @param decFig integer with the number of decimal figures to print, must be an integer between 0 and 9
 */
int print_vector_float(FILE *stream, float *vector, size_t size, int decFig);

#endif
