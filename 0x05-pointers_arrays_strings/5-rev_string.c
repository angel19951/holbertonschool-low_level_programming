#include "holberton.h"
/**
 * rev_string - prints a reverse string
 * @s: string to be reversed
 * Return: no return
 */
void rev_string(char *s)
{
	int count, mover;
	int length = 0;
	char *stBegin, *stEnd, temp;

	for (count = 0 ; s[count] ; count++)
	{
		length++;
	}
	stBegin = s;
	stEnd = s;

	for (mover = 0 ; mover < length - 1 ; mover++)
	{
		stEnd++;
	}

	for (mover = 0 ; mover < length / 2; mover++)
	{
		temp = *stEnd;
		*stEnd = *stBegin;
		*stBegin = temp;

		stBegin++;
		stEnd--;
	}
}
