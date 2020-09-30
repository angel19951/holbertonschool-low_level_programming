#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print elements of an array
 * @a: array to be printed
 * @n: number of elements
 * Return: no return
 */

void print_array(int *a, int n)
{
	int length;

	for (length = 0 ; length < n ; length++)
	{
		printf("%d" , a[length]);
		if (length < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
