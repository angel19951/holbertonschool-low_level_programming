#include "holberton.h"

/**
 * *_memset - fill a block of memory with given value
 * @s: variable to be appointed
 * @b: replace value for memory of s
 * @n: constant byte
 * Return: return memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (s);
}
