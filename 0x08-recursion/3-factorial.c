#include "holberton.h"

/**
 * factorial - prints the factorial of a positive number
 * @n: nunmber to be factorized
 * Return: -1 if n < 0 1 if n == 0 factorial of n if n >= 1
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
