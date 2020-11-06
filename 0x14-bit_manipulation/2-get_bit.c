#include "holberton.h"

/**
 * get_bit - returns value at a given index
 * @n: value to be checked
 * @index: which value to check
 * Return: -1 on fail | value of bit index on success
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
