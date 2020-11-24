#include "function_pointers.h"
/**
 * array_iterator - gives a parameter on each element of an array
 * @size: size of array
 * @array: pointer for elements to pass
 * @action: pointer to the function needed
 * Return: no return for void function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
	{
		return;
	}
	else if (action == NULL)
	{
		return;
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			(*action)(*(array + i));
		}
	}
}
