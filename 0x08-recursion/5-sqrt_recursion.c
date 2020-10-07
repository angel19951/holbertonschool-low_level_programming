#include "holberton.h"

/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: number which root will be found
 * Return: return square root of n
 */

int _sqrt_recursion(int n)
{
	int count;

	if(n < 0)
	{
		return (-1);
	}

	for (count = 0; count * count < n; count++)
		;
	if (count * count != n)
	{
		return (-1);
	}
	return (count);
}
