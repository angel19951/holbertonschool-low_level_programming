#include <stdio.h>
#include "holberton.h"
/**
*
*
*
*/

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n > 98)
		{
			n = n  - 1;
		}
		if (n < 98)
		{
			n++;
		}
		
	}
	printf("%d", n);
	printf("\n");
}
