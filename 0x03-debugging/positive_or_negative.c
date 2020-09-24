#include <stdio.h>
#include "holberton.h"

/**
* positive_or_negative - prints if value is positive, negative or equal to zero
* @i: value to be checked
* Return: no return
*/
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
}
