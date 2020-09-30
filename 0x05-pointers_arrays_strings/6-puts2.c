#include "holberton.h"
/**
 * puts2 - print every other number
 * @str: string to be printed
 * Return: no return
 */
void puts2(char *str)
{
	int count;
	int length;

	for (count = 0 ; str[count] != '\0' ; count += 2)
	{
		length += 2;
		if (str[length] != '\0')
		{
		_putchar(str[length]);
		}
	}
	_putchar('\n');
}
