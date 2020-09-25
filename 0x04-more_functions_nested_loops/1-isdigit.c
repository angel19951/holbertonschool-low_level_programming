#include "holberton.h"
/**
* _isdigit - checks if variable is a digit
* @c: variable to be checked
* Return: 1 if succes 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
