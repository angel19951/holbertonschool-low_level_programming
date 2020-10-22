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

	if (str == '\0')
	{
		return ('\0');
	}
	for (size = 0; *(str + size) != '\0'; size++)
		;

	if (size == 0)
	{
		return ('\0');
	}
	else
		dupStr = (char *)malloc((size + 1) * sizeof(char));

		if (dupStr == '\0')
		{
			return ('\0');
		}
		holderStr = dupStr;
		for (index = 0; index < size; index++)
		{
			*holderStr = *str;
			holderStr++;
			str++;
		}
		holderStr = '\0';
	return (dupStr);
	free(dupStr);
}
