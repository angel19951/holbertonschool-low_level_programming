#include "holberton.h"

/**
 * _strlen_recursion - prints the length of a string using recursion
 * @s: string to be counted
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (s[length] == '\0')
	{
		return (0);
	}
	else
	{
		return (_strlen_recursion(s + 1) + 1);
	}
}
