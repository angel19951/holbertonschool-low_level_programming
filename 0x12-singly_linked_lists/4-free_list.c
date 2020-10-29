#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list
 * @head: to be printed
 * Return: no return
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
	{
		return;
	}

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
