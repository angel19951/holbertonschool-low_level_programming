#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two integers
 * @argc: ammount of arguments
 * @argv: arguments
 * Return: always 0 on succes
 */

int main(int argc, char *argv[])
{
	int multReslt, a, b;

	if (argc < 3)
	{
		printf("Error");
		return (-1);
	}

		a = atoi(argv[1]);
		b = atoi(argv[2]);

		multReslt = a * b;
		printf("%d\n", multReslt);

	return (0);
}
