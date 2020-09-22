#include "holberton.h"
#include <ctype.h>
/**
* _islower - checks for lowercase letters
*
* Return: 1 if variale is lowercase otherwise return 0
*/
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
