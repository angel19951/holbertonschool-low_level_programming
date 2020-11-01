#include "lists.h"

/**
 * sum_listint - returns sum of all data
 * @head: list to be added
 * Return: 0 if list = 0 | sum of all on success
 */

int sum_listint(listint_t *head)
{
	if (head == NULL)
	{
		return (0);
	}

	int sum = 0;

	sum_of_nodes(head, &sum);

	return(sum);
}

void sum_of_nodes(listint_t *head, int *sum)
{
	if (head == NULL)
	{
		return;
	}
	sum_of_nodes(head->next, sum);

	*sum += head->n;
}
