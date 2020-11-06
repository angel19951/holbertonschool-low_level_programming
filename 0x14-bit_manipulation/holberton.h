#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>

/* _putchar porototype */
int _putchar(char c);
/* 0. 0 | function prototype */
unsigned int binary_to_uint(const char *b);

/* 1. 1 | function prototype */
void print_binary(unsigned long int n);

/* 2. 10 | function prototype */
int get_bit(unsigned long int n, unsigned int index);

/* 3. 11 | function prototype */
int set_bit(unsigned long int *n, unsigned int index);

/* 4. 100 | function prototype */
int clear_bit(unsigned long int *n, unsigned int index);

/* 5. 101 | function prototype */
unsigned int flip_bits(unsigned long int n, unsigned long int m);


#endif
