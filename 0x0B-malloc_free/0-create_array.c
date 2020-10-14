#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars and initializes with a specific char
 * @size: size of the array to be created
 * @c: character to be writter
 * Return: NULL if size = 0 or fail, to array on success.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int index;

	ptr = malloc(size * sizeof(char));

	if (ptr == '\0')
	{
		return ('\0');
	}
	else
		for (index = 0; index < size; index++)
		{
			ptr[index] = c;
		}

	return (ptr);
}

