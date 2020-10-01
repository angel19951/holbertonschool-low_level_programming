#include "holberton.h"
/**
 * *_strncpy - copies a string
 * @dest: variable to be copied to
 * @src: variable to be copied from
 * @n: length of string
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0 ; count < n && *(src + count) != '\0' ; count ++)
	{
		*(dest + count) = *(src + count);
	}
	while (count < n)
	{
		*(dest + count) = '\0';
		count++;
	}
	return (dest);
}
