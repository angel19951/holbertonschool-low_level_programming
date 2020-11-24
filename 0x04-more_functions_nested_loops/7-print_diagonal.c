#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times \ will be printed
 * Return: no return for void function
 */

void print_diagonal(int n)
{
	int i, count;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (count = 0; count < i; count++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
