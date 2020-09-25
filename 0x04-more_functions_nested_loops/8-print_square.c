#include "holberton.h"

/**
* print_square - prints square
* @size: size of the sqaure
* Retrun: no return
*/
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	int column, rows;

	for (column = 1 ; column <= size ; column++)
	{
		for (rows = 1 ; rows <= size ; rows++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
}
