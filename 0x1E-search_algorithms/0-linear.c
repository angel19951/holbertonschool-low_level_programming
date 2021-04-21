#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - searches for a value in an array of ints using linear search
 * algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: value to search for in the array
 * Return: position of value in list or -1 if fail
 */
int linear_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	for (unsigned int cnt = 0; cnt < size; cnt++)
	{
		printf("Value checked array[%d] = [%d]\n", cnt, *(array + cnt));
		if (*(array + cnt) == value)
		{
			return (cnt);
		}
	}

	return (-1);
}
