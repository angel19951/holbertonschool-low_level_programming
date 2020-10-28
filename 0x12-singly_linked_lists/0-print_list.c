#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - prints all the elements of list_t list
 * @h: argument to be printed
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *reader;
	int count = 0;

	reader = h;
	while (reader != NULL)
	{
		if (reader->str == NULL)
		{
			printf("[%i] (nil)\n", count);
			count++;
			reader = reader->next;
		}
		else
		{
		printf("[%i] %s", reader->len, reader->str);
		printf("\n");
		reader = reader->next;
		count++;
		}
	}
	return (count);
}

