#include "lists.h"

/**
 * print_listint - prints elements of a list
 * @h: node to be access
 * Return: NULL if failed, count when success
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return (NULL);
	}

	while (h != NULL)
	{
		printf("%i\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
