#include "lists.h"

/**
 * sum_listint - returns sum of all data
 * @head: list to be added
 * Return: 0 if list = 0 | sum of all on success
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *cur = head;

	if (head == NULL)
	{
		return (0);
	}
	while(cur != NULL)
	{
		sum = sum + cur->n;
		cur = cur->next;
	}
	return (sum);
}
