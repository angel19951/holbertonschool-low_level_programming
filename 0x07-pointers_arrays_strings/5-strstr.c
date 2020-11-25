#include "holberton.h"

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
