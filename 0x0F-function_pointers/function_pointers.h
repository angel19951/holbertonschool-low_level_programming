#ifndef FUNCTION_POINTERS
#define FUNCTION_POINTERS
#include <stdio.h>
/* _putchar function prototype */
int _putchar(char c);

/* 0. What's my name | Function prototype */
void print_name(char *name, void (*f)(char *));

/* 1.  If you spend too much time thinking about a thing, */
/* you'll never get it done | Function prototype */
/* void array_iterator(int *array, size_t size, void (*action)(int)); */
void array_iterator(int *array, size_t size, void (*action)(int));
/* 2. To hell with circumstances; I create opportunities| Function prototype */
int int_index(int *array, int size, int (*cmp)(int));

/* 3. A goal is not always meant to be reached, it often serves simply */
/* as something to aim at | Function prototype */
int (*get_op_func(char *s))(int, int);


#endif
