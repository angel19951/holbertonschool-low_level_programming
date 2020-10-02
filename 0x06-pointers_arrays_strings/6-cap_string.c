#include "holberton.h"

/**
 * *cap_string - cappitalize string but ignore seperators
 * @toUpper: variable to be switched to upper case
 * Return: return toUpper
 */
char *cap_string(char *toUpper)
{
	int count;

	for (count = 0 ; toUpper[count] != '\0' ; count++)
	{
		if (toUpper[count] >= 'a' && toUpper[count] <= 'z')
		{
			toUpper[count] = toUpper[count] - 'a' + 'A';
		}
	}
	return (toUpper);
}
