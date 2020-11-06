#include "holberton.h"

/**
 * set_bit - Sets value of a bit to 1 at a given value
 * @n: bit to be manipulated
 * @index: where bit will be chaged
 * Return: 1 on success | -1 on fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int temp = 1;

	if (index > sizeof(index) * 8)
	{
		return (-1);
	}
	temp = temp << index;

	if ((temp & *n) == 0)
	{
		*n += temp;
	}
	return (1);
}
