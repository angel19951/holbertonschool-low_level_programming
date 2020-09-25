#include "holberton.h"
/**
* more_numbers - prints from 0 to 14, ten times
*
* Return: no return
*/
void more_numbers(void)
{
	int n;
	int i = 0;
	while(i <= 9)
	{
		for (n = 0 ; n <= 14 ; n++)
		{
		if (n > 9)
		{
		_putchar(n / 10 + '0');
		}
		_putchar(n % 10 + '0');
		}
	i++;

	_putchar('\n');
	}	
}
