#include "holberton.h"

/**
 * _strspn -  gets the length of a prefix substring
 * @s: segment of bytes
 * @accept: bytes
 * Return: accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int found = 0;
	int i, cnt;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (cnt = 0; accept[cnt] != '\0'; cnt++)
		{
			if (s[i] == accept[cnt])
			{
				found++;
				break;
			}
			if (accept[cnt] == '\0')
				return (found);
		}
	}
	return (found);
}
