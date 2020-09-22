#include "holberton.h"
/**
* print_alphabet - prints the alphaber
*
* Return: return 0 value at end of function
*/

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
	_putchar(alphabet);
	}
	_putchar('\n');

}
