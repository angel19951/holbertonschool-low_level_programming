#include "holberton.h"
/**
* print_sign - prints sing according to the value of variable
* @n: variable to be checked
* Return: 1 when n greatar than 0, 0 when n is 0, -1 when n is less than 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
