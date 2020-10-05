#ifndef HOLBERTON_H
#define HOLBERTON_H

/* _putchar function prototype */
int _putchar(char c);

/* 0. *_memset function prototype */
char *_memset(char *s, char b, unsigned int n);

/* 1. *_memcpy function prototype */
char *_memcpy(char *dest, char *src, unsigned int n);

/* 2. *_strchr function prototype */
char *_strchr(char *s, char c);

/* 3.  _strspn function prototype */
unsigned int _strspn(char *s, char *accept);

/* 4. *_strpbrk function prototype */
char *_strpbrk(char *s, char *accept);

/* 5. *_strstr function prototype */
char *_strstr(char *haystack, char *needle);

/* 6. print_chessboard function prototype */
void print_chessboard(char (*a)[8]);

/* 7. print_diagsums function prototype */
void print_diagsums(int *a, int size);

/* 8. set_string function prototype */
void set_string(char **s, char *to);

#endif
