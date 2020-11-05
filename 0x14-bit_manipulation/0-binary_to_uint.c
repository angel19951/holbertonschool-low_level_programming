#include "holberton.h"

/**
 * binary_to_uint - converts binary to unsgined int
 * @b: binary to be converted
 * Return: 0 if failed | conversion of decimal on success
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec, idx, last;
	unsigned int base = 1;

	if (b == NULL)
	{
		return (0);
	}

	dec = 0;
	idx = atoi(b);
	while (*b)
	{
		if (*b != '1' && *b != '0')
		{
			return (0);
		}
		last = idx % 10;
		idx = idx / 10;
		dec += last * base;
		base = base * 2;
		b++;
	}
	return (dec);
}
