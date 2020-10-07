#include "holberton.h"

/**
 * _puts_recursion - prints given string using recursion
 * @s: string to be printed
 * Return: always 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion((s + 1));

}
