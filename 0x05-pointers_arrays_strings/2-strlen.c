#include "holberton.h"
/**
 * _strlen - prints the lenght of a string
 * @s: lenght of string
 * Return: int value
 */
int _strlen(char *s)
{
	int count;
	int lenght = 0;

	for (count = 0 ; s[count] != '\0' ; count++)
	{
		lenght++;
	}
	return (lenght);
}
