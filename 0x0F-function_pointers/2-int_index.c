#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: arguments to pass
 * @size: size of the array
 * @cmp: command to look for
 * Return: -1 on fail
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if((cmp)(*(array + i)))
				return (i);
		}
	}
	return (-1);
}

