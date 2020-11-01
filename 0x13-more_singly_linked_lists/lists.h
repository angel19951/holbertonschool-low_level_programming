#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;


/* _putchar prototype */
int _putchar(char c);

/* 0. Print list | function prototype */
size_t print_listint(const listint_t *h);

/* 1. List length | function prototype */
size_t listint_len(const listint_t *h);

/* 2. Add note | function prototype */
listint *add_nodeint(listint_t **head, const int n);

/* 3. Add node at the end | function prototype */
listint_t *add_nodeint_end(listint **head, const int n);

/* 4.Free list | function prototype */
void free_listint(listint_t *head);

/* 5. Free | function prototype */
void free_listint2(listint_t **head);

/* 6. Pop | function prototype */
int pop_listint(listint_t **head);

/* 7. Get node at index | function prototype */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/* 8. Sum list | function prototype */
int sum_listint(listint_t *head);

/* 9. Insert | function prototype */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

/* 10. Delete at index | function prototype */
int delete_nodeint_at_index(listint_t **head, unsigned int index);

#endif
