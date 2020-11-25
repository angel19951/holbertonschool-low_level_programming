#include "holberton.h"

/**
 * strpbrk - locates the firts ocurrence in the string s of any bytes in the
 * string accept
 * @s: chars to look at
 * @accept: accepted chars
 */

char *_strpbrk(char *s, char *accept)
{
	int idx, cnt;

	if (*s == '\0' || *accept == '\0')
		return ('\0');

	for (idx = 0; *(s + idx) != '\0'; idx++)
	{
		for (cnt = 0; *(accept + cnt) != '\0'; cnt++)
		{
			if (*(s + idx) == *(accept + cnt))
			{
				return (s + idx);
			}
		}
	}
	return ('\0');
}
