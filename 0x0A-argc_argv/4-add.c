#include "holberton.h"
#include <stdio.h>
#include <ctype.h>
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

	if (argv[1] == '\0')
	{
		printf("0\n");
		return (0);
	}
	for (index = 1; index < argc; index++)
	{
		if (*argv[index] < 0)
		{
			printf("Error\n");
			return (1);
		}
		if (*argv[index] >= 'a' && *argv[index] <= 'z')
		{
			printf("Error\n");
			return (1);
		}
		else if (*argv[index] >= 'A' && *argv[index] <= 'Z')
		{
			printf("Error\n");
			return (1);
		}
	sum += atoi(argv[index]);
	}
	printf("%d\n", sum);
	return (sum);
}

