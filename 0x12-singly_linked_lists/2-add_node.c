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
	char *dup;
	int len;

	dup = strdup(str);
	len = strlen(dup);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return(NULL);
	}
	new_node->len = len;
	new_node->str = dup;
	new_node->next = *head;
	*head = new_node;
	return (0);
}
