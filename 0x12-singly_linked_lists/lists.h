#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* _putchar |function prototype */
int _putchar(char c);

/* 0. Print list | function prototype */
size_t print_list(const list_t *h);

/* 1. List length | function prototype */
size_t list_len(const list_t *h);

/* 2. Add node | function prototype */
list_t *add_node(list_t **head, const char *str);

/* 3. Add node at the end  | function prototype */
list_t *add_node_end(list_t **head, const char *str);

/* 4. Free list | function prototype */
void free_list(list_t *head);

#endif
