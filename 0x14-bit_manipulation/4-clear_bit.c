#include "holberton.h"

/**
 * clear_bit - clears a bit to 0 at a given index
 * @n: bit to be manipulated
 * @index: bit to manipulate
 * Return: 1 on success | -1 on fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int temp = 1;

	if (index > sizeof(*n) * 8)
	{
		return (-1);
	}
	temp = temp << index;
	
	*n &= ~temp;
	return (1);
}
