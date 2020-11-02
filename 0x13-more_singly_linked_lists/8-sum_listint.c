#include "lists.h"

/**
 * sum_listint - returns sum of all data
 * @head: list to be added
 * Return: 0 if list = 0 | sum of all on success
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *cur = head;

	if (head == NULL)
	{
		return (0);
	}
	for (cur = cur->next; cur != NULL; cur = cur->next)
		sum = sum + cur->n;

	return (sum);
}
