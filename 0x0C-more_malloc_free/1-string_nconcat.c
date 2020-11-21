#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: first string to concat
 * @s2: string to add and end
 * @n: number of characters for s2
 * Return: NULL if failed || ne concatenated string if success
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, size2;
	unsigned int i, ii, nn;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (size1 = 0; *(s1 + size1) != '\0'; size1++)
		;
	for (size2 = 0; *(s2 + size2) != '\0' && size2 < n; size2++)
		;
	concat = malloc(sizeof(char) * (size1 + size2 + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size1; i++)
	{
		concat[i] = s1[i];
	}
	for (ii = i, nn = 0; nn < size2; ii++, nn++)
	{
		concat[ii] = s2[nn];
	}
	concat[ii] = '\0';
	return (concat);
}
