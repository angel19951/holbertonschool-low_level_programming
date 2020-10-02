#include "holberton.h"
/**
 * *leet - encodes string into LEER 1337
 * @s: string to be encoded
 * Return: s with replace string
 */
char *leet(char *s)
{
	int count;
	int comparer;
	int forbidChar[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int replacerChar[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (count = 0; s[count] != '\0'; count++)
	{
		for (comparer = 0; forbidChar[comparer] != '\0'; comparer++)
		{
			if (s[count] == forbidChar[comparer])
			{
				s[count] = replacerChar[comparer];
			}
		}
	}
	return (s);
}
