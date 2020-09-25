#include "holberton.h"

/**
* print_most_numbers - prints from 0 to 9 but not 2 or 4
*
* Return: no return
*/

void print_most_numbers(void)
{
	int n;

	for (n = 0 ; n <= 9 ; n++)
	{
		if (n != 2 && n != 4)
		{
			_putchar(n + '0');
		}
	}
	_putchar('\n');
}
