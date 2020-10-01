#include "holberton.h"
/**
 * reverse_array - print array in reverse
 * @a: array to be reversed
 * @n: length of array
 * Return: no return
 */
void reverse_array(int *a, int n)
{
	int decrease, tempHolder;

	for (decrease = 0 ; n > decrease ; decrease++)
	{
		n--;
		tempHolder = *(a + decrease);
		*(a + decrease) = *(a + n);
		*(a + n) = tempHolder;
	}
}
