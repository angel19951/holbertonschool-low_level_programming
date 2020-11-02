#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node in a specific index
 * @head: refrence to head node
 * @idx: where the node is to be added
 * @n: value to be added to the node
 * Return: NULL if failed | pointer to head if success
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *hold;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	new->n = n;
	new->next = NULL;

	unsigned int start = 1;

		hold = *head;
		while (hold != NULL)
		{
			if (start == idx)
			{
				new->next = hold->next;
				hold->next = new;
			}
			hold = hold->next;
			start++;
		}
	return (hold);
}
