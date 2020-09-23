#include "holberton.h"
/**
* _isalpha - check for lower or upper case letters
* @c: variable to be checked
* Return: returns 1 if c is a letter, lowercase or uppercase
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
