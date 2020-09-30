#include "holberton.h"
/**
 * puts2 - print every other number
 * @str: string to be printed
 * Return: no return
 */
void puts2(char *str)
{
	int count;
	char *stHolder;

	stHolder = str;
	for (count = 0 ; *(stHolder + count) != '\0' ; count += 2)
	{
		_putchar(*(stHolder + count));
	}
	_putchar('\n');
}
