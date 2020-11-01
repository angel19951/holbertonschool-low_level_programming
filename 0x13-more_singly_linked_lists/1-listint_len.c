#include "lists.h"

/**
 * listint_len - counts the number of elements in a list
 * @h: node to be printed
 * Return: number of elements in list | NULL if failed
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return ('\0');
	}
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
