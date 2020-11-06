#include "holberton.h"


int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int temp = 1;

	if (index > sizeof(index) * 8)
	{
		return (-1);
	}
	temp = temp << index;

	if ((temp & *n) ==0)
	{
	return (1);
	}
}
