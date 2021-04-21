#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search
 * @size: size of the array
 * @value: value to search for
 * Return: index where the value is located or -1 if failed
 */

int binary_search(int *array, size_t size, int value)
{
	int begin = 0;
	int end = size - 1;
	int halve;
	int cnt;

	while (begin <= end)
	{
		halve = (end + begin) / 2;
		printf("Searching in array: ");
		for (cnt = begin; cnt <= end ; cnt++)
		{
			if (cnt < end)
				printf("%d, ", *(array + cnt));
			else
				printf("%d", *(array + cnt));
		}
		printf("\n");

		if (*(array + halve) > value)
			end = halve - 1;
		else if (*(array + halve) < value)
			begin = halve + 1;
		else if (*(array + halve) == value)
			return (halve);
	}
	return (-1);
}
