#include "lists.h"

/**
 * free_listint2 - frees a lists list;
 * @head: node
 * Return: no return
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *next;

	if (head == NULL)
	{
		return (NULL);
	}
	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
	*head = NULL;
}
