#include "holberton.h"

/**
 * _print_rev_recursion - prints a string in reverse using recursions
 * @s: string to be printed in reverse
 * Return: no return
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion((s + 1));
	_putchar(*s);
}