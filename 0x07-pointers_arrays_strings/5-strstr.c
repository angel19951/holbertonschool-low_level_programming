#include "holberton.h"

/**
 * _strstr - finds the first ocurrence of a substring
 * @haystack: string to search through
 * @needle: string to find in haystack
 * Return: NULL if failled || pointer to the beginning of substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, cnt;

	if (*needle == '\0')
	{
		return (haystack);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		cnt = 0;
		while (haystack[i + cnt] == needle[cnt])
		{
			cnt++;
		}
		if (needle[cnt] == '\0')
		{
			return (&haystack[i]);
		}
	}
	return ('\0');
}
