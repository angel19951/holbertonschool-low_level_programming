#include "holberton.h"
/**
* print_last_digit - prints the last digit of a variable
* @digit: iteger value entry
* Return: last digit
*/
int print_last_digit(int digit)
{

	digit = digit % 10;
	if (digit < 0)
	{
	digit = (digit * -1);
	}
	_putchar(digit + '0');
	return (digit);
}
