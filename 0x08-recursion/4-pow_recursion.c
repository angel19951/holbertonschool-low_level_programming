#include "holberton.h"

/**
 * _pow_recursion - elevates the value of x to the power of y
 * @x: variable to be elevated
 * @y: power variable
 * Return: return -1 if y < 0, return x elevated to y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
