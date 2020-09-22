#include "holberton.h"
/**
* print_alphabet_x10 - prints the alphabet 10 times
*
* Return: no return in a void function.
*/
void print_alphabet_x10(void)
{
int x = 0;
char alphabet;
while (x <= 9)
{
	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
x++;
}
}
