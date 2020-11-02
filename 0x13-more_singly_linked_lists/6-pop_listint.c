#include "lists.h"

/**
 * pop_listint - deletes the head node of a list and rturns the data
 * @head: refrence to the node to be deleted
 * Return: if head is NULL then return 0 | Data in the node on success
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int num;
	if(*head == NULL)
	{
		return (0);
	}
	num = temp->n;
	*head = temp->next;
	free(temp);
return (num);
}
