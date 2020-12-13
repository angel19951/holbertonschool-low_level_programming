#include "lists.h"

/**
 * dlistint_len - prints lenght of a list
 * @h: refrence to the head of list
 * Return: length of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
