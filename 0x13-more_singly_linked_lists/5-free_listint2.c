#include "lists.h"

/**
 * free_listint2 - frees a lists list;
 * @head: node
 * Return: no return
 */

void free_listint2(listint_t **head)
{
	listint_t *cur = *head, *temp;

	if (cur == NULL)
	{
		return;
	}
	while (cur != NULL)
	{
		temp = cur;
		cur = cur->next;
		free(temp);
	}
	*head = NULL;
}
