#include "holberton.h"

/**
 * *_strchr - locates a character in a string
 * @s: string that will be scanned
 * @c: character we are looking for
 * Return: s if character is found, NULL if nothing is found
 */
char *_strchr(char *s, char c)
{
	char *str = s;
	int index = 0;

	while (*s != c)
	{
		s++;
		index++;
	}
	if (*s == c)
	{
		return (str + index);
	}
	else
	{
		return ('\0');
	}
}
