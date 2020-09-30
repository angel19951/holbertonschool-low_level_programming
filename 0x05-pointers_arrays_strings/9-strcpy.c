#include "holberton.h"
/**
 * *_strcpy - copy a string
 * @dest: variable to be copied to
 * @src: variable to be copied from
 * Return: return dest
 */

char *_strcpy(char *dest, char *src)
{
	int count;

	for (count = 0; src[count] != '\0' ; count++)
	{
		dest[count] = src[count];
	}
	dest[count] = '\0';
	return (dest);
}
