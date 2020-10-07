#include "holberton.h"

/**
 * is_prime_number - checks for a prime number
 * @n: number to be checked if prime
 * Return: 1 if prime, 0 if not prime
 */
int is_prime_number(int n)
{
	int count;
	int prime;

	if (n <= 1)
	{
		return (0);
	}
	prime = 0;

	for (count = 2; count <= n / 2; count++)
	{
		if ((n % count) == 0)
		{
			prime = 1;
			break;
		}
	}
	if (prime == 0)
	{
		return (1);
	}
	else
		return (0);
}
