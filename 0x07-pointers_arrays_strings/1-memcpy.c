#include "holberton.h"

/**
 * *_memcpy - copies memory data
 * @dest: destination for the data to be alocated
 * @src: source memory data
 * @n: bytes of memory to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *sChar = src;
	char *dChar = dest;
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		dChar[count] = sChar[count];
	}
	return (dest);
}
