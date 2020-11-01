#include "lists.h"

/**
 * free_listint - frees a list
 * @head: list to be freed
 * Return: no return
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
