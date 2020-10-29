#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: main node
 * @str: value to be added
 * Return: NULL if failed | address of the new element of succes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node, *temp_node;
	unsigned int index = 0;

	end_node = malloc(sizeof(list_t));
	if (end_node == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		end_node->str = NULL;
		end_node->len = 0;
	}
	else
	{
		end_node->str = strdup(str);
		while (str[index] != '\0')
		{
			index++;
		}
		end_node->len = index;
	}
	end_node->next = NULL;

	temp_node = *head;
	if (*head == NULL)
	{
		*head = end_node;
	}
	else
	{
		while (temp_node->next != NULL)
		{
			temp_node = temp_node->next;
		}
	temp_node->next = end_node;
	}
	return (end_node);
}
