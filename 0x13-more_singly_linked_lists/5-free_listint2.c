#include "lists.h"

/**
 * free_listint2 - frees a lists list;
 * @head: node
 * Return: no return
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *hold;

	if (head == NULL)
	{
		return;
	}

	hold = *head;
	while (hold != NULL)
	{
		temp = hold;
		hold = temp->next;
		free(temp);
	}
	*head = NULL;
}
