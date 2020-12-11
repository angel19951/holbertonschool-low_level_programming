#ifndef __LISTS_H__
#define __LISTS_H__
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 * Description: doubly linked list node structure
 * for Holberton project
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;


/* 0 - print all elements in doubly linked lists*/
size_t print_dlistint(const dlistint_t *h);

/* 1 - print number of all elements in a liked list */
size_t dlistint_len(const dlistint_t *h);

/* 2 - adds a new node at the beginning of a list */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

/* 3 - adds new node at the end of a list */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

/* 4 - frees a list */
void free_dlistint(dlistint_t *head);

/* 5 - get a node at position */
dlistint_t *get_dnodeint_at_index(dlistint *head, unsigned int index);

/* 6 - sums all data in a linked list */
int sum_dlistint(dlistint_t *head);

/* 7 - inserts a new node at a given position */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

/* 8 -deletes the node at index of a list */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
