#include "holberton.h"

/**
* _islower - checks for lowercase letters
* @c: variable to be checked
* Return: 1 if variale is lowercase otherwise return 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
