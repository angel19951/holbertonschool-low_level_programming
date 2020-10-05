#include "holberton.h"

/**
 *_strchr - locates a character in a string
 * @s: string that will be scanned
 * @c: character we are looking for
 * Return: s if character is found, NULL if nothing is found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
