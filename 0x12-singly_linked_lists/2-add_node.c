#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - add a node at the beginning
 * @head: head of the links
 * @str: value to be added
 * Return: head of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *holder;
	char *dup;
	int len;

	dup = strdup(str);
	len = strlen(dup);
	holder = malloc(sizeof(list_t));
	if (holder == NULL)
	{
		return (NULL);
	}
	holder->len = len;
	holder->str = dup;
	holder->next = *head;
	*head = holder;
	return (*head);
}
