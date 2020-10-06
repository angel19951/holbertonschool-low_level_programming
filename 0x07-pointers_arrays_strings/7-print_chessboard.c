#include "holberton.h"

/**
 * print_chessboard - prints a chessboard
 * @a: strings to be printed in chesboard
 * Return: no return
 */

void print_chessboard(char (*a)[8])
{
	int row;
	int col;

	for (row = 0; row < 8; row++)
	{
		_putchar('\n');
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
		}
	}
	_putchar('\n');
}
