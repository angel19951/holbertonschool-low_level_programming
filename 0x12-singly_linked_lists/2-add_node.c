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
	list_t *new_node;

	if (head == NULL)
	{
		return(NULL);
	}
	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	return(*head);
}
