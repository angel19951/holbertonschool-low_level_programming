#include "holberton.h"
#include <stdio.h>

/**
 * main - prints 1 to 100 but every multiplier of 3 = Fizz, 5 = Buzz and,
 * for 5 and 3 multipliers FizzBuzz
 *
 * Return: no return on void function
 */

int main(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if (count % 3 == 0 && count % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (count % 3 == 0)
		{
			printf("Fizz");
		}
		else if (count % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", count);
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
