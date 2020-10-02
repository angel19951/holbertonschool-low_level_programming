#include "holberton.h"

/**
 * *cap_string - cappitalize string but ignore seperators
 * @cap: variable to be switched to upper case
 * Return: return toUpper
 */
char *cap_string(char *cap)
{
int count;
int sp[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', ' ', '\t', '\n'};
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
		for (sepCount = 0 ; sp[sepCount] != '\0' ; sepCount++)
		{
			if (cap[count] == sp[sepCount])
			{
				if (cap[count + 1] >= 'a' && cap[count + 1] <= 'z')
				{
					cap[count + 1] = cap[count + 1] - 32;
				}
			}
		}
	}
		return (cap);
}
