#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a specific node
 * @head: refrence to head
 * @index: position of node to be deleted
 * Return: 1 on success | -1 on fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;

	if (*head == NULL)
	{
		return (-1);
	}

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
	}
	return (1);
}
