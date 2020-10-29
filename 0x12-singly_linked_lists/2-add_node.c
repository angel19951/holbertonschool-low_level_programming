#include "lists.h"
#include <string.h>
/**
 * add_node - add a node at the beginning
 * @head: head of the links
 * @str: value to be added
 * Return: head of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	int index = 0;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		new_node->str = NULL;
		new_node->len = 0;
	}
	else
	{
		new_node->str = strdup(str);
		while (str[index] != '\0')
		{
			index++;
		}
		new_node->len = index;
	}
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

