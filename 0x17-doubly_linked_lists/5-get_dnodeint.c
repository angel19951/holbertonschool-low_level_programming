#include "lists.h"

/**
 * get_dnodeint_at_index - returns a node at index
 * @head: refrence to list
 * @index: index of the node
 * Return: NULL if failed or node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int count = 0;

	while (temp != NULL)
	{
		if (count == index)
		{
			return (temp);
		}
		count++;
		temp = temp->next;
	}
	return (temp);
}
