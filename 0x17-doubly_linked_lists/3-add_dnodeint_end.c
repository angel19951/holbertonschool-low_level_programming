#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of list
 * @head: refrence to head of list
 * @n: node to insert
 * Return: NULL if failed || address of the new element in the list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *end;

	if (head == NULL)
	{
		return (NULL);
	}

	end = malloc(sizeof(dlistint_t));
	if (end == NULL)
	{
		return (NULL);
	}
	end->n = n;
	end->next = NULL;

	temp = *head;
	if (*head == NULL)
	{
		end->prev = NULL;
		*head = end;
		return (end);
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		end->prev = temp;
		temp->next = end;
	}
	return (end);
}
