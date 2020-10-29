#include "lists.h"
#include <stdlib.h>

/**
 * list_len - prints ammount of nodes
 * @h: arguments to be counted
 * Return: ammount of nodes
 */
size_t list_len(const list_t *h)
{
	const list_t *reader;
	size_t count = 0;

	reader = h;
	if (reader == NULL)
	{
		return (0);
	}
	while (reader != NULL)
	{
		count++;
		reader = reader->next;
	}
	return (count);
}
