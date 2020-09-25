#include "holberton.h"

/**
* _isupper - checks value for upper case letter
* @c: variable to be checked
* Return: return 1 on upper 0 on lowercase
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
