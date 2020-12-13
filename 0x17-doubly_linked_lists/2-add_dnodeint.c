#include "lists.h"

/**
 * add_dnodeint - adds a node at beginnig of a list
 * @head: refrence to head of list
 * @n: node to insert
 * Return: NULL if failed || address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (head == NULL)
	{
		return (NULL);
	}
	if (new == NULL)
	{
		return (NULL);
	}
	new->prev = NULL;
	new->n = n;
	new->next = *head;
	if (*head != '\0')
	{
		(*head)->prev = new;
	}
	*head = new;
	return (new);
}
