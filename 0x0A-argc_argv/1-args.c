#include "holberton.h"
#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: ammount of arguments
 * @argv: argument string
 * Return: always 0 on success
 */
int main(int argc, char *argv[])
{
	int index;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (index = 1; argv[index]; index++)
		;
		printf("%d\n", argc - 1);
	return (0);
}
