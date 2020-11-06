#include "holberton.h"

/**
 * flip_bit - counts the number of bits it would be needed
 * to reach another number
 * @n: number to be counted in bits
 * @m: number to get to in bits
 * Return: number of nits it will be needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = 0;
	unsigned long int count = 0;

	result = n ^ m;

	while (result > 0)
	{
		count = count + (result & 1);
		result = result >> 1;
	}
	return (count);
}
