#include "holberton.h"

/**
 * *_strchr - locates a character in a string
 * @s: string that will be scanned
 * @c: character we are looking for
 * Return: s if character is found, NULL if nothing is found
 */
char *_strchr(char *s, char c)
{
	int count;

	for (count = 0; *(s + count) != '\0'; count++)
	{
		if (*(s + count) == c)
		{
			return (s + count);
		}
	}
	return ('\0');
}
