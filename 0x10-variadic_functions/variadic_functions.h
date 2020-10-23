#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/* _putchar prototype */
int _putchar(char c);

/* 0. Returns the sum of all its parameters | function prototype */
int sum_them_all(const unsigned int n, ...);

/* 1. Prints numbers, followed by a new line | function prototype */
void print_numbers(const char *separator, const unsigned int n, ...);

/* 2. Prints strings, followed by a new line | function prototype */
void print_strings(const char *separator, const unsigned int n, ...);

/* 3. Prints anything | function prototype */
void print_all(const char * const format, ...);

#endif
