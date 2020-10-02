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
		if (*toUpper >= 'a' && *toUpper <= 'z')
		{
			return (toUpper);
		}
		else if (*toUpper >= 'A' && *toUpper <= 'Z')
		{
			return (toUpper);
		}
		else if (*toUpper >= '1' && *toUpper <= '9')
		{
			return (toUpper);
		}
		else
		{
			return (0);
		}
	}
	return (toUpper);
}
