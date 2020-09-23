#include <stdio.h>
#include "holberton.h"
/**
* print_to_98 - increases until 98 or subtracts
* @n: variable to be printed
* Return: no return
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
