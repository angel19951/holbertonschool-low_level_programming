#include "holberton.h"

/**
 * print_rev - prints string backwards
 * @s: variable to be reversed
 * Return: no return
 */
void print_rev(char *s)
{

	int count;
	int lenght = 0;

	for (count = 0 ; s[count] != '\0' ; count++)
	{
		lenght++;
	}
	for (lenght = lenght - 1 ; s[lenght] ; lenght--)
	{
		_putchar(s[lenght]);
	}
	_putchar('\n');
}
