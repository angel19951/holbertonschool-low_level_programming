#include "holberton.h"

/**
 * binary_to_uint - converts binary to unsgined int
 * @b: binary to be converted
 * Return: 0 if failed | conversion of decimal on success
 */
unsigned int binary_to_uint(const char *b)
{
	int count;
	unsigned int idx, sum;

	if (b == NULL)
	{
		return (0);
	}

	for (count = 0; *(b + count) != '\0'; count++)
	{
		if (*(b + count) != '1' && *(b + count) != '0')
		{
			return (0);
		}
	}

	sum = 0;
	for (count = count - 1, idx = 1; count >= 0; count--, idx = idx * 2)
	{
		if (*(b + count) == '1')
		{
			sum += idx;
		}
	}
	return (sum);
}
