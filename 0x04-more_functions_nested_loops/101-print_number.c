#include "holberton.h"

/**
 * print_number - putchars a integers
 * @n: number to be printed
 * Return: no return
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
