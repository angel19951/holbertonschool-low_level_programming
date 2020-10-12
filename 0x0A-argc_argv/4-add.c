#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers
 * @argc: ammount of arguments
 * @argv: arguments
 * Return: always 0 on success
 */

int main(int argc, char *argv[])
{
	int index, sum;

	if (argc >= 1)
	{
		for (index = 1; index < argc; index++)
		{
			if (*argv[index] >= 'a' && *argv[index] <= 'z')
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[index]);
		}
		printf("%d\n", sum);
		return (0);
	}
	else
		return (0);
}
