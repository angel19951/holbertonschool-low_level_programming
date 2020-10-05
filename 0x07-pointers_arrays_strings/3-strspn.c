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
	int count0;
	int finder;

	for (count0 = 0; s[count0] != '\0'; count0++)
	{
		for (count = 0; accept[count] != '\0'; count++)
		{
			if (s[count0] == accept[count])
			{
				finder++;
				break;
			}
		}
	}
	return (finder);
}
