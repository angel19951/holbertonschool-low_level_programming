#include "holberton.h"

/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: number which root will be found
 * Return: return square root of n if nor return -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1 || n == 0)
	{
		return (n);
	}

	return (_sqrt_finder(n, 1));
}
/**
 * _sqrt_finder - finds the natural square root of a number
 * @n: number which root will be found
 * @y: sqrt of n
 * Return: return square root of n if not return -1
 */
int _sqrt_finder(int n, int y)
{
	if ((y * y) == n)
	{
		return (y);
	}
	else if (y < n)
	{
		return (_sqrt_finder(n, y + 1));
	}
	return (-1);
}
