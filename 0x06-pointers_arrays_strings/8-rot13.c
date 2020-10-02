#include "holberton.h"
/**
 * *rot13 - encodes values to rot13
 * @s: string to be encoded
 * Return: return s
 */
char *rot13(char *s)
{
	int count;
	int comparer;
	char forbidChar[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char replaceChar[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (count = 0; s[count] != '\0'; count++)
	{
		for (comparer = 0; forbidChar[comparer] != '\0'; comparer++)
		{
			if (s[count] == forbidChar[comparer])
			{
				s[count] = replaceChar[comparer];
				break;
			}
		}
	}
	return (s);
}
