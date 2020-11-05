#include "holberton.h"

unsigned int binary_to_unit(const char *b)
{
	unsigned int dec, idx, last;
	unsigned int base;

	if (b == NULL)
	{
		return ('\0');
	}

	idx = atoi(b);
	if (idx != 0 || idx != 1)
	{
		return ('\0');
	}

	while (*b)
	{
		last = idx / 10;
		idx = idx / 10;
		dec += last * base;
		base = base * 2;
	}
	return (dec);
}
