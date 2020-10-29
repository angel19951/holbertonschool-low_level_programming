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
	list_t *reader;

	reader = head;
	while (reader != NULL)
	{
		temp = head;
		free(temp);
		head = head->next;
	}
}
