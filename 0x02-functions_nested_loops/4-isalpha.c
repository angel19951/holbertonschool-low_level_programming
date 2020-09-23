#include "holberton.h"
#include <ctype.h>
/**
* _isalpha - check for lower or upper case letters
* @c: variable to be checked
* Return: returns 1 if c is a letter, lowercase or uppercase
*/
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
