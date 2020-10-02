#include "holberton.h"
/**
 * *string_toupper - changes lower cases to upper case
 * @toUpper: variable to be change to upper case
 * Return: return c
 */
char *string_toupper(char *toUpper)
{
	int counter;
	int changer;

	for (counter = 0 ; toUpper[counter] != '\0' ; counter++)
		;
	for (changer = 0 ; changer < counter ; changer++)
	{
		if (toUpper[changer] >= 'a' && toUpper[changer] <= 'z')
		{
			toUpper[changer] = toUpper[changer] - 'a' + 'A';
		}
	}
	return (toUpper);
}
