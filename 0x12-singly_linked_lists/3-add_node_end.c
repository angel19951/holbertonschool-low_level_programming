#include "lists.h"
#include <stdlib.h>
#include <string.h>


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node, *temp_node;
	end_node = malloc(sizeof(list_t));
	if (end_node == NULL)
	{
		return(NULL);
	}
	else
	{
		end_node->str = strdup(str);
		end_node->len = strlen(str);
		end_node->next = NULL;
		temp_node = *head;
		while (temp_node != NULL)
		{
			temp_node = temp_node->next;
		}
		temp_node->next = end_node;
	}
	return (*head);
}
