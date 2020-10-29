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

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
