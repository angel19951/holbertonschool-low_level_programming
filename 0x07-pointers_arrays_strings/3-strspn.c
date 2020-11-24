#include "holberton.h"

/**
 * _strspn -  gets the length of a prefix substring
 * @s: segment of bytes
 * @accept: bytes
 * Return: accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int count;
	int count1;

	if (*s == '\0' || *accept == '\0')
	{
		return ('\0');
	}
	for (count = 0; accept[count] != '\0'; count++)
	{
		for (count1 = 0; *(s + count1) != '\0'; count1++)
		{
			if (*(s + count1) == *(accept + count))
			{
				return (count1 + 1);
			}
		}
	}
	return (0);
}
