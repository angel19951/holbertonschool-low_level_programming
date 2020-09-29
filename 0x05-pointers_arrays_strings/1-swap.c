#include "holberton.h"
/**
 * swap_int - changes value of variables
 * @a: variable to be changed
 * @b: variable to be changed
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

