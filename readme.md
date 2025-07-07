# Print Vector Library

Simple library to print primitive types arrays in C.
The style of print is inspired on Python Lists.

```
[ 3.14, 2.17, ... ]
["name1", "name2", ...]
[1, 34, 147, -512]
```

## Double and Float
Writes the array of size `size` on file `stream` using `decFig` decimal figures.
`int print_vector_double(FILE *stream, double *vector, size_t size, int decFig)`
`int print_vector_float(FILE *stream, float *vector, size_t size, int decFig)`

## Strings
Writes a NULL terminated array of NULL terminated strings (array of chars) on stream.
`int print_vector_string(FILE *stream, char **vector)`

## Integers
Writes the stream the array of `size` elements.
`int print_vector_int(FILE *stream, int *vector, size_t size)`



