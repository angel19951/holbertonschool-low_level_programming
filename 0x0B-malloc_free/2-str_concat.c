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
	int sizeS1, sizeS2, concat;
	int index = 0;
	char *str;

	for (sizeS1 = 0; *(s1 + sizeS1) != '\0'; sizeS1++)
		;
	for (sizeS2 = 0; *(s2 + sizeS2) != '\0'; sizeS2++)
		;
	concat = sizeS1 + sizeS2 + 1;
	str = malloc(concat);
	while (*s1 != '\0')
	{
		str[index] = *s1;
		s1++;
		index++;
	}
	while (*s2 != '\0')
	{
		str[index] = *s2;
		s2++;
		index++;
	}
	str[index] = '\0';

	return (str);
}
