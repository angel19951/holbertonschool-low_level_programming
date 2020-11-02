#include "lists.h"

/**
 * get_nodeint_at_index - retruns the nth of a node
 * @head: head node
 * @index: node to return
 * Return: NULL if failed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;

	unsigned int i;

	temp = head;
	if (head == NULL)
	{
		return ('\0');
	}
	if (index == 0)
	{
		return ('\0');
	}

	for (i = 0; i < index; i++)
	{
		temp = temp->next;
	}
	return (temp);
}
