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
		length++;
		if (str[length] != '\0' - 1)
		{
		_putchar(str[count]);
		}
	}
	_putchar('\n');
}
