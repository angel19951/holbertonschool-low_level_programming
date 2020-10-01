#include "holberton.h"

/**
 * *_strncat - concatenates two strings
 * @n: bytes from src
 * @dest: to be appended
 * @src: to append
 * Return: dest return
 */
char *_strncat(char *dest, char *src, int n)
{
	int destCount, srcCount;

	for (destCount = 0 ; *(dest + destCount) != '\0' ; destCount++)
		;
	for (srcCount = 0 ; *(src + srcCount) != '\0' ; srcCount++)
	{
		if (*(dest + destCount) < n)
		{
			*(dest + destCount + srcCount) = *(src + srcCount);
		}
	}
	*(dest + destCount + srcCount) = '\0';
	return (dest);
}
