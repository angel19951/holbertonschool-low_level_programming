#include "holberton.h"
/**
* times_table - prints the times 9 table.
*
* Return: no return
*/
void times_table(void)
{
	int n, i, result;

	for (n =  0; n <= 9; n++)
	{
		for(i = 0 ; i <= 9 ; i++)
		{
			if (i == 0)
			{
				_putchar('0');
				continue;
			}
			result = i * n;
			_putchar(',');
			_putchar(' ');
			if (result > 9)
			{
			_putchar(result / 10 + '0');
			_putchar(result % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(result + '0');
			}

		}
		_putchar('\n');
	}
}

