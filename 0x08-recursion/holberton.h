#ifndef HOLBERTON_H
#define HOLBERTON_H

/* _putchar function prototype */
int _putchar(char c);

/* 0. void _puts_recursion function prototype */
void _puts_recursion(char *s);

/* 1. _print_rev_recursion function prototype */
void _print_rev_recursion(char *s);

/* 2. _strlen_recursion function prototype */
int _strlen_recursion(char *s);

/* 3. factorial function prototype */
int factorial(int n);

/* 4. _pow_recursion function prototype */
int _pow_recursion(int x, int y);

/* 5. _sqrt_recursion function prototype */
int _sqrt_recursion(int n);
int _sqrt_finder(int y, int n);

/* 6. is_prime_number function prototype */
int is_prime_number(int n);
int isprime_finder(int n, int y);

/* 7. is_palindrome function prototype */
int is_palindrome(char *s);
int palindrome_finder(char *s, int beginning, int ending);

#endif
