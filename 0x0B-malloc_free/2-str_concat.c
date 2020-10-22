#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: main string
 * @s2: string to be added
 * Return: NULL on failure;
 */
char *str_concat(char *s1, char *s2)
{
	int sizeS1, sizeS2, index, index2;
	char *str;

	if (s1 == '\0')
	{
		s1 = "";
	}
	if (s2 == '\0')
	{
		s2 = "";
	}
	for (sizeS1 = 0; s1[sizeS1] != '\0'; sizeS1++)
		;
	for (sizeS2 = 0; s2[sizeS2] != '\0'; sizeS2++)
		;

	str = malloc(sizeof(char) * (sizeS1 + sizeS2 + 1));

	if (str == '\0')
	{
		return ('\0');
	}

	for (index = 0; index < sizeS1; index++)
	{
		str[index] = s1[index];
	}
	for (index = index, index2 = 0; index2 < (sizeS1 + sizeS2); index++, index2++)
	{
		str[index] = s2[index2];
	}

	str[index] = '\0';

	return (str);
	free(str);
}
