#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - returm newly allocated space in memory
 * @str: contains a copy of the string
 * Return: NULL if str is null or no sufficient memory
 */

char *_strdup(char *str)
{
	char *dupStr;
	char *holderStr;
	int size;
	int index;

	if (str == NULL)
	{
		return (NULL);
	}

	for (size = 0; *(str + size) != '\0'; size++)
		;

	dupStr = malloc((size + 1) * sizeof(char));
	if (dupStr == NULL)
	{
		return (NULL);
	}
	holderStr = dupStr;
	for (index = 0; index < size; index++)
	{
		*holderStr = *str;
		holderStr++;
		str++;
	}
	*holderStr = '\0';
	return (dupStr);
}
