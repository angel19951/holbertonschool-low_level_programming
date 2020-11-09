#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

/* _putchar function prototype */
int _putchar(char c);

/* 0. Tread lightly, she is near | function prototype */
ssize_t read_textfile(const char *filename, size_t letters);

/* 1. Under the snow | function prototype */
int create_file(const char *filename, char *text_content);

/* 2. Speak gently, she can hear | function prototype */
int append_text_to_file(const char *filename, char *text_content);

/* 3. cp | function prototype */

#endif
