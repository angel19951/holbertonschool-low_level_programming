#include "lists.h"

/**
 * sum_dlistint - returns sum of all data in a list
 * @head: refrence to head of list
 * Return: 0 if list is empty || sum of all elements
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
