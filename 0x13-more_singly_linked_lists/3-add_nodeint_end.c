#include "lists.h"

/**
 * add_nodeint_end - add a new node at end of a list
 * @head: refrence to head
 * @n: value to be inserted
 * Return: NULL on fail | adress of the new element on success
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end, *temp;

	end = malloc(sizeof(listint_t));
	if (end == NULL)
	{
		return (NULL);
	}
	else
	{
		end->n = n;
	}
	end->next = NULL;

	temp = *head;
	if (*head == NULL)
	{
		*head = end;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
	temp->next = end;
	}
	return (end);
}
