#include "holberton.h"

/**
 * is_prime_number - checks for a prime number
 * @n: number to be checked if prime
 * Return: 1 if prime, 0 if not prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (isprime_finder(n, 2));
}

/**
 * isprime_finder - checks for prime number
 * @n: number to be checked for prime
 * @y: checker for a prime number
 * Return: 1 if y = n , 0 if n % y = 0
 */
int isprime_finder(int n, int y)
{
	if (y == n)
	{
		return (1);
	}
	else if ((n % y) == 0)
	{
		return (0);
	}
	else
		return (isprime_finder(n, y + 1));

}
