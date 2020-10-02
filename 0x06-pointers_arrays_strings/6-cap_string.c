#include "holberton.h"

/**
 * *cap_string - cappitalize string but ignore seperators
 * @toUpper: variable to be switched to upper case
 * Return: return toUpper
 */
char *cap_string(char *cap)
{
	int count;
	int separator[] = {'"', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}', ' ', '\t', '\n'};
	int sepCount;

	for (count = 0 ; cap[count] != '\0' ; count++)
	{
		if (count == 0)
		{
			if ((cap[count] >= 'a' && cap[count] <= 'z'))
			{
			cap[count] = cap[count] - 32;
			}
			continue;
		}
		for (sepCount = 0 ; separator[sepCount] != '\0' ; sepCount++)
		{
			if (cap[count] == separator[sepCount])
			{
				count++;
				if (cap[count] >= 'a' && cap[count] <= 'z')
				{
					cap[count] = cap[count] - 32;
				}
			}
		}
	}
		return (cap);
}
