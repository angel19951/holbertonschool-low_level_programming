#include "holberton.h"
/**
 * puts_half - prints second half of an array
 * @str: string to be printed
 * Return: no return;
 */

void puts_half(char *str)
{
	int count;
	int stLength1, stLength2;

	for (count = 0 ; *(str + count) != '\0'  ; count++)
		;
	
	stLength1 = count / 2;
	stLength2 = count - stLength1;
	
	for (stLength2 = stLength2 ; *(str + stLength2) != '\0'; stLength2++)
	{
		_putchar(*(str + stLength2));
	}
	_putchar('\n');
}

