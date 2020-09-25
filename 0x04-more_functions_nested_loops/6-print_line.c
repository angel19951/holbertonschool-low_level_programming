#include "holberton.h"
/**
* print_lines - prints _ according to the integer
* @n: variable to be checked
* Return: return lines or new line
*/
void print_line(int n)
{
	int i;

	if (n <=0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0 ; i < n ; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
