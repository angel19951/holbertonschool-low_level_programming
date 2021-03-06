#include "lists.h"

/**
 * get_nodeint_at_index - retruns the nth of a node
 * @head: head node
 * @index: node to return
 * Return: NULL if failed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	while (temp != NULL)
	{
		if (i == index)
		{
			return (temp);
		}
		i++;
		temp = temp->next;
	}
	return (temp);
}
