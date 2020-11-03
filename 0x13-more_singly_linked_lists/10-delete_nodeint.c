#include "lists.h"
#define SUCCESS 1
#define FAILURE -1
/**
 * delete_nodeint_at_index - deletes a specific node
 * @head: refrence to head
 * @index: position of node to be deleted
 * Return: 1 on success | -1 on fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *temp, *hold;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	{
		return (FAILURE);
	}

	temp = *head;
	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (SUCCESS);
	}
	else
	{
		while (temp != NULL)
		{
			if (i == index - 1)
			{
				if (temp->next == NULL)
				{
					return (FAILURE);
				}
				hold = temp->next->next;
				free(temp->next);
				temp->next = hold;
				return (SUCCESS);
				}
			i++;
			temp = temp->next;
		}
	}
	return (FAILURE);
}
