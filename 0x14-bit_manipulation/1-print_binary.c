#include "holberton.h"

/**
 * print_binary - prints binary representation of a number
 * @n: number to be converted
 * Return: No return for void functions
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if ((n >> 1) != 0)
		{
			print_binary(n >> 1);
		}
		_putchar((n & 1) + '0');
	}
}
