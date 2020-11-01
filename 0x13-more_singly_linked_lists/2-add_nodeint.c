#include "lists.h"

/**
 * add_nodeint - adds a node at beginning of a list
 * @head: head node
 * @n: to be inserted in node
 * Return: NULL if failed | adress of new element on success
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
	new_node->n = n;
	}
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
