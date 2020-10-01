#include "holberton.h"

/**
 * *_strcat - concatenates two strings
 * @dest: to be appended
 * @src: to append
 * Return: returns dest
 */
char *_strcat(char *dest, char *src)
{
	int srcCount, destCount;

	for (destCount = 0 ; *(dest + destCount) != '\0' ; destCount++)
		;
	for (srcCount = 0 ; *(src + srcCount) != '\0' ; srcCount++)
	{
		*(dest + destCount + srcCount) = *(src + srcCount);
	}
	*(dest + destCount + srcCount) = '\0';
	return (dest);
}

