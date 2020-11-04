#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @head: reference to head
 * Return: returns reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (*head == NULL)
	{
		return (NULL);
	}
	if ((*head)->next == NULL)
	{
		return (*head);
	}

	prev = NULL;
	next = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head; 
		*head = next;
	}
	*head = prev;
	return (*head);
}
