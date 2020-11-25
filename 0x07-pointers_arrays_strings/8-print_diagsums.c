#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: values of the matrix
 * @size: size of the matrix
 * Return: no return for void function
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sums = 0;

	for (i = 0; i < (size * size); i = i + (size + 1))
	{
		sums = sums + a[i];
	}

	printf("%d, ", sums);

	sums = 0;
	for (i = (size - 1); i < (size * size - 1); i = i + (size - 1))
	{
		sums = sums + a[i];
	}

	printf("%d\n", sums);
}
