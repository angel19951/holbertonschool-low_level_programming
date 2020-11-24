#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: no return for void function
 */

void print_triangle(int size)
{
	int i, count;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (count = 0; count < size; count++)
			{
				if(count < (size - i - 1))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
