#include "holberton.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: value to be set
 * @to: value to set in pointer
 * Return: no return for void function
 */

void set_string(char **s, char *to)
{
	if (*s == '\0' || *to == '\0')
		return;
	*s = to;
}

