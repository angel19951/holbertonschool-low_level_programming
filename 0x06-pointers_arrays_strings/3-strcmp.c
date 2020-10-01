#include "holberton.h"
/**
 * _strcmp - compares two strings and returns if equal, neg or pos
 * @s1: first input string
 * @s2: second input string
 * Return: always 0
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
